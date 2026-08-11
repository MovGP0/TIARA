/* Ghidra address: 01b20e90 */
/* Ghidra symbol: FUN_01b20e90 */


void FUN_01b20e90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint local_1c;
  
  local_1c = 0;
  if (param_1 != 0) {
    local_1c = *(uint *)(param_1 + -4) >> 1;
  }
  FUN_004b89e0(param_2,&local_1c,4);
  if (0 < (int)local_1c) {
    uVar1 = FUN_00415f70(param_1);
    FUN_004b89e0(param_2,uVar1,(longlong)(int)(local_1c * 2));
  }
  return;
}

