/* Ghidra address: 019a4140 */
/* Ghidra symbol: FUN_019a4140 */


ulonglong FUN_019a4140(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [36];
  int local_34;
  longlong local_30;
  
  uVar7 = 0;
  if (*(int *)(*(longlong *)(param_2 + 0x38) + 0x10) < 1) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_004aeac0(*(longlong *)(param_2 + 0x38),0);
  }
  if (local_30 != 0) {
    if (param_3 == '\0') {
      local_34 = 0;
      iVar4 = 0;
      iVar5 = *(int *)(param_1 + 0x10);
      if (-1 < iVar5 + -1) {
        do {
          uVar2 = FUN_00b94e60(param_1,iVar4);
          FUN_019a40e0(auStack_58,uVar2);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      lVar3 = 0;
      iVar5 = *(int *)(param_1 + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar2 = FUN_00b94e60(param_1,iVar4);
          cVar1 = FUN_019a3ef0(auStack_58,uVar2);
          if (cVar1 != '\0') {
            lVar3 = FUN_00b94e60(param_1,iVar4);
            break;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (((local_34 < 1) || (lVar3 != 0)) &&
         ((local_34 != 0 || (*(int *)(*(longlong *)(local_30 + 0x30) + 0x10) != 0)))) {
        uVar7 = 0;
      }
      else {
        uVar7 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
    }
    else {
      local_34 = 0;
      uVar6 = *(uint *)(param_1 + 0x10) - 1;
      uVar7 = (ulonglong)uVar6;
      iVar5 = 0;
      if (-1 < (int)uVar6) {
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x10);
        do {
          uVar2 = FUN_00b94e60(param_1,iVar5);
          FUN_019a40e0(auStack_58,uVar2);
          iVar5 = iVar5 + 1;
          uVar6 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 != 0);
      }
      if ((local_34 < 1) || (*(int *)(*(longlong *)(local_30 + 0x30) + 0x10) < local_34)) {
        uVar7 = 0;
      }
      else {
        uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
      }
    }
  }
  return uVar7 & 0xffffffff;
}

