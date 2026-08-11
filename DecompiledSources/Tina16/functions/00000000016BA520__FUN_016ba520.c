/* Ghidra address: 016ba520 */
/* Ghidra symbol: FUN_016ba520 */


bool FUN_016ba520(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined *puVar4;
  byte *pbVar5;
  bool bVar6;
  undefined8 local_res18 [2];
  bool local_141;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  byte local_118 [256];
  
  local_140 = 0;
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar5 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  local_138 = *param_4;
  uStack_130 = param_4[1];
  uStack_128 = param_4[2];
  uStack_120 = param_4[3];
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (local_118[0] == 0) {
    local_141 = false;
  }
  else {
    iVar1 = FUN_00416db0(local_res18[0],&DAT_016ba724);
    if (iVar1 == 0) {
      local_141 = (byte)(local_118[1] - 0x40) < 0x20 &&
                  (1 << (local_118[1] - 0x40 & 0x1f) & 0x87fffffeU) != 0;
    }
    else {
      iVar1 = FUN_00416db0(local_res18[0],&DAT_016ba738);
      if (iVar1 == 0) {
        local_141 = (*(byte *)((longlong)&local_138 + ((longlong)(ulonglong)local_118[1] >> 3)) >>
                     ((ulonglong)local_118[1] & 7) & 1) != 0;
      }
      else {
        puVar4 = &DAT_016ba748;
        iVar1 = FUN_00416db0(local_res18[0],&DAT_016ba748);
        if (iVar1 == 0) {
          if ((byte)(local_118[1] - 0x30) < 0x10) {
            uVar3 = (int)CONCAT62((int6)((ulonglong)puVar4 >> 0x10),1) <<
                    (local_118[1] - 0x30 & 0x1f);
            puVar4 = (undefined *)(ulonglong)uVar3;
            local_141 = (uVar3 & 0x3ff) != 0;
          }
          else {
            local_141 = false;
          }
          for (iVar1 = 2; (local_141 != false && (iVar1 <= (int)(uint)local_118[0]));
              iVar1 = iVar1 + 1) {
            if (local_141 == false) {
LAB_016ba67e:
              local_141 = false;
            }
            else {
              if ((byte)(local_118[iVar1] - 0x30) < 0x10) {
                uVar3 = (int)CONCAT62((int6)((ulonglong)puVar4 >> 0x10),1) <<
                        (local_118[iVar1] - 0x30 & 0x1f);
                puVar4 = (undefined *)(ulonglong)uVar3;
                bVar6 = (uVar3 & 0x3ff) != 0;
              }
              else {
                bVar6 = false;
              }
              if (!bVar6) goto LAB_016ba67e;
              local_141 = true;
            }
          }
        }
        else {
          FUN_00416760(&local_140,local_118[1]);
          iVar1 = FUN_004170c0(local_140,local_res18[0],1);
          local_141 = iVar1 != 0;
        }
      }
    }
  }
  FUN_00414480(&local_140);
  FUN_00414480(local_res18);
  return local_141;
}

