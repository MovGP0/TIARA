/* Ghidra address: 004d4bf0 */
/* Ghidra symbol: FUN_004d4bf0 */


void FUN_004d4bf0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  
  FUN_00411a80(param_1,param_2);
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_004d2d90(*(longlong *)(param_1 + 0x80),param_1);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    while (lVar1 = *(longlong *)(param_1 + 0x78), 0 < *(int *)(lVar1 + 0x10)) {
      uVar2 = *(uint *)(lVar1 + 0x10) - 1;
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      FUN_004d4ed0(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
    }
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x78));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

