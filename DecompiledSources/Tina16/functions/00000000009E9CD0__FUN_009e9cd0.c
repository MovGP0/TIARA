/* Ghidra address: 009e9cd0 */
/* Ghidra symbol: FUN_009e9cd0 */


undefined4 FUN_009e9cd0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_2c [3];
  
  if ((char)param_1[8] == '\0') {
    local_2c[0] = (undefined4)param_1[7];
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,local_2c);
    if (cVar1 != '\0') {
      if (*(char *)((longlong)param_1 + 0x41) == '\0') {
        return local_2c[0];
      }
      if (*(char *)((longlong)param_1 + 0x41) == '\x02') {
        FUN_009e7910(param_1,PTR_PTR_02002498,0);
      }
    }
  }
  (**(code **)(*param_1 + 0x138))(param_1,local_2c[0],param_2,param_3);
  return local_2c[0];
}

