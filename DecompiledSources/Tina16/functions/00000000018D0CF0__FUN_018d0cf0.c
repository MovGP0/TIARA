/* Ghidra address: 018d0cf0 */
/* Ghidra symbol: FUN_018d0cf0 */


void FUN_018d0cf0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 400) = 0;
  }
  FUN_01877050(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

