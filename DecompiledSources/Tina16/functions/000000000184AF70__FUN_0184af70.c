/* Ghidra address: 0184af70 */
/* Ghidra symbol: FUN_0184af70 */


void FUN_0184af70(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_41;
  undefined8 local_40;
  int local_34;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_40 = 0;
  local_30 = FUN_004115a0(param_2);
  if (local_30 != 0) {
    local_24 = FUN_0058a260(local_30,&DAT_007ffefe,0,1);
    local_20 = FUN_004095c0((longlong)(local_24 * 8));
    FUN_0058a260(local_30,&DAT_007ffefe,local_20,1);
    local_34 = 0;
    iVar5 = local_24;
    if (-1 < local_24 + -1) {
      do {
        local_41 = 0;
        FUN_00414480(&local_40);
        pbVar1 = *(byte **)**(undefined8 **)(local_20 + (longlong)local_34 * 8);
        uVar4 = (ulonglong)*pbVar1;
        if (uVar4 < 8) {
          if (uVar4 == 7) {
            local_41 = 5;
            puVar3 = (undefined8 *)FUN_00589390(pbVar1);
            local_50 = *puVar3;
            FUN_00410ae0(local_50,&local_40);
          }
          else if (uVar4 < 5) {
            if (uVar4 == 4) {
              local_41 = 2;
            }
            else if (uVar4 == 1) {
              local_41 = 0;
            }
            else {
              if (uVar4 == 2) goto LAB_0184b166;
              if (uVar4 == 3) {
                local_41 = 8;
                FUN_004169a0(&local_40,pbVar1 + 1);
                iVar2 = FUN_0043e420(local_40,L"Boolean");
                if ((iVar2 == 0) || (iVar2 = FUN_0043e420(local_40,L"bool"), iVar2 == 0)) {
                  local_41 = 1;
                }
              }
            }
          }
          else {
            if (uVar4 == 5) goto LAB_0184b16c;
            if (uVar4 == 6) {
              local_41 = 8;
              FUN_004169a0(&local_40,pbVar1 + 1);
            }
          }
        }
        else if (uVar4 < 0xd) {
          if (uVar4 == 0xc) {
            local_41 = 7;
          }
          else if (uVar4 == 9) {
LAB_0184b166:
            local_41 = 3;
          }
          else if (uVar4 - 10 < 2) goto LAB_0184b16c;
        }
        else if (uVar4 == 0x10) {
          local_41 = 10;
        }
        else if (uVar4 == 0x12) {
LAB_0184b16c:
          local_41 = 4;
        }
        FUN_004169a0(&local_78,*(longlong *)(local_20 + (longlong)local_34 * 8) + 0x2a);
        local_88 = local_40;
        local_58 = FUN_01847460(&PTR_FUN_01844b08,1,local_78,local_41);
        *(undefined8 *)(local_58 + 0xb0) = *(undefined8 *)(param_1 + 0x90);
        *(undefined1 *)(local_58 + 0xb8) = 1;
        FUN_01847420(*(undefined8 *)(param_1 + 0xa0),local_58);
        local_34 = local_34 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_004095f0(local_20,(longlong)(local_24 * 8));
  }
  FUN_00414480(&local_78);
  FUN_00414480(&local_40);
  return;
}

