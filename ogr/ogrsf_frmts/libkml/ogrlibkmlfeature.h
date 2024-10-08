/******************************************************************************
 *
 * Project:  KML Translator
 * Purpose:  Implements OGRLIBKMLDriver
 * Author:   Brian Case, rush at winkey dot org
 *
 ******************************************************************************
 * Copyright (c) 2010, Brian Case
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *****************************************************************************/

#ifndef OGR_LIBKML_FEATURE_H
#define OGR_LIBKML_FEATURE_H

#include "ogr_libkml.h"

/******************************************************************************
 Function to output a ogr feature to a kml placemark.
******************************************************************************/

kmldom::FeaturePtr feat2kml(OGRLIBKMLDataSource *poOgrDS,
                            OGRLIBKMLLayer *poKOgrLayer, OGRFeature *poOgrFeat,
                            kmldom::KmlFactory *poKmlFactory,
                            int bUseSimpleField);

/******************************************************************************
 Function to read a kml placemark into a ogr feature.
******************************************************************************/

OGRFeature *kml2feat(kmldom::PlacemarkPtr poKmlPlacemark,
                     OGRLIBKMLDataSource *poOgrDS, OGRLIBKMLLayer *poOgrLayer,
                     OGRFeatureDefn *poOgrFeatDefn,
                     OGRSpatialReference *poOgrSRS);

OGRFeature *kmlgroundoverlay2feat(kmldom::GroundOverlayPtr poKmlOverlay,
                                  OGRLIBKMLDataSource *poOgrDS,
                                  OGRLIBKMLLayer *poOgrLayer,
                                  OGRFeatureDefn *poOgrFeatDefn,
                                  OGRSpatialReference *poOgrSRS);

#endif /*  OGR_LIBKML_FEATURE_H */
