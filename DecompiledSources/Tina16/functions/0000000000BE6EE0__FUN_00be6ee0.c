/* Ghidra address: 00be6ee0 */
/* Ghidra symbol: FUN_00be6ee0 */


void FUN_00be6ee0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x18));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x20));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

