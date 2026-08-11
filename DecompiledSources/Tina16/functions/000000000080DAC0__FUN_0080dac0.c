/* Ghidra address: 0080dac0 */
/* Ghidra symbol: FUN_0080dac0 */


undefined1 FUN_0080dac0(longlong param_1,int param_2)

{
  char cVar1;
  undefined1 local_31;
  undefined8 local_30 [2];
  char local_19 [9];
  
  local_30[0] = 0;
  local_31 = FUN_0080d910(param_1,1,(longlong)param_2,local_19);
  if (local_19[0] != '\0') {
    cVar1 = FUN_0080e4b0(param_1);
    if (cVar1 == '\0') {
      local_31 = 0;
    }
    else {
      local_31 = 1;
      FUN_0080f350(param_1,local_30);
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x20))
                (*(longlong **)(param_1 + 0xb8),param_2,local_30[0]);
    }
  }
  FUN_00414480(local_30);
  return local_31;
}

