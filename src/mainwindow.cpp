/*
 * Copyright (C) 2023  Abdullah AL Shohag
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * raven.downloader is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_convertButton_clicked()
{
    QString input = ui->inputText->text();

    ui->outputText->setPlainText("Current Word: ");
    ui->outputText->appendPlainText(parser.parse(input));
    ui->outputText->appendPlainText("\n Suggested Words: ");
    ui->outputText->appendPlainText(suggestions.Suggest(input).join(", "));

    qDebug() << suggestions.Suggest(input);
    qDebug() << parser.parse(input);
}


void MainWindow::on_inputText_returnPressed()
{
    this->on_convertButton_clicked();
}

