/* Ghidra address: 004d4a50 */
/* Ghidra symbol: FUN_004d4a50 */


void FUN_004d4a50(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  FUN_004d4f50(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffef);
  (*pcVar2)(uVar1);
  return;
}

