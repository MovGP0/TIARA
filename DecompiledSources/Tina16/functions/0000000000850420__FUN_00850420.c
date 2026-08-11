/* Ghidra address: 00850420 */
/* Ghidra symbol: FUN_00850420 */


void FUN_00850420(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  if ((*(longlong *)(param_2 + 0x10) != param_1) &&
     (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x528))) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffab);
    (*pcVar1)(param_1,0);
  }
  return;
}

