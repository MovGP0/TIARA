/* Ghidra address: 01d3f830 */
/* Ghidra symbol: FUN_01d3f830 */


void FUN_01d3f830(undefined8 param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = FUN_01d03160(param_1);
  if (sVar1 == 0x38a4) {
    *param_2 = 8;
    param_2[1] = 4;
  }
  else if (sVar1 == 0x38a5) {
    *param_2 = 10;
    param_2[1] = 4;
  }
  else if (sVar1 == 0x38a6) {
    *param_2 = 0xb;
    param_2[1] = 8;
  }
  else {
    uVar2 = FUN_013a5940(param_1);
    *param_2 = uVar2;
    uVar2 = FUN_013a5960(param_1);
    param_2[1] = uVar2;
  }
  return;
}

