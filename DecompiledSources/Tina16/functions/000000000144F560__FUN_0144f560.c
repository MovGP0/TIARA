/* Ghidra address: 0144f560 */
/* Ghidra symbol: FUN_0144f560 */


undefined8 FUN_0144f560(longlong param_1,longlong param_2)

{
  undefined8 unaff_XMM6_Qa;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_019b7940(param_2);
  if (*(char *)(param_2 + 0x92) == '\0') {
    local_38 = *(undefined8 *)(param_1 + 0x110);
    local_30 = 0;
    FUN_0144b910(local_48,param_2);
    FUN_01449560(&local_38,local_48,&local_38,param_2);
    unaff_XMM6_Qa = local_38;
  }
  return unaff_XMM6_Qa;
}

