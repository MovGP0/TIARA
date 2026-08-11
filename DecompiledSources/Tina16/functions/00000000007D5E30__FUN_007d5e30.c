/* Ghidra address: 007d5e30 */
/* Ghidra symbol: FUN_007d5e30 */


void FUN_007d5e30(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_28 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_20 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  if (param_1[0x14] != 0) {
    uVar2 = FUN_007d56e0(param_1);
    uVar3 = FUN_007d5700(param_1,param_3,local_28);
    uVar4 = FUN_007d5700(param_1,param_4,local_20);
    iVar1 = thunk_FUN_039b8e5f(uVar2,param_2,uVar3,uVar4);
    if (iVar1 == 0) {
      FUN_0041ddd0(&local_38,PTR_PTR_02001fd0);
      uVar2 = FUN_0044d490(&PTR_FUN_00472870,1,local_38);
      FUN_004134c0(uVar2);
    }
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  (**(code **)(*param_1 + 0x98))(param_1);
  FUN_00414480(&local_38);
  return;
}

