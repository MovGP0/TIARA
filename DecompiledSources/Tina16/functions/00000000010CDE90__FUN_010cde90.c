/* Ghidra address: 010cde90 */
/* Ghidra symbol: FUN_010cde90 */


void FUN_010cde90(undefined8 param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290 [2];
  undefined8 local_280;
  undefined1 local_256 [41];
  undefined1 local_22d [41];
  undefined1 local_204 [41];
  undefined1 local_1db [43];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_290[0] = 0;
  local_20 = *param_2;
  local_40 = *param_3;
  local_38 = param_3[1];
  local_30 = param_3[2];
  local_28 = param_3[3];
  puVar2 = &local_280;
  for (lVar1 = 0x48; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_010cddb0(auStack_338,0);
  FUN_010cddb0(auStack_338,L"@ Configuration begin");
  FUN_010cddb0(auStack_338,L"; numerical format");
  FUN_0043f750(local_290,local_20 & 0xff);
  FUN_010cddb0(auStack_338,local_290[0]);
  FUN_0043f750(&local_298,local_20._1_1_);
  FUN_010cddb0(auStack_338,local_298);
  FUN_0043f750(&local_2a0,local_20._2_1_);
  FUN_010cddb0(auStack_338,local_2a0);
  FUN_0043f750(&local_2a8,local_20._3_1_);
  FUN_010cddb0(auStack_338,local_2a8);
  FUN_0043f750(&local_2b0,local_20._4_4_);
  FUN_010cddb0(auStack_338,local_2b0);
  FUN_010cddb0(auStack_338,L"; math");
  FUN_010cb760(&local_2b8,local_40);
  FUN_010cddb0(auStack_338,local_2b8);
  FUN_0043f750(&local_2c0,local_38 & 0xffffffff);
  FUN_010cddb0(auStack_338,local_2c0);
  FUN_010cb760(&local_2c8,local_30);
  FUN_010cddb0(auStack_338,local_2c8);
  FUN_0043f750(&local_2d0,local_28 & 0xffffffff);
  FUN_010cddb0(auStack_338,local_2d0);
  FUN_010cddb0(auStack_338,L"; drawing");
  FUN_0043f750(&local_2d8,(undefined1)local_280);
  FUN_010cddb0(auStack_338,local_2d8);
  FUN_004169a0(&local_2e0,(longlong)&local_280 + 1);
  FUN_010cddb0(auStack_338,local_2e0);
  FUN_004169a0(&local_2e8,local_256);
  FUN_010cddb0(auStack_338,local_2e8);
  FUN_004169a0(&local_2f0,local_22d);
  FUN_010cddb0(auStack_338,local_2f0);
  FUN_004169a0(&local_2f8,local_204);
  FUN_010cddb0(auStack_338,local_2f8);
  FUN_004169a0(&local_300,local_1db);
  FUN_010cddb0(auStack_338,local_300);
  FUN_010cb760(&local_308,local_1b0);
  FUN_010cddb0(auStack_338,local_308);
  FUN_010cb760(&local_310,local_1a8);
  FUN_010cddb0(auStack_338,local_310);
  FUN_0043f750(&local_318,local_1a0);
  FUN_010cddb0(auStack_338,local_318);
  FUN_010cddb0(auStack_338,L".@ Configuration end");
  FUN_00414560(&local_318,0x12);
  return;
}

