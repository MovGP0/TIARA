/* Ghidra address: 01bd4eb0 */
/* Ghidra symbol: FUN_01bd4eb0 */


void FUN_01bd4eb0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x5b8);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffed);
  (*pcVar2)(uVar1);
  return;
}

