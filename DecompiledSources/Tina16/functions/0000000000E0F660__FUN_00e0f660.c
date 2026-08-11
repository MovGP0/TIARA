/* Ghidra address: 00e0f660 */
/* Ghidra symbol: FUN_00e0f660 */


undefined8 FUN_00e0f660(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  int iVar4;
  int iVar5;
  undefined1 local_3c [12];
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(param_1,iVar4);
      if (*(longlong *)(lVar2 + 0x820) == lVar1) {
        FUN_015f9fa0(*(undefined8 *)(lVar2 + 0x840),0,0,local_3c);
        uVar3 = FUN_00e102d0(lVar2,*(undefined8 *)(param_2 + 0x18));
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return unaff_RBX;
}

