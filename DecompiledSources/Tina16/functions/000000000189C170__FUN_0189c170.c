/* Ghidra address: 0189c170 */
/* Ghidra symbol: FUN_0189c170 */


void FUN_0189c170(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_0181abf0(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005d2fd0);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x20))(param_2,L"Form5.TfrxDesignerForm",L"Units",0);
    *(undefined1 *)(param_1 + 0x7e0) = uVar2;
  }
  return;
}

