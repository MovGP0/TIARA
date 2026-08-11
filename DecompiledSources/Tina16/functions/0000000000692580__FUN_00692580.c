/* Ghidra address: 00692580 */
/* Ghidra symbol: FUN_00692580 */


void FUN_00692580(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
    thunk_FUN_03c9d277(*(longlong *)(param_1 + 0x68),0xfffffffc,*(undefined8 *)(param_1 + 0x80));
    FUN_004d62f0(*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_006926b0(param_1);
  }
  FUN_00786a00(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

