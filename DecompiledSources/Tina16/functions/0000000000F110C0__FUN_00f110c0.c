/* Ghidra address: 00f110c0 */
/* Ghidra symbol: FUN_00f110c0 */


void FUN_00f110c0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if ((*(char *)(param_1 + 0x70) != '\0') && (*(longlong *)(param_1 + 0x50) != 0)) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x68),(longlong)(*(int *)(param_1 + 0x58) << 4));
  }
  FUN_01d2b2f0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

