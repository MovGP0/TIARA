/* Ghidra address: 00bd0210 */
/* Ghidra symbol: FUN_00bd0210 */


void FUN_00bd0210(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  int local_20;
  int local_1c;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_20 = (**(code **)(*param_3 + 0x28))(param_3);
  if (local_20 != 0) {
    FUN_004b3260(param_1);
    FUN_00bd0070(param_1,param_2,local_20);
    local_1c = 0;
    iVar1 = local_20;
    if (-1 < local_20 + -1) {
      do {
        (**(code **)(*param_3 + 0x18))(param_3,&local_38,local_1c);
        (**(code **)(*param_1 + 0x40))(param_1,param_2 + local_1c,local_38);
        local_1c = local_1c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_004b3390(param_1);
  }
  FUN_00414480(&local_38);
  return;
}

