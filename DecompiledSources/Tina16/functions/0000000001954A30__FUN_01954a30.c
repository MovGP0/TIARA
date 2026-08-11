/* Ghidra address: 01954a30 */
/* Ghidra symbol: FUN_01954a30 */


void FUN_01954a30(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x1a0));
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  FUN_01954030(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

