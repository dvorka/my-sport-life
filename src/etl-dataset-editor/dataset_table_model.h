/*
 dataset_table_model.h     Endurance Training Log dataset editor

 Copyright (C) 2020 Martin Dvorak <martin.dvorak@mindforger.com>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef ETL76_OUTLINES_TABLE_MODEL_H
#define ETL76_OUTLINES_TABLE_MODEL_H

#include <iostream>

#include <QtWidgets>

#include "dataset.h"

Q_DECLARE_METATYPE(etl76::Dataset*)
Q_DECLARE_METATYPE(etl76::DatasetInstance*)


namespace etl76 {

class DatasetTableModel : public QStandardItemModel
{
    Q_OBJECT

public:
    DatasetTableModel(QObject* parent);

    void removeAllRows();
    void setRows(Dataset* dataset);
    void addRow(DatasetInstance* instance);
};

} // namespace etl76

#endif // ETL76_OUTLINES_TABLE_MODEL_H
