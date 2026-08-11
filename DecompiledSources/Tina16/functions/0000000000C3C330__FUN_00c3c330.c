/* Ghidra address: 00c3c330 */
/* Ghidra symbol: FUN_00c3c330 */


void FUN_00c3c330(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_2c [3];
  
  FUN_01d31720(param_1,local_2c);
  if (-1 < local_2c[0] + -1) {
    do {
      uVar1 = FUN_00c3bf30(param_1);
      FUN_004ae7e0(param_2,uVar1);
      local_2c[0] = local_2c[0] + -1;
    } while (local_2c[0] != 0);
  }
  return;
}

