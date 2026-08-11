/* Ghidra address: 0046e5a0 */
/* Ghidra symbol: FUN_0046e5a0 */


void FUN_0046e5a0(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  char cVar1;
  longlong *local_30 [2];
  
  cVar1 = FUN_0046eed0(*param_3,local_30);
  if (cVar1 == '\0') {
    FUN_0046e740(param_1);
  }
  else {
    (**(code **)(*local_30[0] + 0x38))(local_30[0],param_2,param_3,*(undefined2 *)(param_1 + 8));
  }
  return;
}

