/* Ghidra address: 01a5f120 */
/* Ghidra symbol: FUN_01a5f120 */


void FUN_01a5f120(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x88);
  uVar3 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))(*(longlong **)(lVar5 + 0xd8),0);
  cVar2 = FUN_004113d0(uVar3,&DAT_01cdd500);
  if ((cVar2 != '\0') &&
     (lVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))(*(longlong **)(lVar5 + 0xd8),0),
     *(char *)(lVar4 + 0x58) == '\a')) {
    uVar3 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))(*(longlong **)(lVar5 + 0xd8),0);
    lVar5 = FUN_004113f0(uVar3,&DAT_01cdd500);
    uVar3 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x30))(*(longlong **)(lVar5 + 0x70),0);
    uVar3 = FUN_01cd62b0(uVar3,*(undefined4 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    uVar3 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))(*(longlong **)(lVar5 + 0x78),0);
    uVar3 = FUN_01cd62b0(uVar3,*(undefined4 *)(param_1 + 0x4c));
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    *(double *)(param_1 + 0x50) =
         (double)(*(int *)(param_1 + 0x48) - *(int *)(lVar5 + 0x14)) /
         (double)(*(int *)(lVar5 + 0x1c) - *(int *)(lVar5 + 0x14));
    *(double *)(param_1 + 0x58) =
         (double)(*(int *)(param_1 + 0x4c) - *(int *)(lVar5 + 0x18)) /
         (double)(*(int *)(lVar5 + 0x20) - *(int *)(lVar5 + 0x18));
  }
  else {
    (**(code **)(*plVar1 + 0xf8))
              (plVar1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),param_1 + 0x50
               ,param_1 + 0x58);
  }
  return;
}

