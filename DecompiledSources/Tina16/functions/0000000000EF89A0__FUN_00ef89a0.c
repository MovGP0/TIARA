/* Ghidra address: 00ef89a0 */
/* Ghidra symbol: FUN_00ef89a0 */


void FUN_00ef89a0(longlong param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 longlong param_5)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  char local_78 [80];
  
  if (*(char *)(param_5 + 0x92) == '\0') {
    iVar5 = *(byte *)(param_1 + 0x6f) + 1;
    pcVar3 = local_78;
    do {
      *pcVar3 = -1;
      pcVar3 = pcVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_78[0] = '\0';
    **(undefined1 **)(param_1 + 0x50) = **(undefined1 **)(param_1 + 0x60);
    iVar5 = 0;
    while (local_78[0] != -1) {
      bVar1 = *(byte *)(param_1 + 0x6f);
      if (iVar5 < (int)(uint)bVar1) {
        iVar7 = iVar5 + 1;
        lVar4 = (longlong)iVar7;
        if (*(char *)(*(longlong *)(param_1 + 0x60) + (longlong)(local_78[lVar4] + 1) * 0x40 + lVar4
                     ) == -1) {
          iVar5 = iVar5 + -1;
          if (iVar7 <= (int)(uint)bVar1) {
            iVar6 = ((uint)bVar1 - iVar7) + 1;
            pcVar3 = local_78 + iVar7;
            do {
              *pcVar3 = -1;
              pcVar3 = pcVar3 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        else {
          local_78[lVar4] = local_78[lVar4] + '\x01';
          while( true ) {
            lVar4 = (longlong)iVar7;
            cVar2 = FUN_00ef88f0(param_1,*(undefined1 *)
                                          (*(longlong *)(param_1 + 0x60) +
                                           (longlong)local_78[lVar4] * 0x40 + lVar4),
                                 CONCAT31((int3)((uint)iVar7 >> 8),(char)iVar7 + -1));
            if ((cVar2 != '\0') ||
               (*(char *)(*(longlong *)(param_1 + 0x60) + (longlong)local_78[lVar4] * 0x40 + lVar4)
                == -1)) break;
            dVar8 = (double)FUN_00ef8930(param_1,iVar7);
            FUN_019b9a90(param_4 / dVar8,param_5,0);
            local_78[lVar4] = local_78[lVar4] + '\x01';
          }
          lVar4 = (longlong)iVar7;
          if (*(char *)(*(longlong *)(param_1 + 0x60) + (longlong)local_78[lVar4] * 0x40 + lVar4) ==
              -1) {
            iVar5 = iVar5 + -1;
            if (iVar7 <= (int)(uint)*(byte *)(param_1 + 0x6f)) {
              iVar6 = ((uint)*(byte *)(param_1 + 0x6f) - iVar7) + 1;
              pcVar3 = local_78 + iVar7;
              do {
                *pcVar3 = -1;
                pcVar3 = pcVar3 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
          }
          else {
            *(undefined1 *)(*(longlong *)(param_1 + 0x50) + lVar4) =
                 *(undefined1 *)
                  (*(longlong *)(param_1 + 0x60) + (longlong)local_78[lVar4] * 0x40 + lVar4);
            iVar5 = iVar7;
          }
        }
      }
      else {
        FUN_00ef8680(param_1,param_5);
        dVar8 = (double)FUN_00ef8930(param_1,iVar5);
        FUN_019b9a90(param_4 / dVar8,param_5,0);
        iVar5 = iVar5 + -1;
      }
    }
  }
  return;
}

