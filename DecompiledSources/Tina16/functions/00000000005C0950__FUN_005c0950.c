/* Ghidra address: 005c0950 */
/* Ghidra symbol: FUN_005c0950 */


longlong *
FUN_005c0950(longlong *param_1,ulonglong *param_2,ulonglong param_3,undefined1 param_4,
            undefined8 param_5,int param_6)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414480(param_1);
  for (iVar1 = 0;
      (((*param_2 <= param_3 && (0x2f < *(ushort *)*param_2)) && (*(ushort *)*param_2 < 0x3a)) &&
      (iVar1 < param_6)); iVar1 = iVar1 + 1) {
    FUN_00416780(local_20,*(undefined2 *)*param_2);
    FUN_00416ad0(param_1,local_20[0]);
    *param_2 = *param_2 + 2;
  }
  if (*param_1 == 0) {
    FUN_005c0900(param_4,param_5);
  }
  FUN_00414480(local_20);
  return param_1;
}

