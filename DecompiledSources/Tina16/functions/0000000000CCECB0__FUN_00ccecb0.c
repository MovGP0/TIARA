/* Ghidra address: 00ccecb0 */
/* Ghidra symbol: FUN_00ccecb0 */


void FUN_00ccecb0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_00410f20(uVar1);
  if (*(char *)(param_1 + 0x1b1) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    FUN_00410f20(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00cb96c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

