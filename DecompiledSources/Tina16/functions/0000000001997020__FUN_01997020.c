/* Ghidra address: 01997020 */
/* Ghidra symbol: FUN_01997020 */


void FUN_01997020(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0xd0) + 0x378) < *(int *)(param_1 + 0x74)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x378) = *(undefined4 *)(param_1 + 0x74);
  }
  plVar1 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0));
  (**(code **)(*plVar1 + 0x208))
            (plVar1,param_3,*(undefined4 *)(param_1 + 0x74),*(undefined8 *)(param_1 + 0x100));
  return;
}

