/* Ghidra address: 00a54270 */
/* Ghidra symbol: FUN_00a54270 */


undefined1 FUN_00a54270(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_19;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_0046c390(param_1 + 0x588);
  if (cVar1 == '\0') {
    local_19 = 0;
  }
  else {
    FUN_00467e90(&local_10,param_1 + 0x588);
    local_19 = FUN_00a2bf10(local_10,param_2);
  }
  FUN_00414480(&local_10);
  return local_19;
}

