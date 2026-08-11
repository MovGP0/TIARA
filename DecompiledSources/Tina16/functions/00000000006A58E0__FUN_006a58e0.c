/* Ghidra address: 006a58e0 */
/* Ghidra symbol: FUN_006a58e0 */


void FUN_006a58e0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  uVar1 = FUN_00416740(param_2);
  FUN_006a5560(param_1,0xd,uVar1,iVar2 * 2 + 2);
  return;
}

