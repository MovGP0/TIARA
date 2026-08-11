/* Ghidra address: 0046c6f0 */
/* Ghidra symbol: FUN_0046c6f0 */


void FUN_0046c6f0(ushort *param_1,ushort *param_2,undefined8 *param_3)

{
  if (*param_1 == 0x400c) {
    FUN_0046c6f0(*(undefined8 *)(param_1 + 4));
  }
  else {
    *param_2 = *param_1;
    if ((*param_2 & 0x2000) == 0) {
      *param_3 = 0;
    }
    else if ((*param_2 & 0x4000) == 0) {
      *param_3 = *(undefined8 *)(param_1 + 4);
    }
    else {
      *param_3 = **(undefined8 **)(param_1 + 4);
    }
  }
  return;
}

