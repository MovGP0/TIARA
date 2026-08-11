/* Ghidra address: 0046e6c0 */
/* Ghidra symbol: FUN_0046e6c0 */


void FUN_0046e6c0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined2 local_2a [5];
  
  cVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_3,local_2a);
  if (cVar1 == '\0') {
    FUN_0046e740(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,local_2a[0]);
  }
  return;
}

