/* Ghidra address: 0094a1c0 */
/* Ghidra symbol: FUN_0094a1c0 */


longlong FUN_0094a1c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)*param_1)(param_1,param_2);
  if (param_2 != param_1[4]) {
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    }
    while (lVar1 == 0) {
      param_2 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      if (param_2 == 0) {
        return 0;
      }
      lVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    }
  }
  return lVar1;
}

