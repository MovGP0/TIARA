/* Ghidra address: 0068ac80 */
/* Ghidra symbol: FUN_0068ac80 */


void FUN_0068ac80(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffa7);
  (*pcVar2)(uVar1,param_2);
  return;
}

