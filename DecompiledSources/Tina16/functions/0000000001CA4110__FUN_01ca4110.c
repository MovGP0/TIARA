/* Ghidra address: 01ca4110 */
/* Ghidra symbol: FUN_01ca4110 */


void FUN_01ca4110(longlong param_1)

{
  if (*(int *)(param_1 + 0x17e0) == 1) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xd08),0);
    FUN_01c87e40(param_1,param_1);
  }
  else if (*(int *)(param_1 + 0x17e0) == 4) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xd08),1);
    FUN_01c87e40(param_1,param_1);
    *(undefined4 *)(param_1 + 0x17e0) = 0;
    FUN_00742eb0(*(undefined8 *)(param_1 + 0x1690),0);
  }
  if (0 < *(int *)(param_1 + 0x17e0)) {
    *(int *)(param_1 + 0x17e0) = *(int *)(param_1 + 0x17e0) + 1;
  }
  return;
}

