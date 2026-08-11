/* Ghidra address: 0094f8d0 */
/* Ghidra symbol: FUN_0094f8d0 */


void FUN_0094f8d0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_00901108,1,L"No modification allowed error.");
    FUN_004134c0(uVar2);
  }
  FUN_0094f710(param_1,param_2);
  return;
}

