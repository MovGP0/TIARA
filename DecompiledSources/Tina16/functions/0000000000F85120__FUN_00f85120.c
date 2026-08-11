/* Ghidra address: 00f85120 */
/* Ghidra symbol: FUN_00f85120 */


void FUN_00f85120(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  local_50 = *param_3;
  uStack_48 = param_3[1];
  uStack_40 = param_3[2];
  FUN_004179d0(&local_50,&DAT_00e021a8);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xd08) + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd08),iVar3);
      iVar6 = *(int *)(*(longlong *)(lVar1 + 8) + 0x10);
      iVar4 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 8),iVar4);
          if (param_2 == *(int *)(lVar2 + 8)) {
            *(undefined1 *)(lVar1 + 0x18) = 1;
            FUN_01576310(lVar1,iVar4,&local_50);
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00417740(&local_50,&DAT_00e021a8);
  return;
}

