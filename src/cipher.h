#ifndef CIPHER_H
#define CIPHER_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QDialog>
#include <QString>
#include <QLabel>
#include <QFileDialog>
#include <QLineEdit>
#include <QGridLayout>
#include <QRegExp>
#include <QMessageBox>
#include <QComboBox>
#include <QRadioButton>

#include "rabin.h"
#include "rsa.h"
#include "elgamal.h"
#include "aes.h"
#include "des.h"

class Cipher : public QDialog
{
    Q_OBJECT

public:
    Cipher();
    Cipher(int, int);

private:
    int rep;

    QPushButton *buttonBrowsePlain;
    QPushButton *buttonBrowseKey;
    QPushButton *buttonCancel;
    QPushButton *buttonCompute;

    QComboBox *comboMode;
    QComboBox *comboSize;

    QLabel *labelPlain;
    QLabel *labelCipher;
    QLabel *labelKey;
    QLabel *labelMode;
    QLabel *labelIv;

    QFileDialog *fdPlain;
    QFileDialog *fdKey;

    QLineEdit *lePlain;
    QLineEdit *leCipher;
    QLineEdit *leKey;
    QLineEdit *leIv;

    QRegExp *rePlain;
    QRegExp *reCipher;
    QRegExp *reKey;
    QRegExp *reIv;

    QMessageBox *mb;

    QGridLayout *gl;

    QRadioButton *radioIv;

    RSA2 *rsa;
    ElGamal *elGamal;
    Rabin *rabin;
    AES *aes;
    DES *des;

public slots:
    void computeRSA();
    void computeElGamal();
    void computeRabin();
    void computeRSAOAEP();
    void computeAES();
    void computeDES();    
    void hideIvBox();
};
#endif // CIPHER_H
