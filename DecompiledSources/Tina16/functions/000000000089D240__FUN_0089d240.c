/* Ghidra address: 0089d240 */
/* Ghidra symbol: FUN_0089d240 */


undefined1 FUN_0089d240(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_30 [2];
  int local_1c;
  undefined8 local_18;
  undefined1 local_9;
  
  local_30[0] = 0;
  local_18 = 0;
  local_9 = 0;
  cVar1 = FUN_0089c3d0(param_1,param_2);
  if (cVar1 != '\0') {
    FUN_00414b50(&local_18,param_2);
    FUN_00874ee0(local_30,&local_18,&LAB_0089d324,1,1);
    local_1c = FUN_00877c50(local_30[0]);
    if ((local_1c < 0xe0) || (0xef < local_1c)) {
      local_9 = 0;
    }
    else {
      local_9 = 1;
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_18);
  return local_9;
}

