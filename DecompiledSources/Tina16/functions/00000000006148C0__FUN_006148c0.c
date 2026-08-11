/* Ghidra address: 006148c0 */
/* Ghidra symbol: FUN_006148c0 */


void FUN_006148c0(longlong param_1)

{
  code *pcVar1;
  
  if ((0 < *(int *)(param_1 + 0x78)) &&
     (*(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1, *(int *)(param_1 + 0x78) == 0)) {
    pcVar1 = (code *)FUN_00411550(param_1,0xfff5);
    (*pcVar1)(param_1);
  }
  return;
}

