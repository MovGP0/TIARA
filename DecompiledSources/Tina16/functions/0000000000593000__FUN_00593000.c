/* Ghidra address: 00593000 */
/* Ghidra symbol: FUN_00593000 */


undefined8 FUN_00593000(undefined8 param_1,double param_2,double param_3)

{
  undefined8 uVar1;
  
  if (param_3 <= param_2) {
    if (param_2 <= param_3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

