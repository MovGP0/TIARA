/* Ghidra address: 01877050 */
/* Ghidra symbol: FUN_01877050 */


void FUN_01877050(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x30))(param_1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

