/* Ghidra address: 006262a0 */
/* Ghidra symbol: FUN_006262a0 */


void FUN_006262a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  if (DAT_0201225c == '\0') {
    *param_2 = 0xffffffff80000000;
    FUN_00414480(param_3);
  }
  else {
    *param_2 = 0xffffffff80000001;
    FUN_00414ad0(param_3,L"Software\\Classes\\");
  }
  return;
}

