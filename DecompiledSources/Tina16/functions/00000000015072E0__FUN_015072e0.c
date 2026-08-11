/* Ghidra address: 015072e0 */
/* Ghidra symbol: FUN_015072e0 */


void FUN_015072e0(longlong param_1,undefined8 param_2,short *param_3)

{
  if (*param_3 == 0xd) {
    *param_3 = 0;
    *(undefined1 *)(param_1 + 0xc08) = 1;
    FUN_01507110(param_1,6);
  }
  return;
}

