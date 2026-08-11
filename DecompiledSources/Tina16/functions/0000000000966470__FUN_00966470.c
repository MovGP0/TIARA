/* Ghidra address: 00966470 */
/* Ghidra symbol: FUN_00966470 */


void FUN_00966470(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  byte *local_90;
  undefined8 local_80;
  longlong local_78;
  undefined1 *local_70;
  uint local_64;
  longlong local_60;
  char local_52;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = auStack_b8;
  local_80 = 0;
  local_78 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20 = 0;
  local_52 = FUN_00966380(param_1);
  plVar3 = (longlong *)FUN_00966240(param_1);
  (**(code **)(*plVar3 + 0x70))(plVar3);
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  bVar1 = FUN_00966380(param_1);
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      if (1 < *(int *)(param_1[7] + 0x10)) {
        lVar7 = FUN_00966240(param_1);
        if ((*(char *)(lVar7 + 0xa8) == '\0') || ((char)param_1[10] == '\0')) {
          FUN_00965fb0(param_1);
          (**(code **)(*param_1 + 0x70))(param_1);
        }
        else {
          *(undefined1 *)((longlong)param_1 + 0x14) = 0x59;
          FUN_00965fb0(param_1);
        }
      }
      goto code_r0x009668d1;
    }
    if (bVar1 != 0) {
      if (bVar1 == 5) {
        *(undefined1 *)(param_1 + 10) = 0;
        goto code_r0x009668d1;
      }
      if (bVar1 != 6) goto code_r0x009668d1;
    }
  }
  else if ((bVar1 != 8) && (bVar1 != 0xb)) {
    if (bVar1 == 0xd) {
      if (((char)param_1[10] == '\0') || ((char)param_1[5] == '\0')) {
        local_20 = 0;
        puVar4 = (undefined8 *)FUN_00966240(param_1);
        (**(code **)*puVar4)(puVar4,&local_20);
        puVar4 = (undefined8 *)FUN_00966240(param_1);
        (**(code **)*puVar4)(puVar4,&local_78);
        local_60 = local_78;
        local_64 = 0;
        if (local_78 != 0) {
          local_64 = *(uint *)(local_78 + -4) >> 1;
        }
        FUN_00416430(&local_30,local_20,2,local_64 - 2);
        FUN_00414520(&local_20);
        uVar5 = FUN_00414520(&local_38);
        uVar6 = FUN_00414520(&local_40);
        local_98 = (undefined1 *)FUN_00414520(&local_48);
        local_90 = &local_51;
        FUN_00966040(param_1,local_30,uVar5,uVar6);
        bVar1 = local_51 - 0x28;
        if (bVar1 < 0x78) {
          bVar8 = ((byte)(&DAT_00966960)[(longlong)((ulonglong)bVar1 & 0x7f) >> 3] >>
                   ((ulonglong)bVar1 & 7) & 1) != 0;
        }
        else {
          bVar8 = false;
        }
        if ((bVar8) && ((char)param_1[5] == '\x02')) {
          *(undefined1 *)((longlong)param_1 + 0x14) = 0;
        }
        else {
          if (local_51 < 0xa0) {
            bVar8 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_51 >> 3] >> (local_51 & 7) & 1
                    ) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            (**(code **)(*param_1 + 0x68))(param_1,&local_80);
            uVar5 = local_48;
            FUN_008fdec0(local_80,local_48,&local_28);
            if ((byte)(local_52 - 8U) < 0x10) {
              bVar8 = ((int)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),1) << (local_52 - 8U & 0x1f) &
                      0x820U) != 0;
            }
            else {
              bVar8 = false;
            }
            if (bVar8) {
              FUN_00416020(&local_50,local_38,&LAB_00966978);
            }
            else {
              local_98 = &LAB_00966978;
              FUN_00416310(&local_50,3,&LAB_00966978,local_38);
            }
            local_98 = (undefined1 *)local_28;
            local_90 = (byte *)CONCAT71(local_90._1_7_,(char)param_1[10] == '\0');
            FUN_00965df0(param_1,local_50,local_30,local_40);
            uVar2 = FUN_00966200(param_1);
            if ((byte)uVar2 < 0xa0) {
              bVar8 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uVar2 & 0xff) >> 3] >> (uVar2 & 7) & 1)
                      != 0;
            }
            else {
              bVar8 = false;
            }
            if (bVar8) {
              (**(code **)(*param_1 + 0x70))(param_1);
            }
          }
          else {
            *(byte *)((longlong)param_1 + 0x14) = local_51;
          }
        }
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x14) = 0x8b;
      }
    }
    goto code_r0x009668d1;
  }
  *(undefined1 *)(param_1 + 10) = 1;
code_r0x009668d1:
  FUN_004145c0(&local_80,2);
  FUN_004145c0(&local_50,6);
  return;
}

