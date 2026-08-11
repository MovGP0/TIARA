/* Ghidra address: 01795eb0 */
/* Ghidra symbol: FUN_01795eb0 */


void FUN_01795eb0(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_0179d460(param_1);
  if (cVar1 == '\0') goto LAB_01795fa4;
  FUN_00414b50(&local_10,*(undefined8 *)(param_1 + 0xc98));
  if (param_2 == '\0') {
    iVar2 = FUN_004170c0(L"NONAME.DDB",local_10,1);
    if (iVar2 != 0) goto LAB_01795f10;
  }
  else {
LAB_01795f10:
    FUN_0177d560(*(undefined8 *)(param_1 + 0xd48),*(undefined8 *)(param_1 + 0xcd8));
    FUN_00724380(*(undefined8 *)(param_1 + 0xd48),local_10);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xd48) + 0xa8))(*(longlong **)(param_1 + 0xd48));
    if (cVar1 == '\0') goto LAB_01795fa4;
    FUN_00724270(*(undefined8 *)(param_1 + 0xd48),&local_10);
  }
  FUN_017963e0(param_1,local_10);
  FUN_01795670(param_1,0);
  FUN_00414ad0(param_1 + 0xc98,local_10);
  FUN_017989e0(param_1);
LAB_01795fa4:
  FUN_00414480(&local_10);
  return;
}

