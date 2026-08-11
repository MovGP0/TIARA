/* Ghidra address: 019febb0 */
/* Ghidra symbol: FUN_019febb0 */


longlong FUN_019febb0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_60 = 0;
  local_res18[0] = param_3;
  local_78 = param_1;
  local_70 = param_4;
  FUN_00414610(param_3);
  lVar1 = local_70;
  local_68 = 0;
  iVar5 = *(int *)(local_70 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_00b94e60(lVar1,iVar4);
      cVar2 = FUN_019fea80(auStack_98,uVar3);
      if (cVar2 != '\0') {
        local_68 = FUN_00b94e60(lVar1,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_68 == 0) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_38,0x20f);
    local_58 = local_res18[0];
    local_50 = 0x11;
    (**(code **)(*param_2 + 0x288))(param_2,&local_60);
    local_48 = local_60;
    local_40 = 0x11;
    FUN_00442f70(&local_30,local_38,&local_58,1);
    FUN_016fd940(local_30);
    *(undefined1 *)(local_78 + 0xc2) = 1;
  }
  FUN_00414480(&local_60);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res18);
  return local_68;
}

