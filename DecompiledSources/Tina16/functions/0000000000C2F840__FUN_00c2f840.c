/* Ghidra address: 00c2f840 */
/* Ghidra symbol: FUN_00c2f840 */


void FUN_00c2f840(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar2);
      FUN_00c2f690(uVar1,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00c1a380(param_2,0);
  return;
}

