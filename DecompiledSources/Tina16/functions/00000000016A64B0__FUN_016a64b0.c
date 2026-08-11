/* Ghidra address: 016a64b0 */
/* Ghidra symbol: FUN_016a64b0 */


undefined8 FUN_016a64b0(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00414f50(param_2,param_3,(ulonglong)*param_2 + 1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00414e30(param_2,param_3);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

