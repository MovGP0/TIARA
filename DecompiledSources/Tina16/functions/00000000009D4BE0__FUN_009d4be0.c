/* Ghidra address: 009d4be0 */
/* Ghidra symbol: FUN_009d4be0 */


void FUN_009d4be0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_0041b800(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

