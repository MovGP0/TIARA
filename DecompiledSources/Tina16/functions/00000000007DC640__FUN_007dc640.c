/* Ghidra address: 007dc640 */
/* Ghidra symbol: FUN_007dc640 */


void FUN_007dc640(ushort param_1,ushort *param_2,ushort *param_3)

{
  *param_2 = param_1 & 0x1fff;
  *param_3 = 0;
  if ((param_1 & 0x2000) != 0) {
    *param_3 = *param_3 | 1;
  }
  if ((param_1 & 0x4000) != 0) {
    *param_3 = *param_3 | 4;
  }
  if ((param_1 & 0x8000) != 0) {
    *param_3 = *param_3 | 2;
  }
  return;
}

