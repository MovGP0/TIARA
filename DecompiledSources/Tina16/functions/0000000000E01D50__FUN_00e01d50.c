/* Ghidra address: 00e01d50 */
/* Ghidra symbol: FUN_00e01d50 */


void FUN_00e01d50(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_3d;
  int local_3c [3];
  
  FUN_004b84c0(param_2,local_3c,4);
  if (-1 < local_3c[0] + -1) {
    do {
      FUN_004b84c0(param_2,&local_3d,1);
      puVar1 = (undefined8 *)FUN_00e01b00(local_3d);
      (**(code **)*puVar1)(puVar1,param_2);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 8),puVar1);
      local_3c[0] = local_3c[0] + -1;
    } while (local_3c[0] != 0);
  }
  return;
}

