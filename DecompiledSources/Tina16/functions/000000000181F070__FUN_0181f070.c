/* Ghidra address: 0181f070 */
/* Ghidra symbol: FUN_0181f070 */


void FUN_0181f070(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004095f0(*(undefined8 *)(param_1 + 8));
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

