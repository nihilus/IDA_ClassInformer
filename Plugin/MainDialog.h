
#pragma once

#include <Windows.h>
#include <QtGui/QDialog>
#include "ui_dialog.h"

class MainDialog : public QDialog, public Ui::Dialog
{
    Q_OBJECT
public:
    MainDialog(BOOL &optionPlaceStructs, BOOL &optionProcessStatic, BOOL &optionOverwriteComments, BOOL &optionAudioOnDone);
};

// Do main dialog, return TRUE if canceled
BOOL DoMainDialog(BOOL &optionPlaceStructs, BOOL &optionProcessStatic, BOOL &optionOverwriteComments, BOOL &optionAudioOnDone);
