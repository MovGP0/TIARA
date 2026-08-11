/* Ghidra address: 00b34ed0 */
/* Ghidra symbol: FUN_00b34ed0 */


void FUN_00b34ed0(longlong param_1,char param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined2 param_14,undefined2 param_15,undefined1 param_16,
                 undefined1 param_17)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00b34bf0(&DAT_00b33d30,1);
  if (param_2 == '\x03') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Use AddListValidation method for list validations.");
    FUN_004134c0(uVar2);
  }
  if (param_2 == '\x04') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,
                         L"Use AddExplicitListValidation method for list validations.");
    FUN_004134c0(uVar2);
  }
  *(char *)(lVar1 + 8) = param_2;
  *(undefined1 *)(lVar1 + 9) = param_3;
  *(undefined1 *)(lVar1 + 10) = param_9;
  *(undefined1 *)(lVar1 + 0xd) = param_6;
  *(undefined1 *)(lVar1 + 0xb) = param_7;
  *(undefined1 *)(lVar1 + 0xc) = param_8;
  FUN_00414b90(lVar1 + 0x10,param_10);
  FUN_00414b90(lVar1 + 0x18,param_11);
  FUN_00414b90(lVar1 + 0x20,param_12);
  FUN_00414b90(lVar1 + 0x28,param_13);
  FUN_00414bf0(lVar1 + 0x30,param_4);
  FUN_00414bf0(lVar1 + 0x38,param_5);
  FUN_00b22230(*(undefined8 *)(lVar1 + 0x40),param_14,param_15,param_16,param_17);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar1);
  return;
}

