/* Ghidra address: 0043e840 */
/* Ghidra symbol: FUN_0043e840 */


undefined8 * FUN_0043e840(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + -4) >> 1;
  }
  uVar1 = FUN_00415f70(param_2);
  FUN_004147a0(param_1,uVar1,uVar2);
  if (uVar2 != 0) {
    thunk_FUN_0407424e(*param_1,uVar2);
  }
  return param_1;
}

