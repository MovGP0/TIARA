/* Ghidra address: 0083de50 */
/* Ghidra symbol: FUN_0083de50 */


void FUN_0083de50(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x508);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffa9);
  (*pcVar2)(uVar1);
  return;
}

