/* Ghidra address: 00667d80 */
/* Ghidra symbol: FUN_00667d80 */


void FUN_00667d80(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffd5);
  (*pcVar2)(uVar1,0);
  return;
}

