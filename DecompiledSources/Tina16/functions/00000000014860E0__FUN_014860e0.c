/* Ghidra address: 014860e0 */
/* Ghidra symbol: FUN_014860e0 */


undefined8 FUN_014860e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  lVar2 = FUN_00f34990(param_1,param_3);
  cVar1 = FUN_004113d0(lVar2,&LAB_00f249d0);
  if (cVar1 != '\0') {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    FUN_00414ad0(param_2,local_res20);
  }
  else {
    FUN_01488670(lVar2,param_2);
  }
  FUN_00414480(&local_res20);
  return param_2;
}

