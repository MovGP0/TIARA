/* Ghidra address: 006e0b60 */
/* Ghidra symbol: FUN_006e0b60 */


void FUN_006e0b60(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong *local_res18;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  ulonglong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_40;
  ulonglong local_38;
  longlong local_30;
  undefined4 local_24;
  longlong *local_20;
  
  local_70 = auStack_a8;
  local_80 = 0;
  local_78 = 0;
  local_38 = 0;
  local_40 = (undefined8 *)0x0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (0 < iVar1) {
    local_res18 = param_3;
    if (param_3 == (longlong *)0x0) {
      local_res18 = (longlong *)FUN_00458d50();
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_78);
    FUN_00459ca0(local_res18,&local_38,local_78);
    (**(code **)(*local_res18 + 0x50))(local_res18,&local_40);
    local_50 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      local_50 = (undefined8 *)local_40[-1];
    }
    if (0 < (longlong)local_50) {
      local_58 = local_40;
      if (local_40 != (undefined8 *)0x0) {
        local_58 = (undefined8 *)local_40[-1];
      }
      FUN_004b89e0(param_2,local_40,local_58);
    }
    local_20 = (longlong *)FUN_004540d0(&DAT_00438748,1,0x400);
    for (local_30 = FUN_006df500(param_1[7],0); local_30 != 0; local_30 = FUN_006dd600(local_30)) {
      FUN_00455960(local_20,0);
      iVar1 = FUN_006ddf30();
      local_24 = 0;
      if (-1 < iVar1 + -1) {
        do {
          FUN_00453560(local_20,9);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_00453060(local_20,*(undefined8 *)(local_30 + 0x10));
      FUN_00453060(local_20,&LAB_006e0e34);
      (**(code **)(*local_20 + -0x60))(local_20,&local_80);
      FUN_00459ca0(local_res18,&local_38,local_80);
      local_60 = local_38;
      if (local_38 != 0) {
        local_60 = *(ulonglong *)(local_38 - 8);
      }
      (**(code **)(*param_2 + 0x20))(param_2,local_38,local_60 & 0xffffffff);
    }
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_80,2);
  FUN_00417840(&local_40,&DAT_00406578,2);
  return;
}

