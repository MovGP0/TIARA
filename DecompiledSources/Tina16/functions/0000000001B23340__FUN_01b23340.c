/* Ghidra address: 01b23340 */
/* Ghidra symbol: FUN_01b23340 */


void FUN_01b23340(undefined8 param_1,longlong *param_2,char param_3)

{
  int iVar1;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c [3];
  
  local_30 = 0;
  local_28 = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x90))(param_2);
  }
  FUN_004b84c0(param_1,local_1c,4);
  iVar1 = local_1c[0];
  if (-1 < local_1c[0] + -1) {
    do {
      FUN_01b20f00(&local_30,param_1);
      FUN_004168b0(&local_28,local_30);
      if (param_3 != '\0') {
        (**(code **)(*param_2 + 0x78))(param_2,local_28);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414520(&local_30);
  FUN_00414480(&local_28);
  return;
}

