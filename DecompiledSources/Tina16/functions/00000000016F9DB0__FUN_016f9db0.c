/* Ghidra address: 016f9db0 */
/* Ghidra symbol: FUN_016f9db0 */


undefined8 FUN_016f9db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_res18 [2];
  undefined8 local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18[0] = param_3;
  FUN_00414630(param_3);
  plVar3 = (longlong *)FUN_00b6cfe0(&PTR_FUN_00b70868,1,0);
  FUN_00414c70(&local_38,"KB0gdsTvcvlSO2ltvnFe9gOeNC3vetz6");
  iVar1 = FUN_00b6cb20(plVar3);
  FUN_016f9b20(&local_40,"jBopWogR",(longlong)iVar1 / 8 & 0xffffffff);
  FUN_00414c70(local_30,local_res18[0]);
  uVar4 = FUN_00414df0(&local_38);
  uVar5 = FUN_00414df0(&local_40);
  (**(code **)(*plVar3 + 0xa8))(plVar3,uVar4,0x100,uVar5);
  uVar4 = FUN_00414df0(local_30);
  uVar5 = FUN_00414df0(local_30);
  uVar2 = 0;
  if (local_30[0] != 0) {
    uVar2 = *(undefined4 *)(local_30[0] + -4);
  }
  (**(code **)(*plVar3 + 0x128))(plVar3,uVar4,uVar5,uVar2);
  FUN_00410f20(plVar3);
  uVar4 = FUN_00414df0(&local_38);
  iVar1 = 0;
  if (local_38 != 0) {
    iVar1 = *(int *)(local_38 + -4);
  }
  FUN_0040d200(uVar4,(longlong)iVar1,0);
  FUN_00414bf0(param_2,local_30[0]);
  FUN_00414590(&local_40,3);
  FUN_004144d0(local_res18);
  return param_2;
}

