/* Ghidra address: 00ae6800 */
/* Ghidra symbol: FUN_00ae6800 */


void FUN_00ae6800(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  
  local_60 = auStack_88;
  local_50 = *param_5;
  uStack_48 = param_5[1];
  local_68 = FUN_00610ca0(&PTR_FUN_00a90138,1);
  *(longlong *)(param_1 + 0xe8) = local_68;
  *(undefined8 *)(local_68 + 0x20) = 0;
  *(longlong *)(param_1 + 0x98) = param_2;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x5c8);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x5d0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x718);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0x720);
  *(undefined8 *)(param_1 + 0xb0) = local_50;
  *(undefined8 *)(param_1 + 0xb8) = uStack_48;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0x5d8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0x5e0);
  FUN_00414480(param_1 + 0x10);
  FUN_00414480(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x82) = 0;
  FUN_00ad47e0(param_1,0);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  uVar1 = FUN_00610ca0(&PTR_FUN_00a691f8,1);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  FUN_00ae6570(auStack_88);
  local_28 = (undefined8 *)(param_1 + 0x48);
  local_30 = *local_28;
  *local_28 = 0;
  FUN_00410f20(local_30);
  local_38 = (undefined8 *)(param_1 + 0xe8);
  local_40 = *local_38;
  *local_38 = 0;
  FUN_00410f20(local_40);
  return;
}

