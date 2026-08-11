/* Ghidra address: 0083e4b0 */
/* Ghidra symbol: FUN_0083e4b0 */


void FUN_0083e4b0(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x508);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffb6);
  (*pcVar2)(uVar1,param_2,param_3);
  return;
}

