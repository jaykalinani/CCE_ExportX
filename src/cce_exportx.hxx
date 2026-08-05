#ifndef CCE_EXPORTX_HH
#define CCE_EXPORTX_HH

#include "cctk.h"
#include "cctk_Arguments.h"
#include "cctk_Functions.h"
#include "cctk_Parameters.h"
#include "util_Table.h"

#include <string>
#include <vector>

namespace CCE_ExportX {

using std::vector, std::string;

extern "C" void CCE_ExportX(CCTK_ARGUMENTS);

} // namespace CCE_ExportX

#endif // CCE_EXPORTX_HH
