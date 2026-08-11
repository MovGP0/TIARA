/* Ghidra address: 0139f810 */
/* Ghidra symbol: FUN_0139f810 */


undefined8
FUN_0139f810(undefined8 param_1,undefined8 param_2,longlong *param_3,ushort *param_4,
            undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414480(&local_10);
  iVar2 = 0;
  if (*param_3 != 0) {
    iVar2 = *(int *)(*param_3 + -4);
  }
  if ((iVar2 == 0) || (*(short *)*param_3 != 0x5b)) {
    *param_5 = 1;
  }
  else {
    *param_4 = 2;
    while( true ) {
      if (*(short *)(*param_3 + -2 + (ulonglong)*param_4 * 2) == 0x28) {
        bVar1 = false;
      }
      else {
        iVar2 = 0;
        if (*param_3 != 0) {
          iVar2 = *(int *)(*param_3 + -4);
        }
        bVar1 = (int)(uint)*param_4 <= iVar2;
      }
      if (!bVar1) break;
      FUN_00416780(local_20);
      FUN_00416ad0(&local_10,local_20[0]);
      uVar3 = 0;
      if (*param_3 != 0) {
        uVar3 = *(uint *)(*param_3 + -4);
      }
      if (*param_4 == uVar3) {
        *param_5 = 1;
      }
      *param_4 = *param_4 + 1;
    }
    *param_4 = *param_4 + 1;
  }
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return param_2;
}

