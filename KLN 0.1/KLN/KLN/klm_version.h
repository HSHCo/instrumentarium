#ifndef KLM_VERSION_H
#define KLM_VERSION_H

#include <QDialog>

namespace Ui {
class KLM_Version;
}

class KLM_Version : public QDialog
{
    Q_OBJECT

public:
    explicit KLM_Version(QWidget *parent = 0);
    ~KLM_Version();

private:
    Ui::KLM_Version *ui;
};

#endif // KLM_VERSION_H
