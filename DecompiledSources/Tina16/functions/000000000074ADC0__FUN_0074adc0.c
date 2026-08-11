/* Ghidra address: 0074adc0 */
/* Ghidra symbol: FUN_0074adc0 */


void FUN_0074adc0(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  FUN_00659710(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffb7);
  (*pcVar2)(uVar1,param_2,param_3);
  return;
}

