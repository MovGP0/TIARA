/* Ghidra address: 00442bd0 */
/* Ghidra symbol: FUN_00442bd0 */


undefined8 FUN_00442bd0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00414d00(param_1);
    uVar2 = FUN_00442b40(iVar1 + 1);
    uVar2 = FUN_00442480(uVar2,param_1,iVar1 + 1);
  }
  return uVar2;
}

