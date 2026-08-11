/* Ghidra address: 00f534d0 */
/* Ghidra symbol: FUN_00f534d0 */


undefined1
FUN_00f534d0(undefined8 param_1,undefined1 param_2,longlong param_3,undefined8 param_4,
            longlong *param_5)

{
  longlong lVar1;
  undefined8 local_res20;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  local_40 = auStack_c8;
  local_48 = 0;
  local_50 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_38 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_29 = 0;
  local_a8 = local_a8 & 0xffffffffffffff00;
  local_a0 = CONCAT71(local_a0._1_7_,param_2);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  lVar1 = FUN_01b06050(&PTR_FUN_00f51578,1,param_1,1);
  *param_5 = lVar1;
  *(longlong *)(*param_5 + 0x1320) = param_3;
  FUN_00f51a00(*param_5,param_2);
  FUN_016f1c10(*param_5,6);
  lVar1 = *param_5;
  *(undefined8 **)(*param_5 + 0x1390) = (undefined8 *)(lVar1 + 0x6a0);
  *(undefined8 *)(*param_5 + 5000) = *(undefined8 *)(lVar1 + 0x6a0);
  if (param_3 == 0) {
    FUN_00414480(&local_38);
  }
  else {
    FUN_00441640(&local_38,*(undefined8 *)(param_3 + 8));
  }
  local_a8 = local_38;
  local_a0 = local_a0 & 0xffffffffffffff00;
  FUN_017cc020(*param_5 + 0xb0,2,0,*(undefined8 *)(*(longlong *)(*param_5 + 0xa0) + 0x360));
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  FUN_017ce930(*param_5,0,0,0);
  FUN_00f51ae0(*param_5,param_2,param_3,local_res20);
  FUN_00414480(&local_68);
  FUN_00414520(&local_60);
  FUN_00414590(&local_58,2);
  FUN_00414480(&local_48);
  FUN_00414480(&local_38);
  FUN_00414480(&local_res20);
  return local_29;
}

