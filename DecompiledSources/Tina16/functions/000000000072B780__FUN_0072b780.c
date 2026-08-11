/* Ghidra address: 0072b780 */
/* Ghidra symbol: FUN_0072b780 */


void FUN_0072b780(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  
  *(undefined4 *)(param_1 + 0xe8) = 0;
  pcVar1 = (code *)FUN_00411550(param_1,0xffef);
  (*pcVar1)(param_1,param_2);
  return;
}

