/* Ghidra address: 00a54300 */
/* Ghidra symbol: FUN_00a54300 */


undefined1 FUN_00a54300(longlong param_1)

{
  char cVar1;
  undefined8 local_20 [2];
  undefined1 local_9;
  
  local_20[0] = 0;
  cVar1 = FUN_0046c390(param_1 + 0x678);
  if (cVar1 != '\0') {
    FUN_00467e90(local_20,param_1 + 0x678);
    cVar1 = FUN_00a2bec0(local_20[0],&local_9);
    if (cVar1 != '\0') goto LAB_00a54353;
  }
  local_9 = 0;
LAB_00a54353:
  FUN_00414480(local_20);
  return local_9;
}

