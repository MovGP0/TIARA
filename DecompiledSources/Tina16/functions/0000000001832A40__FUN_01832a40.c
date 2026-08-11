/* Ghidra address: 01832a40 */
/* Ghidra symbol: FUN_01832a40 */


undefined1 * FUN_01832a40(longlong param_1,undefined1 *param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar6;
  ushort local_40 [4];
  byte local_38 [16];
  byte local_28 [24];
  
  FUN_00417580(local_28,&DAT_0183db48);
  FUN_00417580(local_38,&DAT_0183db48);
  if (param_3 == 0) {
    *param_2 = 7;
  }
  else {
    cVar2 = FUN_004113d0(param_3,&PTR_FUN_0182d660);
    if (cVar2 == '\0') {
      FUN_01832a40(param_1,local_28,*(undefined8 *)(param_3 + 0x88));
      FUN_01832a40(param_1,local_38,*(undefined8 *)(param_3 + 0x90));
      if ((local_28[0] == 1) && (local_38[0] == 1)) {
        *(undefined1 *)(param_3 + 0xa2) = 1;
      }
      bVar1 = *(byte *)(param_3 + 0xa0);
      if (((bVar1 == 0x17) && (local_28[0] == 5)) && (local_38[0] == 5)) {
        bVar6 = false;
      }
      else {
        uVar4 = FUN_01822980(local_28,local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x98)
                            );
        bVar6 = (char)uVar4 == '\0';
        if (!bVar6) {
          if (local_28[0] == 1) {
            bVar6 = 0x1f < bVar1 || (1 << (bVar1 & 0x1f) & 0x108660U) == 0;
          }
          else if ((byte)(local_28[0] - 3) < 2) {
            bVar6 = 0x1f < bVar1 || (1 << (bVar1 & 0x1f) & 0x4000feU) == 0;
          }
          else if ((byte)(local_28[0] - 5) < 2) {
            if (bVar1 < 8) {
              bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (bVar1 & 0x1f) & 0x60U) !=
                      0;
            }
            else {
              bVar6 = false;
            }
            bVar6 = !bVar6;
          }
        }
      }
      if (bVar6) {
        if (*(longlong *)(param_1 + 0x58) == 0) {
          FUN_00414b50(param_1 + 0x58,*(undefined8 *)(param_3 + 0x38));
        }
      }
      else {
        FUN_00417c40(param_2,local_28,&DAT_0183db48);
        uVar5 = (ulonglong)local_28[0];
        FUN_0040f630(local_40,uVar5,2);
        uVar3 = local_40[0];
        if (local_38[0] < 0x10) {
          uVar3 = local_40[0] |
                  (ushort)((int)CONCAT62((int6)(uVar5 >> 0x10),1) << (local_38[0] & 0x1f));
        }
        if (uVar3 == 5) {
          *param_2 = 2;
        }
        if (((local_28[0] == 0) && (local_38[0] == 0)) && (bVar1 == 0xc)) {
          *param_2 = 2;
        }
        uVar5 = (ulonglong)local_28[0];
        FUN_0040f630(local_40,uVar5,2);
        if (local_38[0] < 0x10) {
          local_40[0] = local_40[0] |
                        (ushort)((int)CONCAT62((int6)(uVar5 >> 0x10),1) << (local_38[0] & 0x1f));
        }
        if (local_40[0] == 0x404) {
          *param_2 = 2;
        }
        if (((local_28[0] == 10) || (local_28[0] == 0)) &&
           (((local_38[0] == 10 || (local_38[0] == 10)) && (bVar1 == 0xc)))) {
          *param_2 = 2;
        }
        if (bVar1 < 0x20 && (1 << (bVar1 & 0x1f) & 0xc0007eU) != 0) {
          *param_2 = 1;
        }
      }
      *(undefined1 *)(param_3 + 0x48) = *param_2;
    }
    else {
      *param_2 = *(undefined1 *)(param_3 + 0x48);
      FUN_00414ad0(param_2 + 8,*(undefined8 *)(param_3 + 0x50));
    }
  }
  FUN_00417840(local_38,&DAT_0183db48,2);
  return param_2;
}

