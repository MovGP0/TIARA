/* Ghidra address: 009daac0 */
/* Ghidra symbol: FUN_009daac0 */


void FUN_009daac0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (((*(char *)(param_1 + 0x70) != '\0') && (*(longlong *)(param_1 + 0x68) != 0)) &&
     (*(longlong *)(param_1 + 0x18) != 0)) {
    FUN_009d4100(*(undefined8 *)(param_1 + 0x68),param_1 + 0x18);
  }
  FUN_009d4be0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

