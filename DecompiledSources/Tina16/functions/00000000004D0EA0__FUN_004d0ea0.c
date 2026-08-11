/* Ghidra address: 004d0ea0 */
/* Ghidra symbol: FUN_004d0ea0 */


void FUN_004d0ea0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (((*(int *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x1d) == '\0')) &&
     (*(char *)(param_1 + 0x40) == '\0')) {
    FUN_004d1f00(param_1);
    if ((*(char *)(param_1 + 0x19) != '\0') || (*(char *)(param_1 + 0x1b) != '\0')) {
      FUN_004d1ec0(param_1);
    }
    while (*(char *)(param_1 + 0x18) == '\0') {
      FUN_004d1e20();
    }
    FUN_004d1f40(param_1);
  }
  FUN_004d1cb0(param_1);
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x40) == '\0')) {
    thunk_FUN_041d2921(*(longlong *)(param_1 + 0x10));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

