/* Ghidra address: 00461910 */
/* Ghidra symbol: FUN_00461910 */


void FUN_00461910(undefined8 param_1,undefined2 *param_2)

{
  char cVar1;
  longlong *local_20;
  
  cVar1 = FUN_0046eed0(*param_2,&local_20);
  if (cVar1 == '\0') {
    FUN_004618a0(param_1,param_2);
  }
  else {
    (**(code **)(*local_20 + 0x50))(local_20,param_1,param_2,1);
  }
  return;
}

