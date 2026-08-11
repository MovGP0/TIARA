/* Ghidra address: 00b0b450 */
/* Ghidra symbol: FUN_00b0b450 */


void FUN_00b0b450(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res20;
  undefined8 local_30;
  int local_28;
  int local_24;
  
  local_30 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  plVar2 = (longlong *)FUN_0084e390(param_1,param_2,param_3);
  (**(code **)(*plVar2 + 0x20))(plVar2,local_res20);
  FUN_00b0b2a0(param_1,param_2,param_3,local_res20);
  FUN_00849e90(param_1,&local_28,param_2,param_3);
  lVar1 = *(longlong *)(param_1 + 0x618);
  if (((*(char *)(lVar1 + 0xa9) != '\0') && (*(int *)(lVar1 + 0x90) == local_28)) &&
     (*(int *)(lVar1 + 0x94) == local_24)) {
    plVar2 = (longlong *)FUN_0084e390(param_1,param_2,param_3);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
    FUN_00b07aa0(lVar1,local_30);
  }
  FUN_00414480(&local_30);
  FUN_00414480(&local_res20);
  return;
}

