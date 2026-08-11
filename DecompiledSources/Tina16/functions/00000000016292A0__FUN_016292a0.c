/* Ghidra address: 016292a0 */
/* Ghidra symbol: FUN_016292a0 */


void FUN_016292a0(undefined8 param_1,longlong param_2)

{
  int local_34;
  int local_30;
  undefined4 local_2c;
  
  FUN_004b84c0(param_1,&local_34,4);
  FUN_004b84c0(param_1,&local_30,4);
  if (local_30 < local_34) {
    local_2c = 2;
  }
  else {
    local_2c = 1;
  }
  *(ulonglong *)(param_2 + 0x2c) = CONCAT44(local_30,local_34);
  *(undefined4 *)(param_2 + 0x34) = local_2c;
  return;
}

