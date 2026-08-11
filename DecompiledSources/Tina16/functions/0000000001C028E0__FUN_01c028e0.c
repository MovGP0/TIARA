/* Ghidra address: 01c028e0 */
/* Ghidra symbol: FUN_01c028e0 */


void FUN_01c028e0(longlong param_1,char param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x50c) != param_2) {
    *(char *)(param_1 + 0x50c) = param_2;
    FUN_00654320(param_1,0);
    pcVar1 = (code *)FUN_00411550(param_1,0xffee);
    (*pcVar1)(param_1);
  }
  return;
}

