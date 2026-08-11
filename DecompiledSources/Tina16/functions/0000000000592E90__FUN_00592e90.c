/* Ghidra address: 00592e90 */
/* Ghidra symbol: FUN_00592e90 */


undefined8 FUN_00592e90(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (param_2 < param_3) {
    uVar1 = 0xffffffff;
  }
  else if (param_3 < param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

