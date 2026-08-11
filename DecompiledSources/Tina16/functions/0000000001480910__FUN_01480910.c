/* Ghidra address: 01480910 */
/* Ghidra symbol: FUN_01480910 */


void FUN_01480910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_b8;
  local_80 = 0;
  local_78 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  FUN_00414480(local_20);
  FUN_005d10a0(local_res8,0,0);
  FUN_005d1300(local_20,local_res8);
  uVar1 = FUN_0045ae90();
  local_98 = 1;
  local_30 = FUN_004ba470(&PTR_FUN_0047d288,1,local_20[0],uVar1);
  FUN_00414480(local_20);
  FUN_00414480(&local_28);
  FUN_005d10a0(local_res10,0,0);
  FUN_005d1300(&local_28,local_res10);
  uVar1 = FUN_0045ae90();
  local_98 = 1;
  local_38 = FUN_004ba470(&PTR_FUN_0047d288,1,local_28,uVar1);
  FUN_00414480(&local_28);
  FUN_004ba980(local_30,&local_78);
  uVar1 = FUN_00f30500(local_78,0,0);
  local_40 = FUN_004113f0(uVar1,&LAB_00f23b78);
  FUN_004ba980(local_38,&local_80);
  uVar1 = FUN_00f30500(local_80,0,0);
  local_48 = FUN_004113f0(uVar1,&LAB_00f23b78);
  local_60 = FUN_014860c0(local_40,L"circuit.components");
  uVar1 = FUN_014860a0(local_48,L"circuit");
  FUN_00f31ff0(uVar1,L"components");
  uVar1 = FUN_014860a0(local_48,L"circuit");
  uVar2 = FUN_00f33b20(local_60);
  uVar2 = FUN_004113f0(uVar2,&LAB_00f256b8);
  FUN_00f30e70(uVar1,L"components",uVar2);
  local_50 = FUN_014860a0(local_48,L"circuit");
  uVar1 = FUN_00f30cb0(local_50,L"graph");
  local_58 = FUN_004113f0(uVar1,&LAB_00f23b78);
  if (local_58 != 0) {
    FUN_00f31ff0(local_50,L"graph");
    FUN_00f30e70(local_50,L"graph",local_58);
  }
  FUN_0147d210(local_res18,local_48);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  FUN_00410f20(local_48);
  FUN_00414560(&local_80,2);
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_res8,3);
  return;
}

