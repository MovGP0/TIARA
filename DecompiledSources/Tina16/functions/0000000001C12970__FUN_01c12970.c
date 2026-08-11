/* Ghidra address: 01c12970 */
/* Ghidra symbol: FUN_01c12970 */


void FUN_01c12970(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    if (*(char *)((longlong)param_1 + 0x366) != '\x02') {
      cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
      if (cVar1 == '\0') goto LAB_01c129d7;
    }
    FUN_00423b50(param_2,1,1);
  }
LAB_01c129d7:
  FUN_01beb2c0(param_1,param_2,param_3,local_res20);
  FUN_00414480(&local_res20);
  return;
}

