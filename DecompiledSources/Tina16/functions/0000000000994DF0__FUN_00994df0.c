/* Ghidra address: 00994df0 */
/* Ghidra symbol: FUN_00994df0 */


void FUN_00994df0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x188))(param_2);
    cVar1 = FUN_004113d0(uVar2,&PTR_FUN_0090fbe0);
    if (cVar1 == '\0') {
      uVar2 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
      FUN_004134c0(uVar2);
    }
  }
  *(longlong **)(param_1 + 0x88) = param_2;
  return;
}

