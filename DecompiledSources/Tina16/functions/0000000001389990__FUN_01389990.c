/* Ghidra address: 01389990 */
/* Ghidra symbol: FUN_01389990 */


void FUN_01389990(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_20;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8));
  if (iVar1 != -1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    *(char *)(param_1 + 0xe41) = (char)uVar2;
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x58))(*(longlong **)(param_1 + 0xe88),uVar2);
    plVar4 = *(longlong **)(param_1 + 0x7d8);
    uVar2 = (**(code **)(*plVar4 + 0x260))(plVar4);
    plVar4 = (longlong *)plVar4[0x9e];
    lVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,uVar2);
    *(longlong *)(param_1 + 0x870) = lVar3;
    *(undefined1 *)(lVar3 + 0x11) = 1;
    FUN_0082a6c0(*(undefined8 *)(param_1 + 2000),
                 CONCAT71((int7)((ulonglong)plVar4 >> 8),1) & 0xffffffff);
    FUN_01389b50(param_1,param_1);
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xb88),
                 *(char *)(*(longlong *)(param_1 + 0x870) + 0x38) == '\0');
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xb90),
                 *(char *)(*(longlong *)(param_1 + 0xb88) + 0x328) == '\0');
    if (*(char *)(*(longlong *)(param_1 + 0xb88) + 0x328) == '\0') {
      FUN_01389b30(param_1,param_1);
    }
    else {
      FUN_01389b00(param_1,param_1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x88))
              (*(longlong **)(param_1 + 0xe88),
               *(undefined1 *)(*(longlong *)(param_1 + 0x870) + 0x2a));
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x80))
              (*(longlong **)(param_1 + 0xe88),*(longlong *)(param_1 + 0x870) + 0x2a,&local_20,
               *(undefined1 *)(param_1 + 0xe90),1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xcb8),local_20);
  }
  return;
}

