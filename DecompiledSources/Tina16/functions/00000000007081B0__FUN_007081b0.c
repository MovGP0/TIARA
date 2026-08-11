/* Ghidra address: 007081b0 */
/* Ghidra symbol: FUN_007081b0 */


void FUN_007081b0(longlong param_1,int *param_2)

{
  FUN_00786c80(param_1,param_2);
  if (((*param_2 == 0x1328) && (*(longlong *)(param_1 + 0x48) == 0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 2) != 0)) {
    FUN_00708200(param_1);
  }
  return;
}

