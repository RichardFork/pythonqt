#include "PythonQtWrapper_QFontInfo.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qfont.h>
#include <qfontinfo.h>

QFontInfo* PythonQtWrapper_QFontInfo::new_QFontInfo(const QFont&  arg__1)
{ 
return new QFontInfo(arg__1); }

QFontInfo* PythonQtWrapper_QFontInfo::new_QFontInfo(const QFontInfo&  arg__1)
{ 
return new QFontInfo(arg__1); }

bool  PythonQtWrapper_QFontInfo::strikeOut(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).strikeOut();
}

int  PythonQtWrapper_QFontInfo::pixelSize(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).pixelSize();
}

qreal  PythonQtWrapper_QFontInfo::pointSizeF(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).pointSizeF();
}

bool  PythonQtWrapper_QFontInfo::fixedPitch(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).fixedPitch();
}

bool  PythonQtWrapper_QFontInfo::overline(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).overline();
}

bool  PythonQtWrapper_QFontInfo::exactMatch(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).exactMatch();
}

QString  PythonQtWrapper_QFontInfo::family(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).family();
}

bool  PythonQtWrapper_QFontInfo::italic(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).italic();
}

QFont::StyleHint  PythonQtWrapper_QFontInfo::styleHint(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).styleHint();
}

bool  PythonQtWrapper_QFontInfo::underline(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).underline();
}

int  PythonQtWrapper_QFontInfo::weight(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).weight();
}

bool  PythonQtWrapper_QFontInfo::bold(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).bold();
}

bool  PythonQtWrapper_QFontInfo::rawMode(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).rawMode();
}

QFont::Style  PythonQtWrapper_QFontInfo::style(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).style();
}

int  PythonQtWrapper_QFontInfo::pointSize(QFontInfo* theWrappedObject) const
{
return  (*theWrappedObject).pointSize();
}
