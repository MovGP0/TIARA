/* Ghidra address: 00d57300 */
/* Ghidra symbol: FUN_00d57300 */


undefined8 * FUN_00d57300(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_00414480(param_1);
  FUN_00414b50(local_30,*param_2);
  cVar3 = '\0';
  if (local_30[0] != 0) {
    cVar3 = (char)*(undefined4 *)(local_30[0] + -4);
  }
  bVar2 = 1;
  for (; cVar3 != '\0'; cVar3 = cVar3 + -1) {
    FUN_00416e20(param_2,1,1);
    FUN_00416780(local_40,*(undefined2 *)(local_30[0] + -2 + (ulonglong)bVar2 * 2));
    iVar1 = FUN_004170c0(local_40[0],param_3,1);
    if (0 < iVar1) break;
    FUN_00416780(&local_48,*(undefined2 *)(local_30[0] + -2 + (ulonglong)bVar2 * 2));
    FUN_00416ad0(param_1,local_48);
    bVar2 = bVar2 + 1;
  }
  FUN_0043ea00(&local_50,*param_1);
  FUN_00414ad0(param_1,local_50);
  FUN_0043ea00(&local_58,*param_2);
  FUN_00414ad0(param_2,local_58);
  FUN_00414560(&local_58,4);
  FUN_00414480(local_30);
  return param_1;
}

