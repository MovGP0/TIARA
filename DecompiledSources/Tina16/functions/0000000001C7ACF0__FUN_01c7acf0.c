/* Ghidra address: 01c7acf0 */
/* Ghidra symbol: FUN_01c7acf0 */


undefined8 FUN_01c7acf0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (-1 < *(int *)(param_1 + 0x17e4)) {
    plVar1 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0xa48),1);
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined4 *)(param_1 + 0x17e4));
  }
  return uVar2;
}

