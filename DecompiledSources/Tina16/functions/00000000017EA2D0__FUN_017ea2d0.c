/* Ghidra address: 017ea2d0 */
/* Ghidra symbol: FUN_017ea2d0 */


void FUN_017ea2d0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar12;
  int local_bc;
  int local_a4;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40 [3];
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_40[2] = 0;
  local_40[1] = 0;
  local_40[0] = 0;
  cVar3 = FUN_013b2ea0(param_2);
  if (cVar3 != '\0') {
    if ((param_4 & 2) != 0) {
      FUN_019af700(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788));
    }
    iVar11 = *(int *)(param_1 + 0x10);
    local_bc = 0;
    if (-1 < iVar11 + -1) {
      do {
        plVar7 = (longlong *)FUN_00b94e60(param_1,local_bc);
        cVar3 = FUN_0198a580(plVar7);
        if ((cVar3 == '\b') && (*(char *)(plVar7[5] + 0x98) == '\x02')) {
          plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
          bVar2 = false;
          plVar9 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
          plVar1 = *(longlong **)(*(longlong *)(plVar7[5] + 0x90) + 0xa0);
          (**(code **)(*plVar1 + 0x38))(plVar1,local_70);
          FUN_01b23780(local_40,local_70[0],plVar9);
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x28))();
          local_a4 = 0;
          if (-1 < iVar4 + -1) {
            do {
              FUN_004b3cf0(*(undefined8 *)(param_1 + 0x438),&local_78,local_a4);
              iVar5 = (**(code **)(*plVar9 + 0xb0))(plVar9,local_78);
              if (iVar5 == -1) {
                if (bVar2) {
LAB_017ea4e2:
                  bVar2 = true;
                }
                else {
                  FUN_004b3cf0(*(undefined8 *)(param_1 + 0x438),&local_80,local_a4);
                  uVar6 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0xb0))
                                    (*(longlong **)(param_2 + 0x30),local_80);
                  if (uVar6 < 0x80000000) goto LAB_017ea4e2;
                  bVar2 = false;
                }
                (**(code **)(**(longlong **)(param_1 + 0x438) + 0x18))
                          (*(longlong **)(param_1 + 0x438),&local_88,local_a4);
                (**(code **)(*plVar8 + 0x78))(plVar8,local_88);
              }
              local_a4 = local_a4 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
          if ((param_4 & 1) == 0) {
            if ((param_4 & 2) != 0) {
              if (local_40[0] != 0) {
                uVar12 = 0;
                FUN_00416cd0(&local_98,3,L"@ Configuration begin",local_40[0],
                             L".@ Configuration end");
                (**(code **)(*plVar8 + 0x78))(plVar8,local_98);
              }
              (**(code **)(*plVar7 + 0x50))
                        (plVar7,*(undefined8 *)
                                 (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210),
                         &local_50);
              FUN_0149ec30(plVar7,plVar8);
              if (bVar2) {
                FUN_0149efc0(plVar7,1);
              }
              if (((param_4 & 8) != 0) && (param_3 != 0)) {
                uVar10 = FUN_01474600(&DAT_014742b0,1,plVar7);
                FUN_004ae7e0(param_3,uVar10);
              }
              (**(code **)(*plVar7 + 0x50))
                        (plVar7,*(undefined8 *)
                                 (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210),
                         local_60);
              FUN_00b957c0(&local_50,local_60);
              plVar7 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210)
              ;
              in_stack_ffffffffffffff18 = CONCAT44(uVar12,local_44);
              (**(code **)(*plVar7 + 0x30))
                        (plVar7,local_50,local_4c,local_48,in_stack_ffffffffffffff18);
            }
          }
          else {
            if (local_40[0] != 0) {
              in_stack_ffffffffffffff18 = 0;
              FUN_00416cd0(&local_90,3,L"@ Configuration begin",local_40[0],L".@ Configuration end")
              ;
              (**(code **)(*plVar8 + 0x78))(plVar8,local_90);
            }
            FUN_0149ec30(plVar7,plVar8);
            if (bVar2) {
              FUN_0149efc0(plVar7,1);
            }
          }
          FUN_00410f20(plVar9);
          FUN_00410f20(plVar8);
        }
        local_bc = local_bc + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  FUN_00414560(&local_98,6);
  FUN_00414560(local_40,3);
  return;
}

