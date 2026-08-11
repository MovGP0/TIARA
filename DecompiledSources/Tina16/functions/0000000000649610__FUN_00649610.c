/* Ghidra address: 00649610 */
/* Ghidra symbol: FUN_00649610 */


void FUN_00649610(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffe5);
  (*pcVar2)(uVar1,param_2,param_3,param_4);
  return;
}

