/* Ghidra address: 0069d250 */
/* Ghidra symbol: FUN_0069d250 */


void FUN_0069d250(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_0069d650(param_1);
  }
  FUN_0069d2f0(param_1,0);
  FUN_0069e7f0(param_1);
  FUN_0069e870(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_040c3345(*(longlong *)(param_1 + 0x48));
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    thunk_FUN_04172795(*(longlong *)(param_1 + 0x58));
    thunk_FUN_03d5bf3d(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

