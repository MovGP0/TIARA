/* Ghidra address: 0094e3b0 */
/* Ghidra symbol: FUN_0094e3b0 */


ulonglong FUN_0094e3b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x170))(param_1);
  if (lVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
    uVar3 = (**(code **)(*plVar2 + 0x140))(plVar2);
    if (-1 < (int)uVar3) {
      uVar3 = (ulonglong)((int)uVar3 + 1);
    }
  }
  return uVar3;
}

