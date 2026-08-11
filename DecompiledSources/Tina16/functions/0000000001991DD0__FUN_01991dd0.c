/* Ghidra address: 01991dd0 */
/* Ghidra symbol: FUN_01991dd0 */


undefined8 FUN_01991dd0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  int local_68;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  int local_38;
  
  local_50 = 0;
  local_58 = param_1;
  FUN_00b94dc0(local_48,&PTR_FUN_00b94910,4,2);
  lVar5 = 0;
  iVar8 = *(int *)(local_58 + 0x10);
  iVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      uVar4 = FUN_00b94e60(local_58,iVar7);
      cVar2 = FUN_01991cf0(auStack_88,uVar4);
      if (cVar2 != '\0') {
        lVar5 = FUN_00b94e60(local_58,iVar7);
        break;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((lVar5 == 0) && (local_38 == 2)) {
    uVar4 = FUN_00b94e60(local_48,0);
    uVar6 = FUN_00b94e60(local_48,1);
    if (*PTR_DAT_020052b8 == '\0') {
      uVar3 = FUN_00b92120(param_3,param_4);
      FUN_017c2f00(uVar6,uVar3,uVar4);
      FUN_00b950f0(local_48,uVar4);
      FUN_0198b6d0(local_58,uVar4);
      local_50 = uVar6;
    }
  }
  iVar8 = local_38;
  if (-1 < local_38 + -1) {
    do {
      FUN_00b94ea0(local_48,0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00b94e30(local_48);
  FUN_019921e0(local_58,param_3,param_4);
  plVar1 = *(longlong **)(local_58 + 0x210);
  if (plVar1 != (longlong *)0x0) {
    local_68 = param_4 + 3;
    (**(code **)(*plVar1 + 0x30))(plVar1,param_3 + -3,param_4 + -3,param_3 + 3);
  }
  return local_50;
}

