/* Ghidra address: 00446c90 */
/* Ghidra symbol: FUN_00446c90 */


void FUN_00446c90(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  int local_38;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  if ((*(char *)(param_1 + 0x76) != '\0') && (*(int *)(param_1 + 0x6c) == 0)) {
    FUN_00446330(param_1,0x2d);
  }
  if (*(char *)(param_1 + 0x9b) == '\0') {
    local_1c = (int)*(short *)(param_1 + 0x74);
    local_28 = local_1c - *(int *)(param_1 + 0x9c);
    if (local_28 < 0) {
      local_1c = *(int *)(param_1 + 0x9c);
    }
  }
  else {
    local_1c = *(int *)(param_1 + 0x9c);
    local_28 = 0;
  }
  local_24 = FUN_00446990(param_1);
  local_24 = local_24 + -1;
  local_20 = 0;
  iVar6 = 0;
LAB_00446ee6:
  do {
    while( true ) {
      iVar4 = 0;
      lVar3 = *(longlong *)(param_1 + 0xa8);
      if (lVar3 != 0) {
        iVar4 = *(int *)(lVar3 + -4);
      }
      if (iVar4 <= iVar6) {
        if (0 < *(int *)(param_1 + 0xa4)) {
          FUN_00446330(param_1,0);
          *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + -1;
        }
        return;
      }
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar6 * 2);
      if (uVar1 < 0x2f) break;
      if (uVar1 == 0x30) {
LAB_00446da1:
        FUN_00446ab0(auStack_58);
        iVar6 = iVar6 + 1;
      }
      else if ((uVar1 == 0x45) || (uVar1 == 0x65)) {
        iVar5 = iVar6 + 1;
        iVar4 = 0;
        if (lVar3 != 0) {
          iVar4 = *(int *)(lVar3 + -4);
        }
        if (iVar5 < iVar4) {
          sVar2 = *(short *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 2);
          if ((sVar2 == 0x2b) || (sVar2 == 0x2d)) {
            iVar4 = 0;
            iVar6 = iVar6 + 2;
            while( true ) {
              iVar5 = 0;
              if (*(longlong *)(param_1 + 0xa8) != 0) {
                iVar5 = *(int *)(*(longlong *)(param_1 + 0xa8) + -4);
              }
              if ((iVar5 <= iVar6) ||
                 (*(short *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar6 * 2) != 0x30)) break;
              iVar6 = iVar6 + 1;
              if (iVar4 < 4) {
                iVar4 = iVar4 + 1;
              }
            }
            local_38 = (int)*(short *)(param_1 + 0x74) - *(int *)(param_1 + 0x9c);
            FUN_00446b30(auStack_58,uVar1,sVar2,iVar4);
          }
          else {
            FUN_00446330(param_1,uVar1);
            iVar6 = iVar5;
          }
        }
        else {
          FUN_00446330(param_1,uVar1);
          iVar6 = iVar5;
        }
      }
      else {
LAB_00446ed8:
        FUN_00446330(param_1,uVar1);
        iVar6 = iVar6 + 1;
      }
    }
    if (uVar1 != 0x2e) {
      if (uVar1 != 0x22) {
        if (uVar1 == 0x23) goto LAB_00446da1;
        if (uVar1 != 0x27) {
          if (uVar1 != 0x2c) goto LAB_00446ed8;
          goto LAB_00446db1;
        }
      }
      while( true ) {
        iVar5 = iVar6 + 1;
        iVar4 = 0;
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + -4);
        }
        if ((iVar4 + -1 <= iVar5) ||
           (*(ushort *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 2) == uVar1)) break;
        FUN_00446330(param_1,*(undefined2 *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 2));
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 2;
      goto LAB_00446ee6;
    }
LAB_00446db1:
    iVar6 = iVar6 + 1;
  } while( true );
}

