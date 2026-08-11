/* Ghidra address: 007fd550 */
/* Ghidra symbol: FUN_007fd550 */


void FUN_007fd550(undefined8 *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  ppuVar1 = (undefined **)FUN_00410ca0(*param_1);
  if (ppuVar1 == &PTR_FUN_007f0370) {
    *(bool *)((longlong)param_1 + 0x691) = DAT_0200c279 == '\0';
  }
  FUN_00654400(param_1);
  FUN_00652e80(param_1,param_2);
  FUN_00654410(param_1);
  return;
}

