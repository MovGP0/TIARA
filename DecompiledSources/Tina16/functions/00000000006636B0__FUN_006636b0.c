/* Ghidra address: 006636b0 */
/* Ghidra symbol: FUN_006636b0 */


void FUN_006636b0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_38;
  longlong local_30;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_38 = (undefined1 *)0x0;
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x14,4);
  FUN_00419260(&local_38,&DAT_00663410,1,1);
  *local_38 = *(undefined1 *)((longlong)param_1 + 0xa4);
  (**(code **)(*param_2 + 0x20))(param_2,local_38,1);
  *local_38 = *(undefined1 *)(param_1[0x12] + 0x20);
  (**(code **)(*param_2 + 0x20))(param_2,local_38,1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = FUN_00659110();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_30 = FUN_00659130(param_1[5],local_24);
      if ((*(char *)(local_30 + 0xa9) == '\0') && (*(longlong *)(local_30 + 0x10) != 0)) {
        (**(code **)(*local_20 + 0x78))(local_20,*(undefined8 *)(local_30 + 0x10));
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_28 = (**(code **)(*local_20 + 0x28))(local_20);
  (**(code **)(*param_2 + 0x20))(param_2,&local_28,4);
  local_24 = 0;
  iVar1 = local_28;
  if (-1 < local_28 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_58,local_24);
      FUN_00663450(auStack_78,local_58);
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
  if (*(char *)((longlong)param_1 + 0xa4) == '\0') {
    local_24 = (int)param_1[0x13];
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x50))(param_1,*(undefined1 *)(param_1[0x12] + 0x20));
    local_24 = FUN_00664620(param_1,(int)param_1[0x13],uVar2);
  }
  (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
  FUN_00663510(auStack_78,param_1[0x12],0);
  (**(code **)(*param_2 + 0x20))(param_2,&DAT_01df7484,4);
  FUN_00414480(&local_58);
  FUN_00419430(&local_38,&DAT_00663410);
  return;
}

