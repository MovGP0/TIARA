/* Ghidra address: 00948c00 */
/* Ghidra symbol: FUN_00948c00 */


undefined8 FUN_00948c00(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 == (longlong *)0x0) {
    uVar3 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0(uVar3);
  }
  cVar1 = (**(code **)(*param_1 + 0x120))(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_004113f0(param_1,&PTR_FUN_00926d78);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    uVar3 = FUN_009902a0(&PTR_FUN_00926d78,1,uVar2);
    FUN_00410f20(param_1);
  }
  return uVar3;
}

