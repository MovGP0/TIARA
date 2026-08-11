/* Ghidra address: 0186bff0 */
/* Ghidra symbol: FUN_0186bff0 */


void FUN_0186bff0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 *)(param_2 + 0x18) = 1;
  FUN_00803250(param_1,param_2);
  if (*(char *)(param_1 + 0x6d8) != '\0') {
    iVar1 = FUN_007fd7d0(param_1);
    if (iVar1 + *(int *)(param_1 + 0x98) + -4 <= (int)*(short *)(param_2 + 0x10)) {
      iVar1 = FUN_007fd7d0(param_1);
      if ((int)*(short *)(param_2 + 0x10) <= iVar1 + *(int *)(param_1 + 0x98)) {
        *(undefined8 *)(param_2 + 0x18) = 0xb;
      }
    }
    iVar1 = FUN_007fd800(param_1);
    if (iVar1 + *(int *)(param_1 + 0x9c) + -4 <= (int)*(short *)(param_2 + 0x12)) {
      iVar1 = FUN_007fd800(param_1);
      if ((int)*(short *)(param_2 + 0x12) <= iVar1 + *(int *)(param_1 + 0x9c)) {
        if (*(longlong *)(param_2 + 0x18) == 0xb) {
          *(undefined8 *)(param_2 + 0x18) = 0x11;
        }
        else {
          *(undefined8 *)(param_2 + 0x18) = 0xf;
        }
      }
    }
  }
  return;
}

