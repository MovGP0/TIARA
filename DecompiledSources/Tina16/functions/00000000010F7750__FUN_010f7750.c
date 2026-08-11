/* Ghidra address: 010f7750 */
/* Ghidra symbol: FUN_010f7750 */


void FUN_010f7750(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x9c2) == '\0') {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x7f0));
    FUN_00f83340(uVar1,0x532,0,0,0x96);
    FUN_010f77a0(param_1,param_2);
  }
  return;
}

