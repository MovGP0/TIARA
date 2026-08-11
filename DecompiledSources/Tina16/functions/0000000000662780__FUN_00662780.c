/* Ghidra address: 00662780 */
/* Ghidra symbol: FUN_00662780 */


void FUN_00662780(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  int local_48;
  int local_40;
  int *local_30;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0xad);
  if (bVar1 < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x28) >> 8),1) <<
             (bVar1 & 0x1f) & 6U) != 0;
  }
  else {
    bVar7 = false;
  }
  local_30 = param_4;
  if (bVar7) {
    iVar2 = *param_4;
    iVar3 = param_4[1];
    FUN_00662550(auStack_68,iVar2 + 1,iVar3 + 1);
    plVar6 = (longlong *)FUN_00781840();
    cVar5 = (**(code **)(*plVar6 + 0x98))(plVar6);
    if (cVar5 == '\0') {
      iVar4 = local_30[3];
      local_48 = iVar4 + -2;
      FUN_00662620(auStack_68,iVar2 + 3,iVar3 + *(int *)(param_1 + 0x30) + 1,iVar2 + 5);
      local_48 = iVar4 + -2;
      FUN_00662620(auStack_68,iVar2 + 6,iVar3 + *(int *)(param_1 + 0x30) + 1,iVar2 + 8);
    }
    else {
      local_48 = iVar2 + 10;
      local_40 = local_30[3] + -2;
      FUN_006626f0(auStack_68,3,iVar2 + 1,iVar3 + *(int *)(param_1 + 0x30) + 1);
    }
  }
  else {
    iVar2 = param_4[2];
    iVar3 = param_4[1];
    FUN_00662550(auStack_68,(iVar2 - *(int *)(param_1 + 0x30)) + 1,iVar3 + 1);
    plVar6 = (longlong *)FUN_00781840();
    cVar5 = (**(code **)(*plVar6 + 0x98))(plVar6);
    if (cVar5 == '\0') {
      iVar4 = *local_30;
      local_48 = iVar3 + 5;
      FUN_00662620(auStack_68,iVar4 + 2,iVar3 + 3,(iVar2 - *(int *)(param_1 + 0x30)) + -2);
      local_48 = iVar3 + 8;
      FUN_00662620(auStack_68,iVar4 + 2,iVar3 + 6,(iVar2 - *(int *)(param_1 + 0x30)) + -2);
    }
    else {
      local_48 = (iVar2 - *(int *)(param_1 + 0x30)) + -2;
      local_40 = iVar3 + 10;
      FUN_006626f0(auStack_68,2,*local_30 + 2,iVar3 + 1);
    }
  }
  return;
}

