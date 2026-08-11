/* Ghidra address: 01cc0b10 */
/* Ghidra symbol: FUN_01cc0b10 */


undefined8 FUN_01cc0b10(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      FUN_00414480(param_2);
    }
    else if (bVar1 == 0) {
      FUN_00414480(param_2);
    }
    else if (bVar1 == 1) {
      FUN_00414480(param_2);
    }
  }
  else if (bVar1 == 3) {
    FUN_00414480(param_2);
  }
  else if (bVar1 == 4) {
    FUN_00414480(param_2);
  }
  return param_2;
}

