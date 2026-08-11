/* Ghidra address: 0138bf10 */
/* Ghidra symbol: FUN_0138bf10 */


void FUN_0138bf10(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0xba0) + 0x260))(*(longlong **)(param_1 + 0xba0));
  if (iVar3 != -1) {
    plVar1 = *(longlong **)(param_1 + 0xba0);
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    lVar5 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar4);
    *(longlong *)(param_1 + 0xe78) = lVar5;
    *(undefined1 *)(param_1 + 0x990) = *(undefined1 *)(lVar5 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0xc70);
    FUN_0064de00(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xe78) + 8));
    FUN_0082a6c0(uVar2,0);
    if ((*(char *)(param_1 + 0x7fa) == '\b') &&
       ((iVar3 = (**(code **)(**(longlong **)(param_1 + 0xbf0) + 0x260))
                           (*(longlong **)(param_1 + 0xbf0)), iVar3 == 0 ||
        (iVar3 = (**(code **)(**(longlong **)(param_1 + 0xbf0) + 0x260))
                           (*(longlong **)(param_1 + 0xbf0)), iVar3 == 1)))) {
      FUN_00415020(*(longlong *)(*(longlong *)(param_1 + 0x9b0) + 0x110) + 8,
                   *(longlong *)(param_1 + 0xe78) + 0x11,0x28);
    }
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc50),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xe78) + 0x40));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc48),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xe78) + 0x48));
    FUN_01389820(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x18))
              (*(longlong **)(param_1 + 0x9b0),*(undefined1 *)(param_1 + 0x990));
    FUN_010f67e0(param_1,1,1);
    FUN_01389900(param_1);
    return;
  }
  return;
}

