/* Ghidra address: 010634e0 */
/* Ghidra symbol: FUN_010634e0 */


void FUN_010634e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 0x180) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x180));
  }
  if (*(longlong *)(param_2 + 0x178) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x178));
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x170));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x168));
  FUN_00410f20(*(undefined8 *)(param_2 + 400));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x160));
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x178) + 0x10);
  if (lVar1 != 0) {
    FUN_00410f20(lVar1);
  }
  return;
}

