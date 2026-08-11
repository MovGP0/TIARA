/* Ghidra address: 00e81530 */
/* Ghidra symbol: FUN_00e81530 */


void FUN_00e81530(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_3 != 0) && (0 < *(int *)(*(longlong *)(param_1 + 0x400b8) + 0x10))) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x400b8) + 0x10);
    while ((iVar1 = iVar1 + -1, -1 < iVar1 &&
           (iVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x400b8),iVar1), param_2 < iVar3))) {
      uVar2 = *(undefined8 *)(param_1 + 0x400b8);
      iVar3 = FUN_004aeac0(uVar2,iVar1);
      FUN_004aedb0(uVar2,iVar1,(longlong)(iVar3 - param_3));
    }
  }
  return;
}

