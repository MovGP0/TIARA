/* Ghidra address: 01c87e40 */
/* Ghidra symbol: FUN_01c87e40 */


void FUN_01c87e40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  code *local_48;
  longlong local_40;
  undefined1 local_29 [9];
  
  *(undefined8 *)(param_1 + 0x1838) = 0;
  if (*(char *)(*(longlong *)(param_1 + 0xd08) + 0x328) == '\0') {
    if (*(char *)(param_1 + 0x182e) != '\0') {
      cVar2 = FUN_01c88130(param_1,1);
      if (cVar2 == '\0') {
        FUN_0082a6c0(*(undefined8 *)(param_1 + 0xd08),1);
        return;
      }
      FUN_01c87cc0(param_1);
      FUN_01359540(*(undefined8 *)(param_1 + 0x27a8));
      FUN_0135b2b0(*(undefined8 *)PTR_DAT_02001f10,0);
    }
    *PTR_DAT_02002b78 = 0;
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x11e0),1);
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x11e8),0);
    if ((*(longlong *)(param_1 + 7000) != 0) &&
       (cVar2 = FUN_004113d0(*(longlong *)(param_1 + 7000),&PTR_FUN_01362bd8), cVar2 != '\0')) {
      FUN_01c6cf20(param_1);
    }
  }
  else {
    if (*PTR_DAT_020052b8 == '\0') {
      lVar1 = *(longlong *)(param_1 + 0x27a8);
      iVar5 = *(int *)(lVar1 + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar3 = FUN_00b94e60(lVar1,iVar4);
          FUN_01c87db0(auStack_68,uVar3);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    *PTR_DAT_02002b78 = 1;
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x11e0),0);
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x11e8),1);
    if (*(char *)(param_1 + 0x182e) == '\0') {
      cVar2 = FUN_010e33a0();
      if ((cVar2 == '\0') || (*(char *)(param_1 + 0x27c1) != '\0')) {
        local_48 = FUN_01c87e40;
        local_40 = param_1;
        FUN_00f836b0(&local_48);
      }
      else {
        FUN_01c88130(param_1,0);
      }
    }
  }
  local_29[0] = 0;
  FUN_01c7ec30(param_1,0,local_29);
  return;
}

