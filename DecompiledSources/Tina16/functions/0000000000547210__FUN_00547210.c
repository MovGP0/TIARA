/* Ghidra address: 00547210 */
/* Ghidra symbol: FUN_00547210 */


longlong * FUN_00547210(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  local_30 = 0;
  (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],param_2,param_1);
  if (*param_2 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1,&local_30);
    local_28 = local_30;
    local_20 = 0x11;
    uVar1 = FUN_0044d8d0(&PTR_FUN_005278f0,1,PTR_PTR_02003840,&local_28,0);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_30);
  return param_2;
}

