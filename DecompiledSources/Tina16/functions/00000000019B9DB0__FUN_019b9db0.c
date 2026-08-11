/* Ghidra address: 019b9db0 */
/* Ghidra symbol: FUN_019b9db0 */


bool FUN_019b9db0(undefined8 *param_1,longlong param_2,uint param_3)

{
  uint in_EAX;
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_d0;
  int local_c8;
  uint local_7c;
  uint local_78;
  
  puVar2 = &local_d0;
  for (lVar1 = 0x17; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  if (*(char *)(param_2 + 0x60) != '\0') {
    in_EAX = (uint)*(byte *)(param_2 + 0x61);
  }
  if (*(char *)(param_2 + 0x62) != '\0') {
    in_EAX = (uint)*(byte *)(param_2 + 99);
  }
  if (local_d0._4_4_ != 0) {
    param_3 = local_7c;
  }
  if (local_c8 != 0) {
    param_3 = local_78;
  }
  return in_EAX == param_3;
}

