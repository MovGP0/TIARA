/* Ghidra address: 0095da30 */
/* Ghidra symbol: FUN_0095da30 */


undefined1
FUN_0095da30(undefined8 *param_1,longlong *param_2,int *param_3,char param_4,undefined1 *param_5)

{
  int iVar1;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  *param_5 = 0;
  local_39 = 0;
  if (param_4 == '\0') {
    iVar1 = (**(code **)(*param_2 + 0x38))(param_2);
    if (*param_3 != iVar1) {
      (**(code **)(*param_2 + 0x28))(param_2,local_20,*param_3);
      (**(code **)*param_1)(param_1,&local_28);
      iVar1 = FUN_00416420(local_20[0],local_28);
      if (iVar1 == 0) {
        *param_3 = *param_3 + 1;
        local_39 = 1;
      }
      else {
        local_39 = 0;
      }
    }
  }
  else if (param_4 == '\x01') {
    local_39 = 1;
    iVar1 = (**(code **)(*param_2 + 0x38))(param_2);
    if (*param_3 != iVar1) {
      (**(code **)(*param_2 + 0x28))(param_2,&local_30,*param_3);
      (**(code **)*param_1)(param_1,&local_38);
      iVar1 = FUN_00416420(local_30,local_38);
      if (iVar1 == 0) {
        *param_3 = *param_3 + 1;
      }
    }
  }
  FUN_004145c0(&local_38,4);
  return local_39;
}

