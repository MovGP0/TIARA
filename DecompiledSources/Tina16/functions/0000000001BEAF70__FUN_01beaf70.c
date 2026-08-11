/* Ghidra address: 01beaf70 */
/* Ghidra symbol: FUN_01beaf70 */


void FUN_01beaf70(longlong param_1)

{
  code *pcVar1;
  
  *(undefined1 *)(param_1 + 0x369) = 1;
  pcVar1 = (code *)FUN_00411550(param_1,0xffea);
  (*pcVar1)(param_1);
  FUN_01c04160(param_1);
  return;
}

