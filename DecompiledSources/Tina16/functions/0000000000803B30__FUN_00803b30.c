/* Ghidra address: 00803b30 */
/* Ghidra symbol: FUN_00803b30 */


void FUN_00803b30(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(short *)(param_2 + 0x10) == 0) {
    FUN_0065c1f0(param_1,*(undefined8 *)(param_1 + 0x4c0),
                 CONCAT71((int7)((ulonglong)param_4 >> 8),*(int *)(param_2 + 8) == 0) & 0xffffffff,1
                );
  }
  else {
    thunk_FUN_03c244fb(*(undefined8 *)(param_2 + 8));
  }
  return;
}

