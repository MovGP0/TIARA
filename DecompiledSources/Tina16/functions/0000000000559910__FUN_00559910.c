/* Ghidra address: 00559910 */
/* Ghidra symbol: FUN_00559910 */


longlong *
FUN_00559910(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,longlong *param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *local_res8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  int local_1c;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  local_68 = param_5;
  FUN_00546070(local_res8,0,param_3,param_4);
  uVar3 = FUN_00559c00(local_res8);
  lVar4 = FUN_00588150(uVar3);
  local_res8[7] = lVar4;
  *param_5 = lVar4;
  *param_5 = *param_5 + 3;
  FUN_00419260(local_res8 + 8,&DAT_00531510,1,(longlong)(int)(*(byte *)(lVar4 + 2) - 1));
  FUN_00545f10(local_res8[3],&PTR_FUN_00558fb0,local_res8,param_5);
  local_28 = local_res8[8];
  local_30 = local_28;
  if (local_28 != 0) {
    local_30 = *(longlong *)(local_28 + -8);
  }
  local_1c = 0;
  iVar5 = (int)local_30;
  if (-1 < (int)local_30 + -1) {
    do {
      uVar3 = FUN_00545f10(local_res8[3],&PTR_FUN_00558fb0,local_res8,param_5);
      uVar3 = FUN_004113f0(uVar3,&PTR_FUN_0052a8a0);
      *(undefined8 *)(local_res8[8] + (longlong)local_1c * 8) = uVar3;
      local_1c = local_1c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  cVar2 = (**(code **)(*local_res8 + 0x20))(local_res8);
  if (cVar2 == '\x01') {
    if (*(char *)*param_5 == '\0') {
      *param_5 = *param_5 + 1;
    }
    else {
      lVar4 = FUN_0053c6c0(*param_5);
      *param_5 = lVar4;
      local_38 = (longlong *)FUN_0053c4c0(param_5);
      local_40 = local_38;
      if (local_38 != (longlong *)0x0) {
        local_40 = (longlong *)*local_38;
      }
      local_res8[9] = (longlong)local_40;
    }
  }
  FUN_00545c40(&local_58,param_5);
  FUN_0041b840(local_res8 + 5,local_58);
  FUN_0041b800(&local_58);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

