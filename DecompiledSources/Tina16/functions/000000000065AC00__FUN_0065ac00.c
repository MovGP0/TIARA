/* Ghidra address: 0065ac00 */
/* Ghidra symbol: FUN_0065ac00 */


void FUN_0065ac00(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  int local_1c;
  
  local_30 = auStack_58;
  *(short *)(param_1 + 0x318) = *(short *)(param_1 + 0x318) + 1;
  local_28 = param_1;
  iVar1 = FUN_00654c00();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar2 = (longlong *)FUN_00654bc0(param_1,local_1c);
      (**(code **)(*plVar2 + 0x170))(plVar2,param_2);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00654410(param_1);
  return;
}

