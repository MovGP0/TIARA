/* Ghidra address: 00bc5d10 */
/* Ghidra symbol: FUN_00bc5d10 */


undefined8 FUN_00bc5d10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)((longlong)param_1 + 0x19c) != *(int *)((longlong)param_1 + 0x1a4)) {
    FUN_00bc5ca0(param_1);
  }
  if (param_1[0x30] == 0) {
    FUN_00bc5cd0(param_1);
  }
  if ((short *)param_1[0x30] != (short *)0x0) {
    if (*(short *)param_1[0x30] == 0xd8) {
      uVar1 = 1;
    }
    else {
      (**(code **)*param_1)(param_1,0x3ec);
    }
  }
  return uVar1;
}

