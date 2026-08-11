/* Ghidra address: 00b35230 */
/* Ghidra symbol: FUN_00b35230 */


void FUN_00b35230(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined2 param_13,undefined2 param_14,undefined1 param_15,undefined1 param_16)

{
  longlong lVar1;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_004153d0(local_30,*PTR_DAT_020012a0,0);
  FUN_0061d490(local_20,param_2,param_3,local_30[0],1);
  lVar1 = FUN_00b34bf0(&DAT_00b33d30,1);
  *(undefined1 *)(lVar1 + 8) = 4;
  *(undefined1 *)(lVar1 + 9) = 0;
  *(undefined1 *)(lVar1 + 10) = param_8;
  *(undefined1 *)(lVar1 + 0xd) = param_4;
  *(undefined1 *)(lVar1 + 0xe) = param_5;
  *(undefined1 *)(lVar1 + 0xb) = param_6;
  *(undefined1 *)(lVar1 + 0xc) = param_7;
  FUN_00414b90(lVar1 + 0x10,param_9);
  FUN_00414b90(lVar1 + 0x18,param_10);
  FUN_00414b90(lVar1 + 0x20,param_11);
  FUN_00414b90(lVar1 + 0x28,param_12);
  FUN_00414bf0(lVar1 + 0x30,local_20[0]);
  FUN_004144d0(lVar1 + 0x38);
  FUN_00b22230(*(undefined8 *)(lVar1 + 0x40),param_13,param_14,param_15,param_16);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar1);
  FUN_004144d0(local_30);
  FUN_004144d0(local_20);
  return;
}

