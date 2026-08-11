/* Ghidra address: 0046e600 */
/* Ghidra symbol: FUN_0046e600 */


void FUN_0046e600(longlong param_1,undefined8 param_2,undefined2 *param_3,undefined4 param_4)

{
  char cVar1;
  longlong *local_30;
  
  if (((short)param_4 != *(short *)(param_1 + 8)) &&
     (cVar1 = FUN_0046eed0(*param_3,&local_30), cVar1 != '\0')) {
    (**(code **)(*local_30 + 0x38))(local_30,param_2,param_3,param_4);
    return;
  }
  FUN_0046e740(param_1);
  return;
}

