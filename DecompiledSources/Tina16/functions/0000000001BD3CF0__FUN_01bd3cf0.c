/* Ghidra address: 01bd3cf0 */
/* Ghidra symbol: FUN_01bd3cf0 */


void FUN_01bd3cf0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = *param_2;
  local_20 = local_28;
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    if (*(char *)((longlong)param_1 + 0x366) != '\x02') {
      cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
      if (cVar1 == '\0') goto LAB_01bd3d3b;
    }
    local_28 = CONCAT44(local_28._4_4_ + 1,(int)local_28 + 1);
  }
LAB_01bd3d3b:
  FUN_01c04a20(param_1,&local_28);
  return;
}

