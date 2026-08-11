/* Ghidra address: 00411110 */
/* Ghidra symbol: FUN_00411110 */


bool FUN_00411110(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_10;
  
  local_10 = 0;
  *param_3 = 0;
  lVar2 = FUN_00411200(*param_1,param_2);
  if (lVar2 == 0) {
    cVar1 = FUN_0041df30(&DAT_01db9090,param_2);
    if (cVar1 != '\0') {
      *param_3 = (longlong)param_1;
    }
  }
  else if (*(int *)(lVar2 + 0x18) == 0) {
    FUN_00411050(&local_10,param_1,*(undefined8 *)(lVar2 + 0x20));
    FUN_0041b840(param_3,local_10);
  }
  else {
    lVar2 = (longlong)param_1 + (longlong)*(int *)(lVar2 + 0x18);
    *param_3 = lVar2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3);
    }
  }
  lVar2 = *param_3;
  FUN_0041b800(&local_10);
  return lVar2 != 0;
}

