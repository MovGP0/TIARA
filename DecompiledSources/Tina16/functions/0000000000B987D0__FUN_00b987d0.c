/* Ghidra address: 00b987d0 */
/* Ghidra symbol: FUN_00b987d0 */


ulonglong FUN_00b987d0(longlong param_1,int param_2,short param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((param_3 == 1) && (param_2 == 0)) {
    uVar2 = (ulonglong)
            (uint)((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28))
    ;
  }
  else {
    if (param_3 == 1) {
      uVar2 = (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x30)) +
              *(longlong *)(param_1 + 0x28) + (longlong)param_2;
    }
    else if (param_3 == 2) {
      uVar2 = *(longlong *)(param_1 + 0x18) + (longlong)param_2;
    }
    else {
      uVar2 = (ulonglong)param_2;
    }
    lVar1 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x30);
    if ((longlong)uVar2 < lVar1) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                        (*(longlong **)(param_1 + 8),0,uVar2 & 0xffffffff);
      *(longlong *)(param_1 + 0x10) = (longlong)(int)uVar2;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(param_1 + 0x28) = uVar2 - lVar1;
      uVar2 = (ulonglong)
              (uint)((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x30)) +
                    *(int *)(param_1 + 0x28));
    }
  }
  return uVar2;
}

