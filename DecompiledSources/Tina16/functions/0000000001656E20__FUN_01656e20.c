/* Ghidra address: 01656e20 */
/* Ghidra symbol: FUN_01656e20 */


undefined8 FUN_01656e20(char param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_1 == '\0') {
    uVar1 = DAT_01f7d5f8;
    if (param_2 == '\0') {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = DAT_01f7d5f0;
    if (param_2 == '\0') {
      uVar1 = 0x3ff0000000000000;
    }
  }
  return uVar1;
}

