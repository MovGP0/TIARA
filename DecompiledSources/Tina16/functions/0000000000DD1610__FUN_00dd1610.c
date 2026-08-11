/* Ghidra address: 00dd1610 */
/* Ghidra symbol: FUN_00dd1610 */


undefined8 FUN_00dd1610(double param_1,double param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = 0;
  if (param_1 < param_2) {
    uVar1 = 0x3ff0000000000000;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

