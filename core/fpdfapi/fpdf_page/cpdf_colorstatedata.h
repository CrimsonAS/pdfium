// Copyright 2016 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef CORE_FPDFAPI_FPDF_PAGE_CPDF_COLORSTATEDATA_H_
#define CORE_FPDFAPI_FPDF_PAGE_CPDF_COLORSTATEDATA_H_

#include "core/fxcrt/include/fx_system.h"
#include "core/include/fpdfapi/fpdf_resource.h"

class CPDF_ColorStateData {
 public:
  CPDF_ColorStateData() : m_FillRGB(0), m_StrokeRGB(0) {}
  CPDF_ColorStateData(const CPDF_ColorStateData& src);

  void Default();

  CPDF_Color m_FillColor;
  FX_DWORD m_FillRGB;
  CPDF_Color m_StrokeColor;
  FX_DWORD m_StrokeRGB;
};

#endif  // CORE_FPDFAPI_FPDF_PAGE_CPDF_COLORSTATEDATA_H_
