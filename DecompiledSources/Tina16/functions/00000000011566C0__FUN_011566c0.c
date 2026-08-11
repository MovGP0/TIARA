/* Ghidra address: 011566c0 */
/* Ghidra symbol: FUN_011566c0 */


void FUN_011566c0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 *local_80;
  undefined8 local_70;
  undefined1 local_64 [2];
  undefined2 local_62;
  undefined1 local_5c [52];
  longlong local_28;
  longlong *local_20;
  
  local_80 = auStack_b8;
  local_70 = 0;
  FUN_00417580(local_5c,&DAT_01d2e6d8);
  *param_3 = 0;
  local_98 = 0;
  local_28 = FUN_01d30b30(&DAT_01d2e8e8,1,param_1,0x40);
  local_20 = (longlong *)FUN_01cebb70(&PTR_FUN_01cead48,1);
  *(undefined4 *)(local_20 + 3) = 0;
  FUN_01d317c0(local_28,local_5c);
  FUN_01d30e90(local_28,local_64);
  if (param_2 == 0) {
    FUN_00414480(&local_70);
  }
  else {
    FUN_00441640(&local_70,*(undefined8 *)(param_2 + 8));
  }
  FUN_00414ad0(local_28 + 0x68,local_70);
  (**(code **)(*local_20 + 0x30))(local_20,local_28,local_62);
  iVar1 = FUN_01d31a40(local_28);
  if (iVar1 != 0) {
    uVar2 = FUN_01d31a40(local_28);
    FUN_00b047e0(uVar2);
  }
  *param_3 = local_20[0xb];
  (**(code **)(*(longlong *)local_20[2] + 0x90))((longlong *)local_20[2]);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_70);
  FUN_00417740(local_5c,&DAT_01d2e6d8);
  return;
}

