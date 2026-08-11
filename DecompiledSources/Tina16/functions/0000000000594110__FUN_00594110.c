/* Ghidra address: 00594110 */
/* Ghidra symbol: FUN_00594110 */


void FUN_00594110(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + -4) >> 1;
  }
  uVar1 = FUN_00415f70(param_2);
  FUN_00525420(uVar1,uVar2 * 2,0);
  return;
}

