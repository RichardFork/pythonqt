#include "PythonQtWrapper_QTransform.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qline.h>
#include <qmatrix.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qtransform.h>

QTransform* PythonQtWrapper_QTransform::new_QTransform()
{ 
return new QTransform(); }

QTransform* PythonQtWrapper_QTransform::new_QTransform(const QMatrix&  mtx)
{ 
return new QTransform(mtx); }

QTransform* PythonQtWrapper_QTransform::new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23)
{ 
return new QTransform(h11, h12, h13, h21, h22, h23); }

QTransform* PythonQtWrapper_QTransform::new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33)
{ 
return new QTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33); }

QPainterPath  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPainterPath&  p) const
{
return  (*theWrappedObject).map(p);
}

QTransform  PythonQtWrapper_QTransform::adjoint(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).adjoint();
}

void PythonQtWrapper_QTransform::writeTo(QTransform* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

QTransform::TransformationType  PythonQtWrapper_QTransform::type(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).type();
}

qreal  PythonQtWrapper_QTransform::m32(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).m32();
}

QTransform&  PythonQtWrapper_QTransform::operator_divide_assign(QTransform* theWrappedObject, qreal  div)
{
return  (*theWrappedObject)/= div;
}

qreal  PythonQtWrapper_QTransform::dx(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).dx();
}

bool  PythonQtWrapper_QTransform::isInvertible(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).isInvertible();
}

QPolygon  PythonQtWrapper_QTransform::mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const
{
return  (*theWrappedObject).mapToPolygon(r);
}

bool  PythonQtWrapper_QTransform::static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result)
{
return QTransform::quadToQuad(one, two, result);
}

qreal  PythonQtWrapper_QTransform::m22(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).m22();
}

qreal  PythonQtWrapper_QTransform::m11(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).m11();
}

QTransform&  PythonQtWrapper_QTransform::rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis)
{
return  (*theWrappedObject).rotateRadians(a, axis);
}

bool  PythonQtWrapper_QTransform::isRotating(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).isRotating();
}

qreal  PythonQtWrapper_QTransform::m13(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).m13();
}

qreal  PythonQtWrapper_QTransform::m33(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).m33();
}

bool  PythonQtWrapper_QTransform::static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result)
{
return QTransform::squareToQuad(square, result);
}

qreal  PythonQtWrapper_QTransform::m21(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).m21();
}

const QMatrix&  PythonQtWrapper_QTransform::toAffine(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).toAffine();
}

void PythonQtWrapper_QTransform::readFrom(QTransform* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

qreal  PythonQtWrapper_QTransform::det(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).det();
}

QTransform&  PythonQtWrapper_QTransform::scale(QTransform* theWrappedObject, qreal  sx, qreal  sy)
{
return  (*theWrappedObject).scale(sx, sy);
}

qreal  PythonQtWrapper_QTransform::m31(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).m31();
}

QLineF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QLineF&  l) const
{
return  (*theWrappedObject).map(l);
}

bool  PythonQtWrapper_QTransform::static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result)
{
return QTransform::quadToSquare(quad, result);
}

QTransform&  PythonQtWrapper_QTransform::rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis)
{
return  (*theWrappedObject).rotate(a, axis);
}

QTransform&  PythonQtWrapper_QTransform::shear(QTransform* theWrappedObject, qreal  sh, qreal  sv)
{
return  (*theWrappedObject).shear(sh, sv);
}

QRect  PythonQtWrapper_QTransform::mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const
{
return  (*theWrappedObject).mapRect(arg__1);
}

qreal  PythonQtWrapper_QTransform::m23(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).m23();
}

QTransform&  PythonQtWrapper_QTransform::translate(QTransform* theWrappedObject, qreal  dx, qreal  dy)
{
return  (*theWrappedObject).translate(dx, dy);
}

qreal  PythonQtWrapper_QTransform::dy(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).dy();
}

QTransform&  PythonQtWrapper_QTransform::operator_subtract_assign(QTransform* theWrappedObject, qreal  div)
{
return  (*theWrappedObject)-= div;
}

QPolygonF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPolygonF&  a) const
{
return  (*theWrappedObject).map(a);
}

bool  PythonQtWrapper_QTransform::isScaling(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).isScaling();
}

qreal  PythonQtWrapper_QTransform::determinant(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).determinant();
}

QRectF  PythonQtWrapper_QTransform::mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const
{
return  (*theWrappedObject).mapRect(arg__1);
}

bool  PythonQtWrapper_QTransform::isIdentity(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).isIdentity();
}

QPolygon  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPolygon&  a) const
{
return  (*theWrappedObject).map(a);
}

QTransform&  PythonQtWrapper_QTransform::operator_add_assign(QTransform* theWrappedObject, qreal  div)
{
return  (*theWrappedObject)+= div;
}

void PythonQtWrapper_QTransform::reset(QTransform* theWrappedObject)
{
 (*theWrappedObject).reset();
}

bool  PythonQtWrapper_QTransform::isAffine(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).isAffine();
}

bool  PythonQtWrapper_QTransform::operator_equal(QTransform* theWrappedObject, const QTransform&  arg__1) const
{
return  (*theWrappedObject)== arg__1;
}

QPoint  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPoint&  p) const
{
return  (*theWrappedObject).map(p);
}

QRegion  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QRegion&  r) const
{
return  (*theWrappedObject).map(r);
}

QTransform&  PythonQtWrapper_QTransform::operator_multiply_assign(QTransform* theWrappedObject, qreal  div)
{
return  (*theWrappedObject)*= div;
}

QTransform  PythonQtWrapper_QTransform::transposed(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).transposed();
}

qreal  PythonQtWrapper_QTransform::m12(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).m12();
}

QTransform  PythonQtWrapper_QTransform::inverted(QTransform* theWrappedObject, bool*  invertible) const
{
return  (*theWrappedObject).inverted(invertible);
}

QLine  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QLine&  l) const
{
return  (*theWrappedObject).map(l);
}

QPointF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPointF&  p) const
{
return  (*theWrappedObject).map(p);
}

void PythonQtWrapper_QTransform::setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33)
{
 (*theWrappedObject).setMatrix(m11, m12, m13, m21, m22, m23, m31, m32, m33);
}

bool  PythonQtWrapper_QTransform::isTranslating(QTransform* theWrappedObject) const
{
return  (*theWrappedObject).isTranslating();
}

QTransform  PythonQtWrapper_QTransform::multiplied(QTransform* theWrappedObject, const QTransform&  o) const
{
return  (*theWrappedObject)* o;
}

QTransform&  PythonQtWrapper_QTransform::operator_multiply_assign(QTransform* theWrappedObject, const QTransform&  arg__1)
{
return  (*theWrappedObject)*= arg__1;
}
