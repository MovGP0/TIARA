/* Ghidra address: 012b42b0 */
/* Ghidra symbol: FUN_012b42b0 */


void FUN_012b42b0(undefined2 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_01d33100(&PTR_FUN_01cb2378,1);
  FUN_01b20020(local_20,*(undefined8 *)(param_1 + 0x94),&LAB_012b4364);
  FUN_01cbfc40(lVar1,local_20[0]);
  *(undefined2 *)(lVar1 + 0x10) = *param_1;
  (**(code **)(**(longlong **)(param_2 + 0x10) + 0x50))(*(longlong **)(param_2 + 0x10),lVar1);
  FUN_00414480(local_20);
  return;
}

