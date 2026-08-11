/* Ghidra address: 00948d80 */
/* Ghidra symbol: FUN_00948d80 */


undefined8 FUN_00948d80(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_1 == (longlong *)0x0) {
    uVar2 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0(uVar2);
  }
  cVar1 = (**(code **)(*param_1 + 0x120))(param_1);
  if (cVar1 == '\x03') {
    local_28 = FUN_004113f0(param_1,&PTR_FUN_00927588);
  }
  else {
    (**(code **)(*param_1 + 0x108))(param_1,local_20);
    local_28 = FUN_009906d0(&PTR_FUN_00927588,1,local_20[0]);
    FUN_00410f20(param_1);
  }
  FUN_00414520(local_20);
  return local_28;
}

