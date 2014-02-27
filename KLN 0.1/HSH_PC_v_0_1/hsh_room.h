#ifndef HSH_ROOM_H
#define HSH_ROOM_H

#include <QDialog>

namespace Ui {
    class HSH_Room;
}

class HSH_Room : public QDialog
{
    Q_OBJECT

public:
    explicit HSH_Room(QWidget *parent = 0);
    ~HSH_Room();

private:
    Ui::HSH_Room *ui;

private slots:
    void on_pushButton_3_clicked();
};

#endif // HSH_ROOM_H
