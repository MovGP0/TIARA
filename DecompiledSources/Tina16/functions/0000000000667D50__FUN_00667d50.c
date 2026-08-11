/* Ghidra address: 00667d50 */
/* Ghidra symbol: FUN_00667d50 */


void FUN_00667d50(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = 0xff;
  pcVar2 = (code *)FUN_00411550(uVar1,0xffd5);
  (*pcVar2)(uVar1,CONCAT11(uVar3,1));
  return;
}

