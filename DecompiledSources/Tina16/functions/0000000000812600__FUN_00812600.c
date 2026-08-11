/* Ghidra address: 00812600 */
/* Ghidra symbol: FUN_00812600 */


void FUN_00812600(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 extraout_var;
  undefined1 local_fc [16];
  undefined1 local_ec [16];
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined4 local_3c;
  undefined4 local_38;
  int local_28;
  int local_20;
  int iStack_1c;
  
  local_20 = (int)*(short *)(param_2 + 0x10);
  iStack_1c = (int)*(short *)(param_2 + 0x12);
  uVar4 = FUN_00786090(param_1);
  thunk_FUN_0417e313(uVar4,&local_20);
  cVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar1 == '\0') {
      local_20 = local_20 + 1;
      iStack_1c = iStack_1c + 1;
    }
    else {
      local_20 = local_20 + 2;
      iStack_1c = iStack_1c + 2;
    }
  }
  FUN_00811d00(param_1,local_4c);
  iVar2 = FUN_004230c0(local_4c);
  if (0 < iVar2) {
    FUN_008118f0(param_1,local_5c);
    cVar1 = FUN_00423210(local_5c,&local_20);
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x52) = 1;
      local_38 = 0x17;
      local_3c = 0x1c;
      uVar4 = FUN_00786090(param_1);
      thunk_FUN_04083ff6(uVar4,1,&local_3c);
      *(float *)((longlong)param_1 + 0x54) = (float)local_28;
      *(float *)((longlong)param_1 + 0x5c) = (float)local_28;
      FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
      *(undefined4 *)(param_1 + 0xb) = extraout_var;
      *(undefined1 *)(param_1 + 0xe) = 0x1c;
      (**(code **)(*param_1 + 0xa0))(param_1);
      uVar4 = FUN_00786090(param_1);
      thunk_FUN_0416f4fc(uVar4);
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  FUN_00812380(param_1,local_6c);
  iVar2 = FUN_004230a0(local_6c);
  if (0 < iVar2) {
    FUN_00811f80(param_1,local_7c);
    cVar1 = FUN_00423210(local_7c,&local_20);
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x52) = 1;
      local_38 = 0x17;
      local_3c = 0x1c;
      uVar4 = FUN_00786090(param_1);
      thunk_FUN_04083ff6(uVar4,0,&local_3c);
      *(float *)((longlong)param_1 + 0x54) = (float)local_28;
      *(float *)((longlong)param_1 + 0x5c) = (float)local_28;
      uVar3 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
      *(undefined4 *)(param_1 + 0xb) = uVar3;
      *(undefined1 *)(param_1 + 10) = 0x18;
      (**(code **)(*param_1 + 0xa0))(param_1);
      uVar4 = FUN_00786090(param_1);
      thunk_FUN_0416f4fc(uVar4);
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  FUN_00811760(param_1,local_8c);
  cVar1 = FUN_00423210(local_8c,&local_20);
  if (cVar1 != '\0') {
    FUN_008118f0(param_1,local_9c);
    iVar2 = FUN_004230c0(local_9c);
    if (0 < iVar2) {
      *(undefined1 *)(param_1 + 0xc) = 8;
    }
  }
  FUN_00811d70(param_1,local_ac);
  cVar1 = FUN_00423210(local_ac,&local_20);
  if (cVar1 != '\0') {
    FUN_008118f0(param_1,local_bc);
    iVar2 = FUN_004230c0(local_bc);
    if (0 < iVar2) {
      *(undefined1 *)((longlong)param_1 + 0x71) = 4;
    }
  }
  FUN_00811df0(param_1,local_cc);
  cVar1 = FUN_00423210(local_cc,&local_20);
  if (cVar1 != '\0') {
    FUN_00811f80(param_1,local_dc);
    iVar2 = FUN_004230a0(local_dc);
    if (0 < iVar2) {
      *(undefined1 *)(param_1 + 8) = 0x10;
    }
  }
  FUN_008123f0(param_1,local_ec);
  cVar1 = FUN_00423210(local_ec,&local_20);
  if (cVar1 != '\0') {
    FUN_00811f80(param_1,local_fc);
    iVar2 = FUN_004230a0(local_fc);
    if (0 < iVar2) {
      *(undefined1 *)((longlong)param_1 + 0x51) = 0xc;
    }
  }
  (**(code **)(*param_1 + 0xa0))(param_1);
  return;
}

