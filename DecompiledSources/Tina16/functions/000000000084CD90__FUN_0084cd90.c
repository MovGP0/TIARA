/* Ghidra address: 0084cd90 */
/* Ghidra symbol: FUN_0084cd90 */


int FUN_0084cd90(longlong *param_1,longlong param_2)

{
  int iVar1;
  int local_34;
  longlong local_30 [2];
  
  local_30[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  local_34 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,local_34);
      if (local_30[0] == 0) {
        if (param_2 == 0) {
          (**(code **)(*param_1 + 0x40))(param_1,local_34,&DAT_0084ce74);
        }
        else {
          (**(code **)(*param_1 + 0x40))(param_1,local_34,param_2);
        }
        goto LAB_0084ce34;
      }
      local_34 = local_34 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_34 = -1;
LAB_0084ce34:
  FUN_00414480(local_30);
  return local_34;
}

