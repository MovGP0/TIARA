/* Ghidra address: 007d5fa0 */
/* Ghidra symbol: FUN_007d5fa0 */


void FUN_007d5fa0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  puVar1 = auStack_88;
  if (param_1[0x14] != 0) {
    local_2c = FUN_007d5ad0(param_1,param_3,param_4);
    if (local_2c == -1) {
      FUN_0041ddd0(&local_50,PTR_PTR_02001fd0);
      uVar3 = FUN_0044d490(&PTR_FUN_00472870,1,local_50);
      FUN_004134c0(uVar3);
      puVar1 = local_40;
    }
    else {
      local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      (**(code **)(*local_28 + 0x70))(local_28,(int)param_1[0x12]);
      (**(code **)(*local_28 + 0x88))(local_28,*(undefined4 *)((longlong)param_1 + 0x94));
      local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      FUN_0060b9b0(local_20,1);
      (**(code **)(*local_20 + 0x70))(local_20,(int)param_1[0x12]);
      (**(code **)(*local_20 + 0x88))(local_20,*(undefined4 *)((longlong)param_1 + 0x94));
      uVar3 = FUN_007d56e0(param_1);
      uVar4 = FUN_00609e10(local_28);
      uVar4 = FUN_005ffa40(uVar4);
      local_68 = 0;
      local_60 = 0;
      thunk_FUN_04153868(uVar3,local_2c,uVar4,0);
      uVar3 = FUN_007d56e0(param_1);
      uVar4 = FUN_00609e10(local_20);
      uVar4 = FUN_005ffa40(uVar4);
      local_68 = 0;
      local_60 = 0x10;
      thunk_FUN_04153868(uVar3,local_2c,uVar4,0);
      uVar3 = FUN_007d56e0(param_1);
      uVar4 = (**(code **)(*local_28 + 0xe8))(local_28);
      uVar5 = (**(code **)(*local_20 + 0xe8))(local_20);
      iVar2 = thunk_FUN_039b8e5f(uVar3,param_2,uVar4,uVar5);
      if (iVar2 == 0) {
        FUN_0041ddd0(&local_48,PTR_PTR_02001fd0);
        uVar3 = FUN_0044d490(&PTR_FUN_00472870,1,local_48);
        FUN_004134c0(uVar3);
      }
      FUN_00410f20(local_20);
      FUN_00410f20(local_28);
      FUN_007d6390(param_1,local_2c);
      puVar1 = local_40;
    }
  }
  local_40 = puVar1;
  (**(code **)(*param_1 + 0x98))(param_1);
  FUN_00414560(&local_50,2);
  return;
}

