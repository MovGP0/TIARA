/* Ghidra address: 01a984b0 */
/* Ghidra symbol: FUN_01a984b0 */


void FUN_01a984b0(longlong param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040c770((double)param_2 / (*(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x70))
                      );
  *param_4 = uVar1;
  uVar1 = FUN_0040c770((double)param_3 / (*(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x70))
                      );
  *param_5 = uVar1;
  return;
}

