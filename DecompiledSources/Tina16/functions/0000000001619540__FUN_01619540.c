/* Ghidra address: 01619540 */
/* Ghidra symbol: FUN_01619540 */


void FUN_01619540(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_2c;
  
  FUN_004b84c0(param_2,&local_2c,4);
  if (-1 < local_2c + -1) {
    do {
      uVar1 = FUN_01619340(&DAT_01617738,1);
      FUN_01619430(uVar1,param_2);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 8),uVar1);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  return;
}

