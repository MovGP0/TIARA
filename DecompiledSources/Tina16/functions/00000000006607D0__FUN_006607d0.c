/* Ghidra address: 006607d0 */
/* Ghidra symbol: FUN_006607d0 */


ulonglong FUN_006607d0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if ((param_1 == *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90)) ||
     (((lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90), lVar2 = param_1,
       *(longlong *)(param_1 + 0x28) == lVar6 && (*(longlong *)(param_1 + 8) != 0)) &&
      (iVar3 = FUN_006605f0(lVar6), iVar3 == 1)))) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x28);
    (**(code **)(*plVar1 + 0xe0))(plVar1,&local_38);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x28);
    (**(code **)(*plVar1 + 0x1a8))(plVar1,&local_38);
    if (param_2 == '\x01') {
      uVar5 = (ulonglong)(uint)(local_2c - local_34);
    }
    else {
      uVar5 = (ulonglong)(uint)(local_30 - local_38);
    }
  }
  else {
    do {
      lVar6 = lVar2;
      if (lVar6 == *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90)) {
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90) + 0x20) == param_2) {
          return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x98);
        }
        uVar5 = FUN_00660cd0();
        return uVar5;
      }
      lVar2 = *(longlong *)(lVar6 + 0x28);
    } while (*(char *)(*(longlong *)(lVar6 + 0x28) + 0x20) != param_2);
    iVar3 = FUN_00660cd0(lVar6);
    iVar4 = FUN_00660670(lVar6);
    uVar5 = (ulonglong)(uint)(iVar3 - iVar4);
  }
  return uVar5;
}

