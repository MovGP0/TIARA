/* Ghidra address: 01d74270 */
/* Ghidra symbol: FUN_01d74270 */


undefined8 FUN_01d74270(double param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (0.5 <= param_1) {
    uVar1 = 0x3ff0000000000000;
  }
  else {
    uVar1 = 0;
  }
  *param_2 = 0;
  return uVar1;
}

