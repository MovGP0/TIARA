/* Ghidra address: 00c7c9e0 */
/* Ghidra symbol: FUN_00c7c9e0 */


bool FUN_00c7c9e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res8 [4];
  bool local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  cVar1 = FUN_00c7bbd0(local_res8[0]);
  if (cVar1 == '\0') {
LAB_00c7caa8:
    FUN_0041b840(param_3,local_res8[0]);
  }
  else {
    FUN_00c7bd10(local_20,local_res8[0]);
    if (local_20[0] == 0) goto LAB_00c7caa8;
    FUN_00c7bd10(&local_28,local_res8[0]);
    FUN_0041b840(param_3,local_28);
    if ((param_2 != 0) && (*param_3 != 0)) {
      (**(code **)(*(longlong *)*param_3 + 0x40))((longlong *)*param_3,&local_30);
      iVar2 = FUN_00416db0(local_30,param_2);
      if (iVar2 == 0) {
        local_39 = true;
        goto LAB_00c7cb02;
      }
    }
  }
  if ((param_2 != 0) && (*param_3 != 0)) {
    (**(code **)(*(longlong *)*param_3 + 0xd8))((longlong *)*param_3,&local_38,param_2);
    FUN_0041b840(param_3,local_38);
  }
  local_39 = *param_3 != 0;
LAB_00c7cb02:
  FUN_0041b800(&local_38);
  FUN_00414480(&local_30);
  FUN_00417840(&local_28,&LAB_00b9fca0,2);
  FUN_0041b800(local_res8);
  return local_39;
}

