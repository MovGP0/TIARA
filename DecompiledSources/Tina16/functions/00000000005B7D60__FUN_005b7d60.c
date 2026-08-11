/* Ghidra address: 005b7d60 */
/* Ghidra symbol: FUN_005b7d60 */


undefined8 FUN_005b7d60(longlong param_1,ushort *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  int iVar5;
  bool bVar6;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
  iVar5 = 0;
  if (lVar3 != 0) {
    iVar5 = (int)*(undefined8 *)(lVar3 + -8);
  }
  if (param_3 <= iVar5 + -1) {
    iVar5 = ((iVar5 + -1) - param_3) + 1;
    do {
      puVar4 = param_2;
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + (longlong)param_3 * 0x18) !=
          '\0') {
        cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 1 +
                         (longlong)param_3 * 0x18);
        if (cVar1 == '\0') {
          while( true ) {
            uVar2 = *puVar4;
            if (uVar2 == 0) {
              bVar6 = false;
            }
            else {
              if ((ushort)(uVar2 - 0x61) < 0x1a) {
                uVar2 = uVar2 & 0xffdf;
              }
              bVar6 = uVar2 != *(ushort *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 8 +
                                (longlong)param_3 * 0x18);
            }
            if (!bVar6) break;
            puVar4 = puVar4 + 1;
          }
        }
        else if (cVar1 == '\x02') {
          while( true ) {
            uVar2 = *puVar4;
            if (uVar2 == 0) {
              bVar6 = false;
            }
            else {
              if ((ushort)(uVar2 - 0x61) < 0x1a) {
                uVar2 = uVar2 & 0xffdf;
              }
              if (uVar2 < 0x100) {
                bVar6 = (*(byte *)(*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x10 +
                                    (longlong)param_3 * 0x18) + ((longlong)(ulonglong)uVar2 >> 3))
                         >> ((ulonglong)uVar2 & 7) & 1) != 0;
              }
              else {
                bVar6 = false;
              }
              bVar6 = (bool)*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 8 +
                                     (longlong)param_3 * 0x18) == bVar6;
            }
            if (!bVar6) break;
            puVar4 = puVar4 + 1;
          }
        }
        else if (cVar1 == '\x03') {
          while (puVar4 = param_2, *param_2 != 0) {
            if (*param_2 ==
                *(ushort *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 8 + (longlong)param_3 * 0x18))
            {
              puVar4 = param_2 + 1;
              if (*puVar4 ==
                  *(ushort *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 10 + (longlong)param_3 * 0x18
                   )) break;
              param_2 = param_2 + 2;
            }
            else {
              param_2 = param_2 + 2;
            }
          }
        }
        if (*puVar4 != 0) {
          FUN_005b7cf0(param_1,puVar4 + 1,param_3);
        }
      }
      lVar3 = (longlong)param_3;
      cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 1 + lVar3 * 0x18);
      if (cVar1 == '\0') {
        uVar2 = *puVar4;
        if ((ushort)(uVar2 - 0x61) < 0x1a) {
          uVar2 = uVar2 & 0xffdf;
        }
        if (uVar2 != *(ushort *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 8 + lVar3 * 0x18)) {
          return 0;
        }
      }
      else if (cVar1 == '\x01') {
        if (*puVar4 == 0) {
          return 0;
        }
      }
      else if (cVar1 == '\x02') {
        uVar2 = *puVar4;
        if ((ushort)(uVar2 - 0x61) < 0x1a) {
          uVar2 = uVar2 & 0xffdf;
        }
        if (uVar2 < 0x100) {
          bVar6 = (*(byte *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x10 +
                              lVar3 * 0x18) + ((longlong)(ulonglong)uVar2 >> 3)) >>
                   ((ulonglong)uVar2 & 7) & 1) != 0;
        }
        else {
          bVar6 = false;
        }
        if ((bool)*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 8 + lVar3 * 0x18) ==
            bVar6) {
          return 0;
        }
      }
      else if (cVar1 == '\x03') {
        if (*puVar4 !=
            *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 8 + lVar3 * 0x18)) {
          return 0;
        }
        puVar4 = puVar4 + 1;
        if (*puVar4 !=
            *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 10 + lVar3 * 0x18)) {
          return 0;
        }
      }
      param_2 = puVar4 + 1;
      param_3 = param_3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 1;
}

