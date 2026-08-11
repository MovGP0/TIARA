/* Ghidra address: 006f3ea0 */
/* Ghidra symbol: FUN_006f3ea0 */


undefined8 FUN_006f3ea0(undefined8 param_1,uint param_2)

{
  uint3 uVar1;
  undefined8 uVar2;
  
  if ((param_2 & 1) == 0) {
    uVar1 = (uint3)(param_2 >> 8);
    if ((param_2 & 8) == 0) {
      if ((param_2 & 2) == 0) {
        if ((param_2 & 0x40) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = CONCAT71((uint7)uVar1,3);
        }
      }
      else {
        uVar2 = CONCAT71((uint7)uVar1,2);
      }
    }
    else {
      uVar2 = CONCAT71((uint7)uVar1,1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

