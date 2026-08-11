/* Ghidra address: 007d62b0 */
/* Ghidra symbol: FUN_007d62b0 */


void FUN_007d62b0(longlong *param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_1[0x14] != 0) {
    if (param_3 == 0) {
      FUN_007d5e30(param_1,param_2,0,0);
    }
    else {
      uVar2 = FUN_007d56e0(param_1);
      uVar3 = FUN_0060ce20(param_3);
      iVar1 = thunk_FUN_03d3082c(uVar2,param_2,uVar3);
      if (iVar1 == -1) {
        FUN_0041ddd0(local_20,PTR_PTR_02001fd0);
        uVar2 = FUN_0044d490(&PTR_FUN_00472870,1,local_20[0]);
        FUN_004134c0(uVar2);
      }
    }
  }
  (**(code **)(*param_1 + 0x98))(param_1);
  FUN_00414480(local_20);
  return;
}

