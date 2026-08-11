/* Ghidra address: 008fff40 */
/* Ghidra symbol: FUN_008fff40 */


undefined1 FUN_008fff40(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0;
  local_31 = 1;
  bVar2 = false;
  bVar1 = false;
  uVar5 = 0;
  uVar8 = 0;
  if (param_1 != 0) {
    uVar8 = *(uint *)(param_1 + -4) >> 1;
  }
  if (uVar8 != 0) {
    do {
      uVar6 = uVar5 + 1;
      uVar4 = (ulonglong)*(ushort *)(param_1 + -2 + (longlong)(int)uVar6 * 2);
      uVar7 = uVar6;
      if (uVar4 < 0x27) {
        if (uVar4 == 0x26) {
          local_31 = 0;
          do {
            if ((int)uVar8 <= (int)uVar7) goto LAB_009000f2;
            uVar7 = uVar7 + 1;
          } while (*(short *)(param_1 + -2 + (longlong)(int)uVar7 * 2) != DAT_01e3269c);
          FUN_00416430(&local_30,param_1,uVar6,(uVar7 - uVar6) + 1);
          cVar3 = FUN_008fff10(local_30);
          if (cVar3 == '\0') break;
          local_31 = 1;
        }
        else if (uVar4 < 0x20) {
          if ((1 < uVar4 - 9) && (uVar4 - 9 != 4)) {
LAB_009000eb:
            local_31 = 0;
            break;
          }
        }
        else if (1 < uVar4 - 0x20) {
          if (uVar4 == 0x22) {
            if (bVar1) {
              local_31 = 0;
              break;
            }
            bVar2 = true;
          }
          else if (1 < uVar4 - 0x23) goto LAB_009000eb;
        }
      }
      else if (uVar4 == 0x27) {
        if (bVar2) {
          local_31 = 0;
          break;
        }
        bVar1 = true;
      }
      else if (0xd7d7 < uVar4 - 0x28) {
        if (uVar4 - 0xd800 < 0x400) {
          if (uVar6 == uVar8) {
            local_31 = 0;
            break;
          }
          cVar3 = FUN_008f7640(*(undefined2 *)(param_1 + -2 + (longlong)(int)(uVar5 + 2) * 2));
          uVar7 = uVar5 + 2;
          if (cVar3 == '\0') {
            local_31 = 0;
            break;
          }
        }
        else if (0x1ffd < uVar4 - 0xe000) goto LAB_009000eb;
      }
LAB_009000f2:
      uVar5 = uVar7;
    } while ((int)uVar5 < (int)uVar8);
  }
  FUN_00414520(&local_30);
  return local_31;
}

