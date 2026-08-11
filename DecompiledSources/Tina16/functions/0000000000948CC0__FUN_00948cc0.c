/* Ghidra address: 00948cc0 */
/* Ghidra symbol: FUN_00948cc0 */


undefined8 FUN_00948cc0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (longlong *)0x0) {
    uVar2 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0(uVar2);
  }
  cVar1 = (**(code **)(*param_1 + 0x120))(param_1);
  if (cVar1 == '\x02') {
    uVar2 = FUN_004113f0(param_1,&PTR_FUN_00927180);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x100))(param_1);
    uVar2 = FUN_00990420(&PTR_FUN_00927180,1,uVar2);
    FUN_00410f20(param_1);
  }
  return uVar2;
}

