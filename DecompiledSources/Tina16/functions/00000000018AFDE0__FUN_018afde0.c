/* Ghidra address: 018afde0 */
/* Ghidra symbol: FUN_018afde0 */


void FUN_018afde0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    FUN_01894a70(*(undefined8 *)(*(longlong *)(param_1 + 0x848) + 0x508));
  }
  FUN_00452320(param_1 + 0x838);
  FUN_007fc890(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

