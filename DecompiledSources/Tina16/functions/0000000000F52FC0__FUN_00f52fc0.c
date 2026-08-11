/* Ghidra address: 00f52fc0 */
/* Ghidra symbol: FUN_00f52fc0 */


undefined1
FUN_00f52fc0(undefined8 param_1,undefined1 param_2,longlong param_3,undefined8 param_4,
            longlong *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31 [24];
  undefined1 local_19;
  
  local_50 = auStack_d8;
  local_58 = 0;
  local_60 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_40 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_19 = 0;
  local_b8 = (undefined1 *)((ulonglong)local_b8 & 0xffffffffffffff00);
  local_b0 = (undefined1 *)CONCAT71(local_b0._1_7_,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  lVar1 = FUN_01b06050(&PTR_FUN_00f51578,1,param_1,1);
  *param_5 = lVar1;
  *(longlong *)(*param_5 + 0x1320) = param_3;
  FUN_00f51a00(*param_5,param_2);
  FUN_016f1c10(*param_5,1);
  lVar1 = *param_5;
  local_48 = lVar1 + 0x4c8;
  local_b8 = &local_32;
  local_b0 = &local_33;
  puVar2 = (undefined8 *)
           FUN_01b05ad0(*(undefined8 *)(lVar1 + 0x4d0),*(undefined1 *)(lVar1 + 0x4d8),0,local_31);
  *(undefined8 **)(*param_5 + 0x1390) = puVar2;
  *(undefined8 *)(*param_5 + 5000) = *puVar2;
  if (param_3 == 0) {
    FUN_00414480(&local_40);
  }
  else {
    FUN_00441640(&local_40,*(undefined8 *)(param_3 + 8));
  }
  local_b8 = (undefined1 *)local_40;
  local_b0 = (undefined1 *)((ulonglong)local_b0 & 0xffffffffffffff00);
  FUN_017cc020(*param_5 + 0xb0,0,1,*(undefined8 *)(*(longlong *)(*param_5 + 0xa0) + 0x360));
  local_b8 = (undefined1 *)0x0;
  local_b0 = (undefined1 *)0x0;
  local_a8 = 0;
  FUN_017ce930(*param_5,0,0,0);
  FUN_00f51ae0(*param_5,param_2,param_3,local_res20);
  FUN_00414480(&local_78);
  FUN_00414520(&local_70);
  FUN_00414590(&local_68,2);
  FUN_00414480(&local_58);
  FUN_00414480(&local_40);
  FUN_00414480(&local_res20);
  return local_19;
}

