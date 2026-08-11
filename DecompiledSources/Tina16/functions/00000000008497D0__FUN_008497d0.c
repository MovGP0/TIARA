/* Ghidra address: 008497d0 */
/* Ghidra symbol: FUN_008497d0 */


void FUN_008497d0(longlong param_1)

{
  FUN_006516f0(param_1);
  if ((*(int *)(param_1 + 0x564) != -1) || (*(int *)(param_1 + 0x568) != -1)) {
    FUN_00844240(param_1,param_1 + 0x564);
    *(undefined8 *)(param_1 + 0x564) = DAT_01e19060;
    *(undefined8 *)(param_1 + 0x56c) = DAT_01e19068;
  }
  return;
}

