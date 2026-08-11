/* Ghidra address: 018cd620 */
/* Ghidra symbol: FUN_018cd620 */


void FUN_018cd620(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_40;
  
  local_40 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  lVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  if ((char)param_1[3] != '\0') {
    FUN_01967cc0(param_2);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_2,lVar1,local_40);
  while (0 < *(int *)(local_40 + 0x10)) {
    if (*(char *)(*(longlong *)(param_1[8] + 0x1a8) + 0x20) == '\0') {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
    if (*(char *)(param_1[8] + 0x288) != '\0') break;
    uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
    local_58 = uVar2;
    (**(code **)(*param_1 + 0x80))(param_1,param_2,lVar1,local_40);
    if ((char)param_1[3] != '\0') {
      FUN_01967a70(param_2);
    }
    FUN_018cd550(auStack_78);
    local_58 = uVar2;
    (**(code **)(*param_1 + 0x88))(param_1,param_2,lVar1,local_40);
  }
  (**(code **)(**(longlong **)(param_2 + 0x80) + 0x10))(*(longlong **)(param_2 + 0x80));
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(lVar1,iVar3);
      FUN_004ae7e0(*(undefined8 *)(param_2 + 0x80),uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((char)param_1[3] != '\0') {
    FUN_01967a70(param_2);
  }
  FUN_00410f20(local_40);
  FUN_00410f20(lVar1);
  return;
}

