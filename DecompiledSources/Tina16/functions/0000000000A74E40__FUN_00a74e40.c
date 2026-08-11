/* Ghidra address: 00a74e40 */
/* Ghidra symbol: FUN_00a74e40 */


undefined8 FUN_00a74e40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_004169f0(param_1 + 8,*(undefined4 *)(param_1 + 0x14));
    if (0 < *(int *)(param_1 + 0x14)) {
      uVar1 = FUN_00414de0(param_1 + 8);
      FUN_00409a70(*(longlong *)(param_1 + 0x18) + 2,uVar1,(longlong)(*(int *)(param_1 + 0x14) * 2))
      ;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 8));
  return param_2;
}

