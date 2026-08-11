/* Ghidra address: 004609c0 */
/* Ghidra symbol: FUN_004609c0 */


void FUN_004609c0(ushort *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  ushort *local_30;
  
  local_30 = param_1;
  if ((*param_1 & 0x2000) == 0) {
    FUN_004607e0(0x80070057);
  }
  if ((*local_30 & 0xfff) == 0xc) {
    if ((*local_30 & 0x4000) == 0) {
      puVar4 = *(ushort **)(local_30 + 4);
    }
    else {
      puVar4 = (ushort *)**(undefined8 **)(local_30 + 4);
    }
    iVar1 = 0;
    if (*puVar4 != 0) {
      iVar1 = FUN_00460970(auStack_58,puVar4,1);
      iVar6 = 2;
      if (1 < *puVar4) {
        iVar7 = *puVar4 - 1;
        do {
          iVar2 = FUN_00460970(auStack_58,puVar4,iVar6);
          iVar1 = iVar1 * iVar2;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    lVar5 = *(longlong *)(puVar4 + 8);
    if (0 < iVar1) {
      do {
        FUN_00460b80(lVar5);
        lVar5 = lVar5 + 0x18;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  uVar3 = thunk_FUN_04133565(local_30);
  FUN_004607e0(uVar3);
  return;
}

