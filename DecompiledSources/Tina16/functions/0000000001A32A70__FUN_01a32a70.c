/* Ghidra address: 01a32a70 */
/* Ghidra symbol: FUN_01a32a70 */


undefined8 FUN_01a32a70(int param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((((param_1 == 0xe) || (param_1 == 0x10)) || (param_1 == 0x43)) ||
     ((param_2 != '\0' && ((param_1 == 0xf || (param_1 == 0xd)))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

