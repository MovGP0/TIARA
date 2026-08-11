/* Ghidra address: 0069ff40 */
/* Ghidra symbol: FUN_0069ff40 */


void FUN_0069ff40(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_48 [16];
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xf8))(*(longlong **)(param_1 + 0x50));
  if (cVar1 == '\0') {
    FUN_00649740(param_1);
  }
  else {
    lVar4 = FUN_007f9b70(*(undefined8 *)(param_1 + 0x50),1);
    if (lVar4 != 0) {
      local_38 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x90);
      iStack_34 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x94);
      local_30 = local_38;
      iStack_2c = iStack_34;
      if (*(longlong *)(param_1 + 0x50) != lVar4) {
        uVar5 = FUN_0065b870(lVar4);
        thunk_FUN_0411b3be(uVar5,0,&local_30,1);
      }
      iVar2 = FUN_007fd7d0(lVar4);
      iVar3 = FUN_007fd800(lVar4);
      FUN_00423b80(local_48,(*(int *)(param_1 + 0x60) + iVar2) - local_30,
                   (*(int *)(param_1 + 100) + iVar3) - iStack_2c,
                   ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60)) + *(int *)(lVar4 + 0x98))
                   - *(int *)(*(longlong *)(param_1 + 0x50) + 0x98),
                   ((*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 100)) + *(int *)(lVar4 + 0x9c)) -
                   *(int *)(*(longlong *)(param_1 + 0x50) + 0x9c));
      FUN_0064d040(lVar4,local_48);
    }
  }
  return;
}

