/* Ghidra address: 010b6840 */
/* Ghidra symbol: FUN_010b6840 */


void FUN_010b6840(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x728);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffea);
  (*pcVar2)(uVar1);
  return;
}

