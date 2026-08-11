/* Ghidra address: 0085d6b0 */
/* Ghidra symbol: FUN_0085d6b0 */


void FUN_0085d6b0(longlong param_1,short *param_2,ushort param_3)

{
  if ((*(byte *)(param_1 + 0x4d0) & 1) == 0) {
    if ((*param_2 == 0x73) && ((param_3 & 2) != 0)) {
      *param_2 = 0;
    }
  }
  else if (*param_2 == 0x1b) {
    FUN_00805200(param_1);
  }
  FUN_00659710(param_1,param_2,param_3);
  return;
}

