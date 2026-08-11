/* Ghidra address: 01c02860 */
/* Ghidra symbol: FUN_01c02860 */


void FUN_01c02860(longlong param_1,int param_2)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x504) != param_2) {
    *(int *)(param_1 + 0x504) = param_2;
    FUN_00654320(param_1,0);
    pcVar1 = (code *)FUN_00411550(param_1,0xffee);
    (*pcVar1)(param_1);
  }
  return;
}

