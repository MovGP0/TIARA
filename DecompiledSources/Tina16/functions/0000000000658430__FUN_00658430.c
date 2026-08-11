/* Ghidra address: 00658430 */
/* Ghidra symbol: FUN_00658430 */


void FUN_00658430(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_00656400(param_1,param_2,param_1);
  if ((cVar1 != '\0') && (*(longlong *)(param_2 + 0x18) == 0)) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + -0x38))(param_1,param_2);
    }
  }
  return;
}

