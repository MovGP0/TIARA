/* Ghidra address: 0144dde0 */
/* Ghidra symbol: FUN_0144dde0 */


double FUN_0144dde0(longlong param_1,longlong param_2)

{
  double in_XMM0_Qa;
  undefined1 local_38 [16];
  double local_28 [2];
  
  if (*(char *)(param_2 + 0x92) == '\0') {
    FUN_019b7940(param_2);
    local_28[0] = (*(double *)(param_1 + 0x130) * 4.0) / *(double *)(param_1 + 0x138);
    local_28[1] = 0.0;
    FUN_0144b910(local_38,param_2);
    FUN_01449560(local_28,local_38,local_28,param_2);
    in_XMM0_Qa = local_28[0];
  }
  return in_XMM0_Qa;
}

