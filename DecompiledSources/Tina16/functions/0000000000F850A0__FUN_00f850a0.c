/* Ghidra address: 00f850a0 */
/* Ghidra symbol: FUN_00f850a0 */


void FUN_00f850a0(longlong param_1)

{
  undefined8 uVar1;
  code *local_28;
  longlong local_20;
  
  FUN_015f4a70(*(undefined8 *)(param_1 + 0xd78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6b8));
  uVar1 = FUN_019a4600();
  FUN_019af4b0(uVar1);
  if (*(char *)(param_1 + 0xd5f) != '\0') {
    local_28 = FUN_00f847d0;
    local_20 = param_1;
    FUN_00f834f0(&local_28);
  }
  thunk_FUN_040b64d6(*(undefined8 *)(param_1 + 0xd10),0xffffffffffffffff);
  return;
}

