/* Ghidra address: 017002a0 */
/* Ghidra symbol: FUN_017002a0 */


/* WARNING: Type propagation algorithm not settling */

void FUN_017002a0(longlong *param_1,longlong *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ushort uVar6;
  short **ppsVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_b0;
  int local_a8;
  int local_a4;
  longlong *local_a0;
  int local_94;
  int local_90;
  int local_8c;
  longlong *local_88;
  double local_80;
  short *local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40 [2];
  undefined4 local_2c;
  
  local_40[0] = 0;
  local_48 = 0;
  local_40[1] = 0;
  local_78 = (short *)0x0;
  local_b0 = param_2;
  local_a8 = param_3;
  local_a0 = param_1;
  if (-1 < param_3) {
    local_a4 = param_3 * param_3;
    FUN_00419260(local_40,&DAT_017012a8,1,(longlong)local_a4);
    FUN_00419260(&local_48,&DAT_017012a8,1,(longlong)local_a8);
    iVar3 = FUN_01cfd2d0();
    local_90 = 0;
    if (-1 < iVar3 + -1) {
      do {
        cVar2 = (**(code **)(*local_a0 + 0x2d0))(local_a0,local_90,&local_50);
        if (local_90 < local_a4) {
          *(longlong *)(local_40[0] + (longlong)local_90 * 8) = local_50;
        }
        else {
          *(longlong *)(local_48 + (longlong)(local_90 - local_a4) * 8) = local_50;
        }
        if (cVar2 == '\x0f') {
          local_88 = *(longlong **)(local_50 + 0x10);
          iVar8 = (int)local_88[2] + -1;
          local_94 = 1;
          if (0 < iVar8) {
            do {
              uVar4 = FUN_00b94e60(local_88,local_94);
              (**(code **)(*local_88 + 0x10))(local_88,uVar4);
              local_94 = local_94 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          *(undefined4 *)(local_88 + 2) = 1;
        }
        local_90 = local_90 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_a8 == 2) {
      FUN_01700290(auStack_e8,local_40[0] + 8,local_40[0] + 0x10);
    }
    bVar1 = false;
    local_8c = 0;
    iVar3 = (**(code **)(*local_b0 + 0x28))();
    local_94 = 0;
    if (-1 < iVar3 + -1) {
      do {
        ppsVar7 = &local_78;
        (**(code **)(*local_b0 + 0x18))(local_b0,ppsVar7,local_94);
        if (local_78 != (short *)0x0) {
          uVar6 = *local_78 - 0x20;
          if (uVar6 < 0x10) {
            bVar9 = ((int)CONCAT62((int6)((ulonglong)ppsVar7 >> 0x10),1) << ((byte)uVar6 & 0x1f) &
                    0x4402U) != 0;
          }
          else {
            bVar9 = false;
          }
          if (!bVar9) {
            if (*local_78 == 0x23) {
              if (bVar1) break;
              local_c8 = local_40 + 1;
              FUN_017000a0(auStack_e8,local_78,&local_68,&local_70);
              bVar1 = true;
            }
            else {
              if (local_8c == 0) {
                local_80 = (double)FUN_016ffe20(auStack_e8,local_78);
                local_80 = local_80 * local_68;
              }
              local_90 = local_8c;
              if (local_8c <= local_a4 + -1) {
                iVar8 = ((local_a4 + -1) - local_8c) + 1;
                do {
                  FUN_016ffe90(auStack_e8,local_78,&local_58,&local_60);
                  cVar2 = FUN_00526f10(local_58);
                  if ((cVar2 != '\0') || (cVar2 = FUN_00526f10(local_60), cVar2 != '\0')) {
                    local_8c = local_90;
                    local_2c = 1;
                    break;
                  }
                  FUN_01d3c230(*(undefined8 *)
                                (*(longlong *)(local_40[0] + (longlong)local_90 * 8) + 0x10),
                               local_80,local_58,local_60);
                  if (local_90 == local_a4 + -1) {
                    local_8c = 0;
                  }
                  local_90 = local_90 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            }
          }
        }
        local_94 = local_94 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_94 = 0;
    iVar3 = local_a8;
    if (-1 < local_a8 + -1) {
      do {
        lVar5 = FUN_01d3c210(*(undefined8 *)
                              (*(longlong *)(local_48 + (longlong)local_94 * 8) + 0x10),0);
        *(undefined8 *)(lVar5 + 8) = local_70;
        local_94 = local_94 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00419430(local_40,&DAT_017012a8);
    FUN_00419430(&local_48,&DAT_017012a8);
  }
  FUN_00414480(&local_78);
  FUN_00417840(&local_48,&DAT_017012a8,2);
  FUN_00414480(local_40 + 1);
  return;
}

