/* Ghidra address: 00a543d0 */
/* Ghidra symbol: FUN_00a543d0 */


undefined1 FUN_00a543d0(longlong param_1)

{
  char cVar1;
  undefined8 local_20 [2];
  undefined1 local_9;
  
  local_20[0] = 0;
  cVar1 = FUN_0046c390(param_1 + 0x540);
  if (cVar1 != '\0') {
    FUN_00467e90(local_20,param_1 + 0x540);
    cVar1 = FUN_00a2be70(local_20[0],&local_9);
    if (cVar1 != '\0') goto LAB_00a54423;
  }
  local_9 = 0;
LAB_00a54423:
  FUN_00414480(local_20);
  return local_9;
}

