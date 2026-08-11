/* Ghidra address: 009da550 */
/* Ghidra symbol: FUN_009da550 */


void FUN_009da550(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_009d4be0(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

