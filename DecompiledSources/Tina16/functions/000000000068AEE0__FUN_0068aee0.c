/* Ghidra address: 0068aee0 */
/* Ghidra symbol: FUN_0068aee0 */


void FUN_0068aee0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffa8);
  (*pcVar2)(uVar1);
  return;
}

