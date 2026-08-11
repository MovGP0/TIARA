/* Ghidra address: 0139f970 */
/* Ghidra symbol: FUN_0139f970 */


undefined8
FUN_0139f970(undefined8 param_1,undefined8 param_2,longlong *param_3,ushort *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414480(&local_10);
  while( true ) {
    iVar2 = 0;
    if (*param_3 != 0) {
      iVar2 = *(int *)(*param_3 + -4);
    }
    if (((iVar2 < (int)(uint)*param_4) ||
        (*(short *)(*param_3 + -2 + (ulonglong)*param_4 * 2) == 0x29)) ||
       (*(short *)(*param_3 + -2 + (ulonglong)*param_4 * 2) == 0x2c)) break;
    FUN_00416780(local_20,*(undefined2 *)(*param_3 + -2 + (ulonglong)*param_4 * 2));
    FUN_00416ad0(&local_10,local_20[0]);
    uVar1 = 0;
    if (*param_3 != 0) {
      uVar1 = *(uint *)(*param_3 + -4);
    }
    if (*param_4 == uVar1) {
      *param_5 = 2;
    }
    *param_4 = *param_4 + 1;
  }
  *param_4 = *param_4 + 1;
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return param_2;
}

