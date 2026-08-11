/* Ghidra address: 01a52e50 */
/* Ghidra symbol: FUN_01a52e50 */


void FUN_01a52e50(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(L"Local",*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),1);
  if ((*(char *)(param_1 + 0x816) == '\0') &&
     ((((0 < iVar1 & *(byte *)(param_1 + 0x2b46)) != 0 || (0 >= iVar1)) || (param_3 != '\0')))) {
    FUN_00416ba0(&local_10,&DAT_01a52f5c,local_res10[0]);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_10);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

