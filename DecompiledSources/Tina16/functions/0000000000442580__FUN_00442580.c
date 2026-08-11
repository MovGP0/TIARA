/* Ghidra address: 00442580 */
/* Ghidra symbol: FUN_00442580 */


longlong FUN_00442580(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00414d00(param_2);
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  FUN_00409a70(param_2,param_1,uVar1 * 2);
  *(undefined2 *)(param_1 + (ulonglong)uVar1 * 2) = 0;
  return param_1;
}

