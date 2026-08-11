/* Ghidra address: 01367320 */
/* Ghidra symbol: FUN_01367320 */


bool FUN_01367320(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  int *local_58;
  longlong local_40;
  int local_38;
  int local_34;
  longlong local_30;
  
  bVar7 = false;
  if (*(char *)(param_1 + 0x23) == '\0') {
    local_40 = param_1;
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_013662d0(param_1);
    }
    local_30 = *(longlong *)(*(longlong *)(local_40 + 0x10) + 0x27a8);
    uVar4 = FUN_0198d430(local_30);
    local_58 = &local_38;
    FUN_01a982d0(uVar4,param_3,param_4,&local_34);
    lVar1 = local_30;
    local_34 = local_34 - *(int *)(local_40 + 0x18);
    local_38 = local_38 - *(int *)(local_40 + 0x1c);
    lVar5 = 0;
    iVar3 = 0;
    iVar6 = *(int *)(local_30 + 0x10);
    if (-1 < iVar6 + -1) {
      do {
        uVar4 = FUN_00b94e60(lVar1,iVar3);
        cVar2 = FUN_013672b0(auStack_78,uVar4);
        if (cVar2 != '\0') {
          lVar5 = FUN_00b94e60(lVar1,iVar3);
          break;
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (lVar5 != 0) {
      FUN_01b1cd00(&local_34,&local_38);
    }
    lVar1 = local_30;
    iVar6 = *(int *)(local_30 + 0x10);
    iVar3 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar4 = FUN_00b94e60(lVar1,iVar3);
        FUN_01367260(auStack_78,uVar4);
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    bVar7 = *(char *)(local_40 + 0x24) == '\0';
  }
  return bVar7;
}

