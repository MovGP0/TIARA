/* Ghidra address: 00e7dd90 */
/* Ghidra symbol: FUN_00e7dd90 */


void FUN_00e7dd90(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_016ebc30(param_1,1);
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      FUN_00e7db40(param_1,param_2,3);
    }
    else if (bVar1 == 1) {
      FUN_00e7d8c0(param_1,param_2);
    }
    else if (bVar1 == 2) {
      FUN_00e7da40(param_1,param_2);
    }
  }
  else if (bVar1 == 4) {
    FUN_00e7db40(param_1,param_2,4);
  }
  else if (bVar1 == 5) {
    FUN_00e7db40(param_1,param_2,5);
  }
  return;
}

