/* Ghidra address: 00b94f50 */
/* Ghidra symbol: FUN_00b94f50 */


void FUN_00b94f50(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_30 [2];
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((param_2 < 0) || ((int)param_1[2] < param_2)) {
    (**(code **)(*param_1 + 8))(param_1,0xffffffff,0);
  }
  else {
    if ((int)param_1[2] == *(int *)((longlong)param_1 + 0x14)) {
      (**(code **)(*param_1 + 0x28))(param_1,(int)param_1[2] + (int)param_1[3]);
      if ((int)param_1[2] == *(int *)((longlong)param_1 + 0x14)) {
        (**(code **)(*param_1 + 8))(param_1,0xfffe,*(undefined2 *)((longlong)param_1 + 0x14));
        goto LAB_00b950c0;
      }
    }
    if (param_2 < (int)param_1[2]) {
      FUN_00409a70(param_1[1] + (longlong)param_2 * 8,param_1[1] + (longlong)(param_2 + 1) * 8,
                   (longlong)(((int)param_1[2] - param_2) * 8));
    }
    *(undefined8 *)(param_1[1] + (longlong)param_2 * 8) = param_3;
    if ((int)param_1[2] < 0x7ffffffd) {
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    }
    else {
      FUN_0041ddd0(local_20,PTR_DAT_02002ff0);
      local_30[0] = (int)param_1[2] + 1;
      local_28 = 0;
      uVar1 = FUN_0044d530(&PTR_FUN_004347c0,1,local_20[0],local_30,0);
      FUN_004134c0(uVar1);
    }
  }
LAB_00b950c0:
  FUN_00414480(local_20);
  return;
}

