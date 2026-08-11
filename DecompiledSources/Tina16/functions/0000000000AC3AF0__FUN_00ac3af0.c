/* Ghidra address: 00ac3af0 */
/* Ghidra symbol: FUN_00ac3af0 */


void FUN_00ac3af0(longlong *param_1,longlong *param_2,int param_3,int param_4,undefined4 param_5,
                 longlong param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_80;
  undefined1 *local_70;
  undefined4 local_60;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4d;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined4 local_2c;
  undefined1 local_25;
  undefined4 local_24;
  longlong *local_20;
  
  local_70 = auStack_a8;
  local_88 = param_5;
  local_80 = param_6;
  FUN_00ac2870(param_1,param_2,param_3,param_4);
  cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar1 != '\0') {
    local_40 = param_2[0x10];
    local_25 = *(undefined1 *)(*(longlong *)(local_40 + 0x18) + 0x38);
    local_24 = *(undefined4 *)(*(longlong *)(local_40 + 0x18) + 0x28);
    local_48 = param_2[0xf];
    local_2c = *(undefined4 *)(*(longlong *)(local_48 + 0x18) + 0x28);
    local_4c = *(undefined4 *)(*(longlong *)(param_6 + 0x38) + 0x28);
    local_4d = (*(byte *)(param_1[3] + 0x90) & 1) != 0;
    local_38 = local_40;
    if (((bool)local_4d) && (cVar1 = FUN_00781870(), cVar1 != '\0')) {
      uVar4 = FUN_00781840();
      local_54 = FUN_007793c0(uVar4,local_4c);
    }
    else {
      local_54 = local_4c;
    }
    local_54 = FUN_005fbf20(local_54);
    FUN_005fd4e0(param_2[0xf],local_54);
    local_58 = (**(code **)(*param_1 + 0xf0))(param_1);
    local_59 = (*(byte *)(param_1[3] + 0x90) & 2) != 0;
    if (((bool)local_59) && (cVar1 = FUN_00781870(), cVar1 != '\0')) {
      uVar4 = FUN_00781840();
      local_60 = FUN_007793c0(uVar4,local_58);
    }
    else {
      local_60 = local_58;
    }
    local_60 = FUN_005fbf20(local_60);
    FUN_005fdab0(param_2[0x10],local_60);
    FUN_005fdcb0(param_2[0x10],0);
    iVar2 = (**(code **)(*param_1 + 200))(param_1);
    local_88 = (**(code **)(*param_1 + 0xc0))(param_1);
    local_88 = param_4 + local_88;
    (**(code **)(*param_2 + 0xf8))(param_2,param_3,param_4,param_3 + iVar2);
    if (param_1[0x19] != 0) {
      local_20 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
      (**(code **)(*local_20 + 0x10))(local_20,param_2[0xe]);
      FUN_005fce30(param_2[0xe],8);
      FUN_005fcd80(param_2[0xe],L"Arial");
      iVar2 = (**(code **)(*param_1 + 200))(param_1);
      iVar3 = (**(code **)(*param_1 + 0xc0))(param_1);
      local_88 = param_4 + iVar3 + -5;
      local_80 = param_1[0x19];
      FUN_00a71c80(param_2,param_3 + 5,param_4 + 5,param_3 + iVar2 + -5);
      FUN_005ff880(param_2,local_20);
      FUN_00410f20(local_20);
    }
    FUN_005fdab0(param_2[0x10],local_24);
    FUN_005fdcb0(param_2[0x10],local_25);
    FUN_005fd4e0(param_2[0xf],local_2c);
    return;
  }
  uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
  FUN_0064cb30(uVar4,param_3);
  uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
  FUN_0064cb90(uVar4,param_4);
  return;
}

