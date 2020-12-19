#ifndef WBDE_FILELISTMODEL_H
#define WBDE_FILELISTMODEL_H

#include <QAbstractListModel>

class WbdeFileListModel : public QAbstractListModel{
    public:
        WbdeFileListModel();
        ~WbdeFileListModel();

        int rowCount(const QModelIndex &parent = QModelIndex()) const override;
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    private:
};

#endif