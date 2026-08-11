/* Ghidra address: 0064c5a0 */
/* Ghidra symbol: FUN_0064c5a0 */


void FUN_0064c5a0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  FUN_004d2dc0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == param_1[0x1d]) {
      FUN_0064dd50(param_1,0);
    }
    else {
      lVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
      if (param_2 == lVar1) {
        FUN_0064c270(param_1,0);
      }
      else if (param_2 == param_1[0x21]) {
        param_1[0x21] = 0;
      }
      else if (param_2 == param_1[0x56]) {
        param_1[0x56] = 0;
      }
      else {
        lVar1 = param_1[0x26];
        if ((lVar1 != 0) && (param_2 == *(longlong *)(lVar1 + 0x18))) {
          *(undefined8 *)(lVar1 + 0x18) = 0;
        }
      }
    }
  }
  return;
}

