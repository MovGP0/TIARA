/* Ghidra address: 00a2a110 */
/* Ghidra symbol: FUN_00a2a110 */


void FUN_00a2a110(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xb0))(param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_00a2a190(param_1,iVar1);
    FUN_00a29f60(uVar2);
  }
  return;
}

