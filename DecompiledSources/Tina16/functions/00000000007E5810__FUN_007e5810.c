/* Ghidra address: 007e5810 */
/* Ghidra symbol: FUN_007e5810 */


void FUN_007e5810(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  pcVar2 = (code *)FUN_00411550(uVar1,0xfff8);
  (*pcVar2)(uVar1,param_2,param_3);
  return;
}

