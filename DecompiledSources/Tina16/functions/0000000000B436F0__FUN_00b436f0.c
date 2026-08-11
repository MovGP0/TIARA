/* Ghidra address: 00b436f0 */
/* Ghidra symbol: FUN_00b436f0 */


void FUN_00b436f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00410e60(&DAT_00b403a0,1);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),lVar2);
  *(undefined4 *)(lVar2 + 8) = param_2;
  uVar1 = FUN_00b41f80(param_1);
  *(undefined4 *)(lVar2 + 0x2c) = uVar1;
  *(undefined4 *)(lVar2 + 0x38) = param_3;
  *(undefined4 *)(lVar2 + 0x3c) = param_4;
  FUN_00414b90(lVar2 + 0x40,param_5);
  FUN_00414b90(lVar2 + 0x48,param_6);
  FUN_00414bf0(lVar2 + 0x50,param_7);
  *(undefined4 *)(lVar2 + 0xc) = param_8;
  *(undefined4 *)(lVar2 + 0x10) = param_9;
  *(undefined4 *)(lVar2 + 0x14) = param_10;
  *(undefined4 *)(lVar2 + 0x18) = param_11;
  *(undefined4 *)(lVar2 + 0x1c) = param_12;
  *(undefined4 *)(lVar2 + 0x20) = param_13;
  *(undefined4 *)(lVar2 + 0x24) = param_14;
  *(undefined4 *)(lVar2 + 0x28) = param_15;
  return;
}

