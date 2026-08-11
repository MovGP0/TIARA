/* Ghidra address: 00b35120 */
/* Ghidra symbol: FUN_00b35120 */


void FUN_00b35120(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined2 param_12,
                 undefined2 param_13,undefined1 param_14,undefined1 param_15)

{
  longlong lVar1;
  
  lVar1 = FUN_00b34bf0(&DAT_00b33d30,1);
  *(undefined1 *)(lVar1 + 8) = 3;
  *(undefined1 *)(lVar1 + 9) = 0;
  *(undefined1 *)(lVar1 + 10) = param_7;
  *(undefined1 *)(lVar1 + 0xd) = param_3;
  *(undefined1 *)(lVar1 + 0xe) = param_4;
  *(undefined1 *)(lVar1 + 0xb) = param_5;
  *(undefined1 *)(lVar1 + 0xc) = param_6;
  FUN_00414b90(lVar1 + 0x10,param_8);
  FUN_00414b90(lVar1 + 0x18,param_9);
  FUN_00414b90(lVar1 + 0x20,param_10);
  FUN_00414b90(lVar1 + 0x28,param_11);
  FUN_00414bf0(lVar1 + 0x30,param_2);
  FUN_004144d0(lVar1 + 0x38);
  FUN_00b22230(*(undefined8 *)(lVar1 + 0x40),param_12,param_13,param_14,param_15);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar1);
  return;
}

