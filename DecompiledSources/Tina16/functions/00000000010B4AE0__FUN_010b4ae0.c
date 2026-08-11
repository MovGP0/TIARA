/* Ghidra address: 010b4ae0 */
/* Ghidra symbol: FUN_010b4ae0 */


void FUN_010b4ae0(longlong *param_1,byte param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_68 [36];
  int local_44;
  char local_3d;
  int local_3c;
  
  cVar1 = FUN_00a3c2e0(param_1);
  local_3d = cVar1 == '\x01';
  local_44 = FUN_00a3c5c0(param_1);
  bVar10 = false;
  lVar6 = FUN_00a39e90(param_1);
  if (*(byte *)(lVar6 + 0x491) < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)lVar6 >> 8),1) << (*(byte *)(lVar6 + 0x491) & 0x1f) &
            0x50U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (!bVar9) {
    lVar6 = FUN_00a39e90(param_1);
    if (*(byte *)(lVar6 + 0x491) < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)lVar6 >> 8),1) << (*(byte *)(lVar6 + 0x491) & 0x1f)
               & 9U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      FUN_010b48b0(auStack_68,local_3d,local_44);
    }
    else {
      FUN_00a3c4c0(param_1);
    }
  }
  if (!bVar10) {
    lVar6 = FUN_00a39e90(param_1);
    if (*(byte *)(lVar6 + 0x491) < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)lVar6 >> 8),1) << (*(byte *)(lVar6 + 0x491) & 0x1f)
               & 0x50U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      iVar3 = (**(code **)(*param_1 + 0x48))();
      iVar7 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar6 = FUN_00a3c1b0(param_1,iVar7);
          iVar4 = (**(code **)(*param_1 + 0x60))();
          local_3c = 0;
          if (-1 < iVar4 + -1) {
            do {
              if ((local_3d == '\0') ||
                 (iVar5 = (**(code **)(*param_1 + 0xe8))(param_1,local_3c,iVar7), iVar5 != local_44)
                 ) {
                lVar8 = (longlong)local_3c;
                uVar2 = FUN_0040c770(((double)*(byte *)(lVar6 + lVar8) / 256.0) *
                                     (double)(param_2 + 1));
                *(undefined1 *)(lVar6 + lVar8) = uVar2;
              }
              else {
                *(undefined1 *)(lVar6 + local_3c) = 0;
              }
              local_3c = local_3c + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}

