/* Ghidra address: 00deebc0 */
/* Ghidra symbol: FUN_00deebc0 */


void FUN_00deebc0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_016eb0a0(param_1,1);
  FUN_016eb0a0(param_1,2);
  uVar2 = FUN_016ed930(param_2);
  if (param_3 < 7) {
    if (param_3 == 6) {
      FUN_016ed220(param_1,1,0,0);
      return;
    }
    if ((param_3 != 1) && (param_3 != 5)) {
      return;
    }
  }
  else if (param_3 != 7) {
    if (param_3 != 8) {
      return;
    }
    FUN_016ed460(param_1,1,0,uVar1,uVar2,0);
    return;
  }
  FUN_016ed220(param_1,1,0,0);
  return;
}

