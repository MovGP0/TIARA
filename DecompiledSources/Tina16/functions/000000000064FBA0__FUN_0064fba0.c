/* Ghidra address: 0064fba0 */
/* Ghidra symbol: FUN_0064fba0 */


void FUN_0064fba0(longlong *param_1,int *param_2,int *param_3)

{
  int local_38;
  int local_34;
  int local_30;
  int local_2c [3];
  
  local_2c[0] = *(int *)(param_1[0x1a] + 0x1c);
  if (local_2c[0] == 0) {
    local_2c[0] = 0;
  }
  local_30 = *(int *)(param_1[0x1a] + 0x18);
  if (local_30 == 0) {
    local_30 = 0;
  }
  local_34 = *(int *)(param_1[0x1a] + 0x14);
  if (local_34 == 0) {
    local_34 = 0;
  }
  local_38 = *(int *)(param_1[0x1a] + 0x10);
  if (local_38 == 0) {
    local_38 = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,local_2c,&local_30,&local_34,&local_38);
  if ((local_34 < 1) || (*param_2 <= local_34)) {
    if ((0 < local_2c[0]) && (*param_2 < local_2c[0])) {
      *param_2 = local_2c[0];
    }
  }
  else {
    *param_2 = local_34;
  }
  if ((local_38 < 1) || (*param_3 <= local_38)) {
    if ((0 < local_30) && (*param_3 < local_30)) {
      *param_3 = local_30;
    }
  }
  else {
    *param_3 = local_38;
  }
  return;
}

