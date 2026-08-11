/* Ghidra address: 008b8660 */
/* Ghidra symbol: FUN_008b8660 */


void FUN_008b8660(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_008b8ea0(*(longlong *)(param_1 + 0x28),param_1);
  }
  FUN_008b8d10(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_008b8290(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

