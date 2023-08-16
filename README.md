# cppQtAvroPhonetic

> :warning: **The original library was replaced with linengine**: To use the following examples, use the header in the test directory.

A C++ implementation of Avro Phonetic using Qt framework

### Overview
**cppQtAvroPhonetic** implements the popular Bengali writing solution Avro Phonetic. cppQtAvroPhonetic has a main class named **AvroPhonetic**. It is actually a shameless Qt translation of **cppAvroPhonetic** by Muhammad Mominul Huque.

### Features

* **100%** compatible with **Avro Phonetic** implementation of **Avro Keyboard**.
* **100%** compatible with Unicode specification version 8.0
* Written in **C++** using **Qt5** framework and should be compatible with **newer** versions.
* It is a standalone implementation. So it can be run easily.
* For integration to you application use the example

### Dependency

**cppQtAvroPhonetic** or **AvroPhonetic** class depends on **Qt5** specification. So you will need Qt5 to compile.

### Example

Working with cppQtAvroPhonetic is very easy. Here is an example:

```cpp qt5
#include <QDebug>
#include <QString>
#include "avrophonetic.h"

int main()
{
  // 'AvroPhonetic' is the converter class.
  AvroPhonetic avro;
  QString bangla;
  bangla = avro.parse("ami banglay gan gai"); // Outputs "আমি বাংলায় গান গাই"
  QDebug() << bangla;
  return 0;
}
```

### Acknowledgements

 - **Mehdi Hasan Khan** for originally developing and maintaining **Avro Phonetic**.
 - **Rifat Nabi** for his [scim-avro](https://code.google.com/p/scim-avro/)
 - **Muhammad Mominul Huque** for his pure C++ translation [cppAvroPhonetic](https://github.com/mominul/cppAvroPhonetic)

### License
<img align="right" src="http://opensource.org/trademarks/opensource/OSI-Approved-License-100x137.png">


Copyright (C) 2014-2015 Muhammad Mominul Huque <<nahidbinbaten1995@gmail.com>>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

The full license text can be found in `LICENSE`.
