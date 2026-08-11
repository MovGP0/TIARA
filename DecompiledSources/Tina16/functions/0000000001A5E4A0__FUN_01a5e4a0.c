/* Ghidra address: 01a5e4a0 */
/* Ghidra symbol: FUN_01a5e4a0 */


undefined1 FUN_01a5e4a0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 local_29;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,param_4);
  if (cVar1 == '\0') {
    local_29 = 0;
  }
  else {
    local_29 = 1;
    if ((char)param_1[2] == '\0') {
      cVar1 = FUN_01a5e850(param_1,param_2,0,param_3,param_4);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0x50))(param_1,1);
        (**(code **)(*param_1 + 0x98))(param_1,param_2);
      }
    }
  }
  FUN_00414480(local_20);
  return local_29;
}

