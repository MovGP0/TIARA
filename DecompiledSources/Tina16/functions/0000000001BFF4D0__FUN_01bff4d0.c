/* Ghidra address: 01bff4d0 */
/* Ghidra symbol: FUN_01bff4d0 */


void FUN_01bff4d0(longlong param_1,code *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x78),iVar2);
      (*param_2)(uVar1,param_1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

