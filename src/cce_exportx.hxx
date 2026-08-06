#ifndef CCE_EXPORTX_HH
#define CCE_EXPORTX_HH

#include "cctk.h"
#include "cctk_Arguments.h"
#include "cctk_Functions.h"
#include "cctk_Parameters.h"
#include "util_Table.h"

#include <string>
#include <vector>

namespace cce_exportx_internal {

using std::vector, std::string;

extern "C" void CCE_ExportX(CCTK_ARGUMENTS);

} // namespace cce_exportx_internal

#endif // CCE_EXPORTX_HH
