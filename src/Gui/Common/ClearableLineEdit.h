// Copyright (c) 2015-2017, The Bytecoin developers. 2018 BBSCoin developers.
//
// This file is part of BBSCoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <QLineEdit>

namespace WalletGui {

class ClearableLineEdit : public QLineEdit {
  Q_OBJECT
  Q_DISABLE_COPY(ClearableLineEdit)

public:
  explicit ClearableLineEdit(QWidget* _parent = 0);
  ~ClearableLineEdit();
};

}
