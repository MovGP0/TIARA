/* Ghidra address: 01bfb2d0 */
/* Ghidra symbol: FUN_01bfb2d0 */


void FUN_01bfb2d0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_68;
  if (*(char *)(param_1 + 0x71) != param_2) {
    *(char *)(param_1 + 0x71) = param_2;
    local_28 = *(longlong *)(param_1 + 0x18);
    if (local_28 == 0) {
      local_38 = FUN_01bfaa70(param_1);
      iVar4 = *(int *)(*(longlong *)(local_38 + 0x10) + 0x10);
      local_1c = 0;
      if (-1 < iVar4 + -1) {
        do {
          uVar1 = FUN_01bfaa70(param_1);
          lVar2 = FUN_01bfb960(uVar1,local_1c);
          if (*(longlong *)(lVar2 + 0x80) != 0) {
            uVar1 = FUN_01bfaa70(param_1);
            lVar2 = FUN_01bfb960(uVar1,local_1c);
            (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x250))
                      (*(longlong **)(lVar2 + 0x80),param_2);
          }
          local_1c = local_1c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      *(short *)(local_28 + 0x318) = *(short *)(local_28 + 0x318) + 1;
      local_40 = auStack_68;
      local_30 = FUN_01bfaa70(param_1);
      iVar4 = *(int *)(*(longlong *)(local_30 + 0x10) + 0x10);
      local_1c = 0;
      if (-1 < iVar4 + -1) {
        do {
          uVar1 = FUN_01bfaa70(param_1);
          lVar2 = FUN_01bfb960(uVar1,local_1c);
          if (*(longlong *)(lVar2 + 0x80) != 0) {
            uVar1 = FUN_01bfaa70(param_1);
            lVar2 = FUN_01bfb960(uVar1,local_1c);
            (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x250))
                      (*(longlong **)(lVar2 + 0x80),param_2);
          }
          local_1c = local_1c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_00654410(*(undefined8 *)(param_1 + 0x18));
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = (code *)FUN_00411550(uVar1,0xffce);
      (*pcVar3)(uVar1);
    }
  }
  return;
}

