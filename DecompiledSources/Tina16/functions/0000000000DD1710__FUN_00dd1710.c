/* Ghidra address: 00dd1710 */
/* Ghidra symbol: FUN_00dd1710 */


undefined8 FUN_00dd1710(double param_1,undefined8 *param_2,undefined4 param_3)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = (double)FUN_00dd07b0(param_3);
  *param_2 = 0;
  if (param_1 < dVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3ff0000000000000;
  }
  return uVar2;
}

