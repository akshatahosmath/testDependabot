/**
 * Copyright (C) 2022 Xilinx, Inc
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may
 * not use this file except in compliance with the License. A copy of the
 * License is located at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifndef __SubCmdConfigure_h_
#define __SubCmdConfigure_h_

#include "tools/common/SubCmd.h"
#include "tools/common/SubCmdConfigureInternal.h"

class SubCmdConfigure : public SubCmdConfigureInternal {
 public:
  SubCmdConfigure(bool _isHidden, bool _isDepricated, bool _isPreliminary, const boost::property_tree::ptree configurations);
};

#endif

