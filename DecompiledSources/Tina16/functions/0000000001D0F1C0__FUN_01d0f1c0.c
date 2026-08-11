/* Ghidra address: 01d0f1c0 */
/* Ghidra symbol: FUN_01d0f1c0 */


void FUN_01d0f1c0(undefined8 param_1,longlong *param_2)

{
  int local_34;
  undefined8 local_30 [2];
  
  FUN_01d0f160(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,&local_34,4);
  if (-1 < local_34 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,8);
      FUN_01d0f0e0(param_1,local_30[0]);
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  return;
}

