/* Ghidra address: 006616e0 */
/* Ghidra symbol: FUN_006616e0 */


void FUN_006616e0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,char param_5
                 )

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  code *local_48;
  longlong local_40;
  
  lVar4 = FUN_00660520(&DAT_006446d0,1,param_1);
  *(undefined1 *)(lVar4 + 0x20) = param_4;
  if (param_3 == 0) {
    *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(param_1 + 0x98);
    uVar2 = FUN_00660cd0(*(undefined8 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x98) = uVar2;
    *(undefined1 *)(param_1 + 0x68) = param_4;
    *(undefined8 *)(param_1 + 0x60) = 0x3fe0000000000000;
    if (param_5 == '\0') {
      *(longlong *)(lVar4 + 0x10) = param_2;
      lVar1 = *(longlong *)(param_1 + 0x90);
      *(longlong *)(lVar1 + 0x28) = lVar4;
      *(longlong *)(lVar1 + 0x30) = param_2;
      *(longlong *)(param_2 + 0x18) = lVar1;
      *(longlong *)(param_2 + 0x28) = lVar4;
      *(longlong *)(param_1 + 0x90) = lVar4;
      local_48 = FUN_006633c0;
      local_40 = param_1;
      FUN_006612d0(param_1,*(undefined8 *)(lVar4 + 0x10),&local_48);
      iVar3 = FUN_00660cd0(*(undefined8 *)(param_1 + 0x90));
      *(int *)(param_1 + 0x6c) = iVar3 / 2;
      local_48 = FUN_00663ae0;
      local_40 = param_1;
      FUN_006612d0(param_1,*(undefined8 *)(lVar4 + 0x10),&local_48);
      iVar3 = FUN_00660cd0(*(undefined8 *)(param_1 + 0x90));
      *(int *)(param_2 + 0x40) = iVar3 / 2;
    }
    else {
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0x90);
      lVar1 = *(longlong *)(param_1 + 0x90);
      *(longlong *)(lVar1 + 0x28) = lVar4;
      *(longlong *)(lVar1 + 0x18) = param_2;
      *(longlong *)(param_2 + 0x30) = lVar1;
      *(longlong *)(param_2 + 0x28) = lVar4;
      *(longlong *)(param_1 + 0x90) = lVar4;
      local_48 = FUN_006633c0;
      local_40 = param_1;
      FUN_006612d0(param_1,*(undefined8 *)(lVar4 + 0x10),&local_48);
    }
    local_48 = FUN_00663cb0;
    local_40 = param_1;
    FUN_006612d0(param_1,0,&local_48);
  }
  else {
    uVar2 = FUN_00660cd0(param_3);
    *(undefined4 *)(lVar4 + 0x40) = uVar2;
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    lVar1 = *(longlong *)(param_3 + 0x30);
    *(longlong *)(lVar4 + 0x30) = lVar1;
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x18) = lVar4;
    }
    lVar1 = *(longlong *)(param_3 + 0x18);
    *(longlong *)(lVar4 + 0x18) = lVar1;
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x30) = lVar4;
    }
    if (*(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x10) == param_3) {
      *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x10) = lVar4;
    }
    *(longlong *)(param_2 + 0x28) = lVar4;
    *(longlong *)(param_3 + 0x28) = lVar4;
    if (param_5 == '\0') {
      *(longlong *)(lVar4 + 0x10) = param_2;
      *(longlong *)(param_3 + 0x30) = param_2;
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(longlong *)(param_2 + 0x18) = param_3;
    }
    else {
      *(longlong *)(lVar4 + 0x10) = param_3;
      *(undefined8 *)(param_3 + 0x30) = 0;
      *(longlong *)(param_3 + 0x18) = param_2;
      *(longlong *)(param_2 + 0x30) = param_3;
    }
  }
  FUN_006608c0(lVar4);
  FUN_00660d90(lVar4);
  local_48 = FUN_00663cb0;
  local_40 = param_1;
  FUN_006612d0(param_1,0,&local_48);
  return;
}

