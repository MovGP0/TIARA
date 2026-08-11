/* Ghidra address: 00f53980 */
/* Ghidra symbol: FUN_00f53980 */


undefined1
FUN_00f53980(undefined8 param_1,char param_2,undefined1 param_3,longlong param_4,undefined8 param_5,
            longlong *param_6)

{
  longlong lVar1;
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
  undefined8 local_38 [3];
  undefined1 local_19;
  
  local_40 = auStack_c8;
  local_48 = 0;
  local_50 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_38[0] = 0;
  FUN_00414610(param_5);
  local_19 = 0;
  local_a8 = local_a8 & 0xffffffffffffff00;
  local_a0 = CONCAT71(local_a0._1_7_,param_3);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  lVar1 = FUN_01b06050(&PTR_FUN_00f51578,1,param_1,8);
  *param_6 = lVar1;
  *(longlong *)(*param_6 + 0x1320) = param_4;
  *(char *)(*param_6 + 0x333) = param_2;
  FUN_00f51a70(*param_6,param_3);
  if (param_2 == '\0') {
    FUN_016f1c10(*param_6,6);
  }
  else {
    FUN_016f1c10(*param_6,8);
  }
  if (param_4 == 0) {
    FUN_00414480(local_38);
  }
  else {
    FUN_00441640(local_38,*(undefined8 *)(param_4 + 8));
  }
  local_a8 = local_38[0];
  local_a0 = local_a0 & 0xffffffffffffff00;
  FUN_017cc020(*param_6 + 0xb0,4,1,*(undefined8 *)(*(longlong *)(*param_6 + 0xa0) + 0x360));
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  FUN_017ce930(*param_6,1,0,0);
  FUN_00f51ae0(*param_6,param_3,param_4,param_5);
  FUN_00414480(&local_68);
  FUN_00414520(&local_60);
  FUN_00414590(&local_58,2);
  FUN_00414480(&local_48);
  FUN_00414480(local_38);
  FUN_00414480(&param_5);
  return local_19;
}

