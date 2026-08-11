/* Ghidra address: 00c38ab0 */
/* Ghidra symbol: FUN_00c38ab0 */


void FUN_00c38ab0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_70 [2];
  undefined1 local_68;
  undefined1 *local_60;
  longlong *local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = auStack_a8;
  local_48 = 0;
  local_40 = *param_3;
  local_38 = param_3[1];
  local_30 = FUN_00608c80(&PTR_FUN_00c38340,1);
  FUN_00c38510(local_30,param_2);
  FUN_00c38a30(param_1,local_30);
  local_70[0] = FUN_00c38790(param_1);
  local_68 = 0;
  FUN_00442f70(&local_48,L"%d%%",local_70,0);
  local_58 = (longlong *)FUN_00609e10(local_30);
  FUN_005fdcb0(local_58[0x10],1);
  FUN_005ff880(local_58,*(undefined8 *)(param_1 + 0xb8));
  FUN_005fc860(local_58[0xe],0xffffff);
  iVar1 = FUN_005fdff0(local_58,local_48);
  local_4c = ((((int)local_38 - (int)local_40) - iVar1) + 1) / 2;
  iVar1 = FUN_005fdfd0(local_58,local_48);
  local_50 = (((local_38._4_4_ - local_40._4_4_) - iVar1) + 1) / 2;
  local_88 = local_48;
  (**(code **)(*local_58 + 0x130))(local_58,&local_40,local_4c,local_50);
  lVar2 = FUN_00609e10(param_2);
  *(undefined4 *)(lVar2 + 0x90) = 0x660046;
  plVar3 = (longlong *)FUN_00609e10(param_2);
  (**(code **)(*plVar3 + 0x88))(plVar3,0,0,local_30);
  FUN_00410f20(local_30);
  FUN_00414480(&local_48);
  return;
}

