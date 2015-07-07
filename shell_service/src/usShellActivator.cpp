/*=============================================================================

  Library: CppMicroServices

  Copyright (c) German Cancer Research Center,
    Division of Medical and Biological Informatics

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=============================================================================*/

#include "usModuleActivator.h"
#include "usModuleContext.h"

#include "usShellService.h"

US_BEGIN_NAMESPACE

class ShellActivator : public ModuleActivator
{
public:

  void Load(ModuleContext* context)
  {
    m_ShellService.reset(new ShellService());
    context->RegisterService(m_ShellService.get());
  }

  void Unload(ModuleContext*)
  {

  }

private:

  std::auto_ptr<ShellService> m_ShellService;
};

US_END_NAMESPACE

US_EXPORT_MODULE_ACTIVATOR(US_PREPEND_NAMESPACE(ShellActivator))