/* Ghidra address: 01be8aa0 */
/* Ghidra symbol: FUN_01be8aa0 */


void FUN_01be8aa0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (cVar1 != (char)param_2) {
    FUN_01be1b80(param_1);
  }
  FUN_01be4250(param_1,param_2);
  return;
}

