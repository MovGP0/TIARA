/* Ghidra address: 00af6b90 */
/* Ghidra symbol: FUN_00af6b90 */


void FUN_00af6b90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0043e420(param_2,*(undefined8 *)(param_1 + 0x4b8));
  if (iVar1 != 0) {
    FUN_00a77c70(param_1,param_2);
    if (*(longlong *)(param_1 + 0x8b0) != 0) {
      FUN_00414ad0(*(longlong *)(param_1 + 0x8b0) + 0x170,*(undefined8 *)(param_1 + 0x4b8));
    }
  }
  return;
}

