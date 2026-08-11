/* Ghidra address: 00ce2d90 */
/* Ghidra symbol: FUN_00ce2d90 */


void FUN_00ce2d90(longlong param_1,undefined8 param_2)

{
  longlong local_10;
  
  local_10 = 0;
  FUN_0043ea00(&local_10,param_2);
  if (local_10 == 0) {
    FUN_00414ad0(param_1 + 0x30,L"bytes");
  }
  else {
    FUN_00414ad0(param_1 + 0x30,local_10);
  }
  FUN_00414480(&local_10);
  return;
}

