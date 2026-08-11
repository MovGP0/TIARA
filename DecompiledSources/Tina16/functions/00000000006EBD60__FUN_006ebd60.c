/* Ghidra address: 006ebd60 */
/* Ghidra symbol: FUN_006ebd60 */


void FUN_006ebd60(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  *(undefined4 *)(param_1 + 0x4ac) = param_2;
  *(undefined4 *)(param_1 + 0x4b0) = param_3;
  pcVar1 = (code *)FUN_00411550(param_1,0xffac);
  (*pcVar1)(param_1);
  return;
}

