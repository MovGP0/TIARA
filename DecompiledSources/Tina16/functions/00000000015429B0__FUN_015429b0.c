/* Ghidra address: 015429b0 */
/* Ghidra symbol: FUN_015429b0 */


undefined8 FUN_015429b0(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_00414ad0(param_1,L"io_typ_in");
  }
  else if (param_2 == 2) {
    FUN_00414ad0(param_1,L"io_typ_out");
  }
  else if (param_2 == 3) {
    FUN_00414ad0(param_1,L"io_typ_inout");
  }
  else if (param_2 == 4) {
    FUN_00414ad0(param_1,L"io_typ_undefined");
  }
  return param_1;
}

