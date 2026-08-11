/* Ghidra address: 016daa20 */
/* Ghidra symbol: FUN_016daa20 */


undefined8 FUN_016daa20(undefined8 param_1,char param_2,double param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 == '\x06') {
    if ((param_3 <= 0.0) || ((double)param_4[1] <= param_3)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *param_4;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

