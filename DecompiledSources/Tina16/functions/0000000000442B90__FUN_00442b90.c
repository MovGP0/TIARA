/* Ghidra address: 00442b90 */
/* Ghidra symbol: FUN_00442b90 */


undefined8 FUN_00442b90(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00414ce0(param_1);
    uVar2 = FUN_00442b20(iVar1 + 1);
    uVar2 = FUN_00442450(uVar2,param_1,iVar1 + 1);
  }
  return uVar2;
}

