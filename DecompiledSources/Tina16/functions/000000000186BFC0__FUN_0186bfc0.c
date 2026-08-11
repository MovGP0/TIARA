/* Ghidra address: 0186bfc0 */
/* Ghidra symbol: FUN_0186bfc0 */


void FUN_0186bfc0(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  
  *(undefined1 *)(param_1 + 0x6d8) = param_2;
  pcVar1 = (code *)FUN_00411550(param_1,0xffce);
  (*pcVar1)(param_1);
  return;
}

