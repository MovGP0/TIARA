/* Ghidra address: 004b5850 */
/* Ghidra symbol: FUN_004b5850 */


undefined4 FUN_004b5850(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_2c [3];
  
  if ((char)param_1[9] == '\0') {
    local_2c[0] = (undefined4)param_1[8];
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,local_2c);
    if (cVar1 != '\0') {
      if (*(char *)((longlong)param_1 + 0x49) == '\0') {
        return local_2c[0];
      }
      if (*(char *)((longlong)param_1 + 0x49) == '\x02') {
        FUN_004b3510(param_1,PTR_PTR_02002498,0);
      }
    }
  }
  (**(code **)(*param_1 + 0x138))(param_1,local_2c[0],param_2,param_3);
  return local_2c[0];
}

