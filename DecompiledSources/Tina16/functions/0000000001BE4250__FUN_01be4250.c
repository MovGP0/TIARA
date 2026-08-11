/* Ghidra address: 01be4250 */
/* Ghidra symbol: FUN_01be4250 */


void FUN_01be4250(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (cVar1 != (char)param_2) {
    (**(code **)(*param_1 + 0x408))(param_1);
  }
  FUN_01c01cf0(param_1,param_2);
  return;
}

