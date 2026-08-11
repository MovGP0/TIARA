/* Ghidra address: 01d3ff70 */
/* Ghidra symbol: FUN_01d3ff70 */


undefined8 FUN_01d3ff70(int param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 4) {
    if ((((param_3 & 1) == 0) || ((param_2 & 0xf) != 2)) &&
       (((param_3 & 2) == 0 || ((param_2 & 0xf0) != 0x10)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

