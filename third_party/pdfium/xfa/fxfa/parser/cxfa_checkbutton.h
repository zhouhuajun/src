// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef XFA_FXFA_PARSER_CXFA_CHECKBUTTON_H_
#define XFA_FXFA_PARSER_CXFA_CHECKBUTTON_H_

#include "xfa/fxfa/parser/cxfa_node.h"

class CXFA_CheckButton : public CXFA_Node {
 public:
  CXFA_CheckButton(CXFA_Document* doc, XFA_PacketType packet);
  ~CXFA_CheckButton() override;

  XFA_FFWidgetType GetDefaultFFWidgetType() const override;

  bool IsRound();
  bool IsAllowNeutral();
  XFA_AttributeEnum GetMark();
};

#endif  // XFA_FXFA_PARSER_CXFA_CHECKBUTTON_H_
