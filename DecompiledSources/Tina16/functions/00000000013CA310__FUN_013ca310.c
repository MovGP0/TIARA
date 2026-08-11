/* Ghidra address: 013ca310 */
/* Ghidra symbol: FUN_013ca310 */


void FUN_013ca310(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      cVar2 = FUN_0068bca0(*(undefined8 *)(param_1 + 0x778),iVar5);
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,local_30,iVar5);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0);
        (**(code **)(*plVar1 + 0x80))(plVar1,local_30[0],uVar4);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  while (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0),
        iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1), iVar3 <= iVar5 + -1) {
    cVar2 = FUN_0068bca0(*(undefined8 *)(param_1 + 0x778),iVar3);
    if (cVar2 == '\0') {
      iVar3 = iVar3 + 1;
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
      (**(code **)(*plVar1 + 0x98))(plVar1,iVar3);
    }
  }
  FUN_013cab80(param_1,0);
  FUN_00414480(local_30);
  return;
}

