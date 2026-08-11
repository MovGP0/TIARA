/* Ghidra address: 0105a690 */
/* Ghidra symbol: FUN_0105a690 */


undefined8 FUN_0105a690(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,*(undefined8 *)(param_1 + 0xa8));
  iVar1 = FUN_00416db0(local_10,L"atmega328p_32");
  if (iVar1 != 0) {
    iVar1 = FUN_00416db0(local_10,L"wifi");
    if (iVar1 != 0) goto LAB_0105a6f5;
  }
  FUN_00414b50(&local_10,L"atmega328p");
LAB_0105a6f5:
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  return param_2;
}

