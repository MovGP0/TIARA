/* Ghidra address: 00c331b0 */
/* Ghidra symbol: FUN_00c331b0 */


void FUN_00c331b0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if ((char)param_2 != cVar1) {
    FUN_00c35490(param_1);
    FUN_006023a0(param_1,param_2);
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

