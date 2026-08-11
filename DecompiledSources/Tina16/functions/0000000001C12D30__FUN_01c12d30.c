/* Ghidra address: 01c12d30 */
/* Ghidra symbol: FUN_01c12d30 */


void FUN_01c12d30(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_20;
  
  local_20 = *param_2;
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    if (*(char *)((longlong)param_1 + 0x366) != '\x02') {
      cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
      if (cVar1 == '\0') goto LAB_01c12d73;
    }
    local_20 = CONCAT44(local_20._4_4_ + 1,(int)local_20 + 1);
  }
LAB_01c12d73:
  FUN_01c04950(param_1,&local_20);
  return;
}

