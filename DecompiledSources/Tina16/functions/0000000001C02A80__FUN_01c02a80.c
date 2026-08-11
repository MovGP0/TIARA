/* Ghidra address: 01c02a80 */
/* Ghidra symbol: FUN_01c02a80 */


void FUN_01c02a80(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  if (param_1[0x94] != 0) {
    *(short *)(param_1 + 99) = (short)param_1[99] + 1;
    local_20 = param_1[0x93];
    local_28 = param_1;
    uVar1 = FUN_004b1870(local_20);
    FUN_01bf87a0(param_1[0x94],uVar1);
    (**(code **)(*param_1 + 0x308))(param_1,local_20);
    FUN_00654410(param_1);
  }
  return;
}

