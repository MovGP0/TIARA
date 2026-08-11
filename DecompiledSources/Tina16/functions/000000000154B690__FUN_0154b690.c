/* Ghidra address: 0154b690 */
/* Ghidra symbol: FUN_0154b690 */


longlong FUN_0154b690(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                     undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                     undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined1 param_16
                     ,undefined8 param_17,undefined1 param_18,undefined4 param_19)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined8 local_72;
  undefined8 uStack_6a;
  undefined8 uStack_62;
  undefined8 uStack_5a;
  undefined4 uStack_52;
  undefined1 uStack_4e;
  undefined8 local_4d;
  undefined8 uStack_45;
  undefined8 uStack_3d;
  undefined8 uStack_35;
  undefined4 uStack_2d;
  undefined1 uStack_29;
  
  local_80 = auStack_a8;
  local_4d = *param_7;
  uStack_45 = param_7[1];
  uStack_3d = param_7[2];
  uStack_35 = param_7[3];
  uStack_2d = *(undefined4 *)(param_7 + 4);
  uStack_29 = *(undefined1 *)((longlong)param_7 + 0x24);
  local_72 = *param_8;
  uStack_6a = param_8[1];
  uStack_62 = param_8[2];
  uStack_5a = param_8[3];
  uStack_52 = *(undefined4 *)(param_8 + 4);
  uStack_4e = *(undefined1 *)((longlong)param_8 + 0x24);
  FUN_00414610(param_17);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  uVar1 = FUN_00e13db0(param_3,0xffffffff);
  *(undefined8 *)(local_res8 + 0x88) = uVar1;
  *(undefined4 *)(local_res8 + 0x10) = param_5;
  *(undefined4 *)(local_res8 + 0x18) = param_6;
  *(undefined4 *)(local_res8 + 0x14) = param_4;
  *(undefined8 *)(local_res8 + 0x28) = local_4d;
  *(undefined8 *)(local_res8 + 0x30) = uStack_45;
  *(undefined8 *)(local_res8 + 0x38) = uStack_3d;
  *(undefined8 *)(local_res8 + 0x40) = uStack_35;
  *(undefined4 *)(local_res8 + 0x48) = uStack_2d;
  *(undefined1 *)(local_res8 + 0x4c) = uStack_29;
  *(undefined8 *)(local_res8 + 0x4d) = local_72;
  *(undefined8 *)(local_res8 + 0x55) = uStack_6a;
  *(undefined8 *)(local_res8 + 0x5d) = uStack_62;
  *(undefined8 *)(local_res8 + 0x65) = uStack_5a;
  *(undefined4 *)(local_res8 + 0x6d) = uStack_52;
  *(undefined1 *)(local_res8 + 0x71) = uStack_4e;
  *(undefined4 *)(local_res8 + 0x74) = param_9;
  *(undefined4 *)(local_res8 + 0x78) = param_10;
  *(undefined4 *)(local_res8 + 0x7c) = param_11;
  *(undefined4 *)(local_res8 + 0x80) = param_12;
  *(undefined8 *)(local_res8 + 0x20) = param_13;
  *(undefined4 *)(local_res8 + 0x1c) = 0xffffffff;
  *(undefined8 *)(local_res8 + 0x90) = param_14;
  *(undefined4 *)(local_res8 + 0x84) = param_15;
  FUN_00414ad0(local_res8 + 0xa0,param_17);
  *(undefined1 *)(local_res8 + 0x98) = param_18;
  *(undefined1 *)(local_res8 + 0x99) = param_16;
  *(undefined1 *)(local_res8 + 0x9a) = (undefined1)param_19;
  FUN_00414480(&param_17);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

