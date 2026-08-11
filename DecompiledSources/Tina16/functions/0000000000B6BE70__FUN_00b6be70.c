/* Ghidra address: 00b6be70 */
/* Ghidra symbol: FUN_00b6be70 */


void FUN_00b6be70(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  uVar1 = FUN_00416740(param_2);
  (**(code **)(*param_1 + 0xc0))(param_1,uVar1,iVar2 * 2);
  return;
}

