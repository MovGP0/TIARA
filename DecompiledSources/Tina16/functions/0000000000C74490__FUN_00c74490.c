/* Ghidra address: 00c74490 */
/* Ghidra symbol: FUN_00c74490 */


void FUN_00c74490(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 local_38 [24];
  undefined4 local_20;
  int iStack_1c;
  
  if (param_1[0xa8] != 0) {
    (**(code **)(*param_1 + 0xe0))(param_1,local_38);
    uVar1 = FUN_0064d1f0(param_1,local_38);
    iStack_1c = (int)(uVar1 >> 0x20);
    iStack_1c = iStack_1c + *(int *)((longlong)param_1 + 0x9c);
    local_20 = (undefined4)uVar1;
    (**(code **)(*(longlong *)param_1[0xa8] + 0xa8))
              ((longlong *)param_1[0xa8],uVar1 & 0xffffffff,iStack_1c);
  }
  return;
}

