/* Ghidra address: 010b6870 */
/* Ghidra symbol: FUN_010b6870 */


void FUN_010b6870(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x730);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffea);
  (*pcVar2)(uVar1);
  return;
}

