/*
 *  cppQTAvroPhonetic - C++ implementation of Avro Phonetic using Qt framework
 *
 *  Qt implementation
 *  Copyright (C) 2023 Abdullah AL Shohag <HackerShohag@outlook.com>
 *  
 *  Original Author
 *  Copyright (C) 2015 Muhammad Mominul Huque <nahidbinbaten1995@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef AVRO_PHONETIC_H
#define AVRO_PHONETIC_H

#include <QString>
#include <QtAlgorithms>

class AvroPhonetic {
private:
  QString pEnglishText;
  int leangthOfString; //Length of English string
  int currentPosition; //Position of processing at English string
  QString outputString; //Result string
  bool AutoCorrect;

  //Bangla Numbers
  QString b_0 = "\u09E6";
  QString b_1 = "\u09E7";
  QString b_2 = "\u09E8";
  QString b_3 = "\u09E9";
  QString b_4 = "\u09EA";
  QString b_5 = "\u09EB";
  QString b_6 = "\u09EC";
  QString b_7 = "\u09ED";
  QString b_8 = "\u09EE";
  QString b_9 = "\u09EF";
  //Bangla Vowels and Kars
  QString b_A = "\u0985";
  QString b_AA = "\u0986";
  QString b_AAkar = "\u09BE";
  QString b_I = "\u0987";
  QString b_II = "\u0988";
  QString b_IIkar = "\u09C0";
  QString b_Ikar = "\u09BF";
  QString b_U = "\u0989";
  QString b_Ukar = "\u09C1";
  QString b_UU = "\u098A";
  QString b_UUkar = "\u09C2";
  QString b_RRI = "\u098B";
  QString b_RRIkar = "\u09C3";
  QString b_E = "\u098F";
  QString b_Ekar = "\u09C7";
  QString b_O = "\u0993";
  QString b_OI = "\u0990";
  QString b_OIkar = "\u09C8";
  QString b_Okar = "\u09CB";
  QString b_OU = "\u0994";
  QString b_OUkar = "\u09CC";
  //Bangla Consonents
  QString b_Anushar = "\u0982";
  QString b_B = "\u09AC";
  QString b_Bh = "\u09AD";
  QString b_Bisharga = "\u0983";
  QString b_C = "\u099A";
  QString b_CH = "\u099B";
  QString b_Chandra = "\u0981";
  QString b_D = "\u09A6";
  QString b_Dd = "\u09A1";
  QString b_Ddh = "\u09A2";
  QString b_Dh = "\u09A7";
  QString b_G = "\u0997";
  QString b_GH = "\u0998";
  QString b_H = "\u09B9";
  QString b_J = "\u099C";
  QString b_JH = "\u099D";
  QString b_K = "\u0995";
  QString b_KH = "\u0996";
  QString b_L = "\u09B2";
  QString b_M = "\u09AE";
  QString b_N = "\u09A8";
  QString b_NGA = "\u0999";
  QString b_Nn = "\u09A3";
  QString b_NYA = "\u099E";
  QString b_P = "\u09AA";
  QString b_Ph = "\u09AB";
  QString b_R = "\u09B0";
  QString b_Rr = "\u09DC";
  QString b_Rrh = "\u09DD";
  QString b_S = "\u09B8";
  QString b_Sh = "\u09B6";
  QString b_Ss = "\u09B7";
  QString b_T = "\u09A4";
  QString b_Th = "\u09A5";
  QString b_Tt = "\u099F";
  QString b_Tth = "\u09A0";
  QString b_Y = "\u09DF";
  QString b_Z = "\u09AF";
  QString AssamRa = "\u09F0";
  QString AssamVa = "\u09F1";
  QString b_Khandatta = "\u09CE";
  //Bangla Others
  QString b_Dari = "\u0964";
  QString b_Hasanta = "\u09CD";
  QString b_Taka = "\u09F3";
  QString ZWJ = "\u200D";
  QString ZWNJ = "\u200C";
  QString b_Nukta = "\u09BC";

  void Dot();
  void smallO();
  void O();
  void h();
  void s();
  void l();
  void R();
  void m();
  void b();
  void p();
  void d();
  void T();
  void J();
  void c();
  void n();
  void k();
  void g();

  QString convertEnglishText();
  QString CorrectCase(QString inputT);
  bool Cnv(QString Compare, QString IfTrue);
  void AddRs(QString T);
  void AddRsEx(QString T, int p);
  QString PrevT();
  QString PrevTEx(int Position);
  QString NextT();
  QString NextTEx(int Length, int skipstart);
  bool Vowel(QString T);
  bool Consonent(QString T);
  bool Number(QString T);
  bool Begining();

public:
  QString parse(const QString input);
};

#endif // AVRO_PHONETIC_H
