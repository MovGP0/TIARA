/* Ghidra address: 0114fa60 */
/* Ghidra symbol: FUN_0114fa60 */


void FUN_0114fa60(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint local_40;
  int local_3c;
  undefined1 local_35;
  undefined1 local_34;
  char local_33;
  ushort local_32;
  longlong local_30;
  
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar4 = FUN_0114f620(param_1);
  if (uVar4 == 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    uVar6 = FUN_00409570((uint)uVar4 * 2);
    *(undefined8 *)(param_1 + 0x58) = uVar6;
  }
  sVar9 = 0;
  local_32 = 0;
  iVar10 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x2d8);
  local_40 = 1;
  if (0 < iVar10) {
    do {
      uVar6 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2b0) + -8 +
               (longlong)(int)local_40 * 8);
      iVar5 = FUN_01cfd2d0();
      local_3c = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar7 = FUN_01b05ad0(uVar6,CONCAT31((int3)((uint)local_3c >> 8),(char)local_3c + '\x01'),0
                               ,&local_33,&local_34,&local_35);
          if (local_33 == '\x06') {
            cVar3 = FUN_0114eb00(*(undefined1 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20));
            if (cVar3 != '\0') {
              uVar8 = (ulonglong)*(byte *)(*(longlong *)(lVar7 + 0x20) + 0x12);
              pbVar2 = (byte *)(param_1 + 0x60 + ((longlong)uVar8 >> 3));
              *pbVar2 = *pbVar2 | '\x01' << (uVar8 & 7);
            }
          }
          else if ((local_33 == '\a') && (*(longlong *)(lVar7 + 0x140) != 0)) {
            local_30 = *(longlong *)(*(longlong *)(lVar7 + 0x140) + 0x10);
            *(undefined8 *)(param_1 + 0x80) = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined8 *)(param_1 + 0x90) = 0;
            *(undefined8 *)(param_1 + 0x98) = 0;
            for (uVar11 = (uint)*(byte *)(*(longlong *)(lVar7 + 0x140) + 0x18); uVar11 != 0;
                uVar11 = uVar11 - 1) {
              cVar3 = FUN_0114eb60(local_30);
              if (cVar3 != '\0') {
                bVar1 = *(byte *)(local_30 + 10);
                if (bVar1 == 0) {
                  pbVar2 = (byte *)(param_1 + 0x60 +
                                   ((longlong)(ulonglong)*(byte *)(local_30 + 9) >> 3));
                  *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)*(byte *)(local_30 + 9) & 7);
                }
                else if (*(byte *)(local_30 + 9) == 0) {
                  pbVar2 = (byte *)(param_1 + 0x80 + ((longlong)(ulonglong)bVar1 >> 3));
                  *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)bVar1 & 7);
                }
                else {
                  *(ushort *)(*(longlong *)(param_1 + 0x58) + -2 + (ulonglong)(local_32 + 1) * 2) =
                       (ushort)bVar1 + (ushort)*(byte *)(local_30 + 9) * 0x100;
                  local_32 = local_32 + 1;
                }
              }
              FUN_00b909d0(&local_30,0x14);
            }
            uVar11 = 1;
            do {
              if (uVar11 < 0x100) {
                bVar12 = (*(byte *)(param_1 + 0x80 + ((longlong)(ulonglong)uVar11 >> 3)) >>
                          ((ulonglong)uVar11 & 7) & 1) != 0;
              }
              else {
                bVar12 = false;
              }
              if (bVar12) {
                sVar9 = sVar9 + 1;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != 0x100);
          }
          local_3c = local_3c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_40 = local_40 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(short *)(param_1 + 0x42) = sVar9 * 2;
  if (local_32 != 0) {
    FUN_0114f980(param_1,&local_32);
  }
  uVar4 = sVar9 + local_32;
  *(ushort *)(param_1 + 0x40) = uVar4 * 2;
  local_40 = 1;
  do {
    if (local_40 < 0x100) {
      bVar12 = (*(byte *)(param_1 + 0x60 + ((longlong)(ulonglong)local_40 >> 3)) >>
                ((ulonglong)local_40 & 7) & 1) != 0;
    }
    else {
      bVar12 = false;
    }
    if (bVar12) {
      uVar4 = uVar4 + 1;
    }
    local_40 = local_40 + 1;
  } while (local_40 != 0x100);
  if (uVar4 == 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    uVar6 = FUN_00409570((ulonglong)uVar4 << 4);
    *(undefined8 *)(param_1 + 0x50) = uVar6;
  }
  *(ushort *)(param_1 + 0x44) = uVar4;
  *(ushort *)(param_1 + 0x46) = local_32;
  return;
}

