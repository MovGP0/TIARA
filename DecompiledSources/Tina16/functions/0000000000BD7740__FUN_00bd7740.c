/* Ghidra address: 00bd7740 */
/* Ghidra symbol: FUN_00bd7740 */


void FUN_00bd7740(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  int local_1c;
  
  FUN_004b1e70(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,&local_1c,4);
  for (; 0 < local_1c; local_1c = local_1c + -1) {
    uVar1 = FUN_00bd7240(param_1);
    FUN_00bd7140(uVar1,param_2);
  }
  return;
}

