/* Ghidra address: 0061db10 */
/* Ghidra symbol: FUN_0061db10 */


longlong FUN_0061db10(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00414ce0(param_2);
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  FUN_00409a70(param_2,param_1,(ulonglong)uVar1);
  *(undefined1 *)(param_1 + (ulonglong)uVar1) = 0;
  return param_1;
}

