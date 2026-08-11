/* Ghidra address: 015564e0 */
/* Ghidra symbol: FUN_015564e0 */


void FUN_015564e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
  (**(code **)(*plVar9 + 0x78))(plVar9,L"------------------------------------");
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
  (**(code **)(*plVar9 + 0x78))(plVar9,L"-- architecture section");
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
  (**(code **)(*plVar9 + 0x78))(plVar9,L"------------------------------------");
  FUN_00416cd0(local_40,5,L"ARCHITECTURE ",*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x778),
               L" of ",*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x760),&DAT_01556ec0);
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
  (**(code **)(*plVar9 + 0x78))(plVar9,local_40[0]);
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
  (**(code **)(*plVar9 + 0x78))(plVar9,0);
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x30);
  (**(code **)(*plVar9 + 0x90))(plVar9);
  uVar8 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xf8) = uVar8;
  plVar9 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x8f0);
  iVar10 = *(int *)(lVar1 + 0x10);
  local_9c = 0;
  if (-1 < iVar10 + -1) {
    do {
      uVar8 = FUN_01d347d0(lVar1,local_9c);
      *(undefined8 *)(param_1 + 0x208) = uVar8;
      *(undefined1 *)(param_1 + 0x147) = 0;
      uVar4 = FUN_0154cd50(*(undefined8 *)(param_1 + 0x270),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
      *(undefined1 *)(param_1 + 0x10f) = uVar4;
      FUN_01d3f0e0(&local_48,*(undefined2 *)(*(longlong *)(param_1 + 0x208) + 8),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
      FUN_00414b50(param_1 + 0x138,local_48);
      cVar5 = FUN_0154cf30(*(undefined8 *)(param_1 + 0x270),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
      if (cVar5 == '\0') {
LAB_01556b51:
        cVar5 = FUN_01d3f1d0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
        if (cVar5 != '\0') {
          *(undefined8 *)(param_1 + 0xe8) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x40) + 0x1a8);
          uVar8 = FUN_01771420(*(undefined8 *)(param_1 + 0xe8),1);
          *(undefined8 *)(param_1 + 0xe0) = uVar8;
          FUN_00414b50(param_1 + 0xd8,*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x48));
          uVar8 = FUN_004b6930(&PTR_FUN_00478280,1);
          *(undefined8 *)(param_1 + 0xd0) = uVar8;
          (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))
                    (*(longlong **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xe0));
          FUN_00e0f2a0(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x938),&local_88,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0xa20),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),param_1 + 0x220);
          FUN_00414b50(param_1 + 0x138,local_88);
          FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x18,*(undefined8 *)(param_1 + 0x138));
          FUN_00410f20(*(undefined8 *)(param_1 + 0xd0));
          *(undefined4 *)(param_1 + 0xf4) = 0;
          FUN_0043e1a0(&local_90,*(undefined8 *)(param_1 + 0x138));
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x30);
          iVar6 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_90);
          if (iVar6 < 0) {
            FUN_0043e1a0(&local_98,*(undefined8 *)(param_1 + 0x138));
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x30);
            (**(code **)(*plVar2 + 0x78))(plVar2,local_98);
            uVar8 = FUN_00e0f660(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x938),
                                 *(undefined8 *)(param_1 + 0x208));
            *(undefined8 *)(param_1 + 0xd0) = uVar8;
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
            (**(code **)(*plVar2 + 0x88))(plVar2,*(undefined8 *)(param_1 + 0xd0));
            FUN_00410f20(*(undefined8 *)(param_1 + 0xd0));
          }
        }
      }
      else {
        FUN_01d3f0e0(&local_50,*(undefined2 *)(*(longlong *)(param_1 + 0x208) + 8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
        FUN_00414b50(param_1 + 0x138,local_50);
        FUN_015502b0(*(undefined8 *)(param_1 + 0x270),&local_58,*(undefined8 *)(param_1 + 0x208));
        FUN_00414b50(param_1 + 0x118,local_58);
        cVar5 = FUN_0154cf30(*(undefined8 *)(param_1 + 0x270),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
        if (cVar5 == '\0') {
          FUN_00416ba0(&local_60,*(undefined8 *)(param_1 + 0x138),L"cant be converted");
          FUN_015fcf20(local_60,0,0,0);
        }
        *(undefined4 *)(param_1 + 0xf4) = 0;
        FUN_0154fc70(*(undefined8 *)(param_1 + 0x270),&local_30,*(undefined8 *)(param_1 + 0x118));
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x30);
        iVar6 = (**(code **)(*plVar2 + 0xb0))(plVar2,*(undefined8 *)(param_1 + 0x118));
        if (iVar6 < 0) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x30);
          (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x118));
          FUN_00416ba0(param_1 + 0x210,&DAT_01556f04,local_30);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x910);
          uVar7 = (**(code **)(*plVar2 + 0xb0))(plVar2,*(undefined8 *)(param_1 + 0x210));
          *(undefined4 *)(*(longlong *)(param_1 + 0x270) + 0x928) = uVar7;
          (**(code **)(*plVar9 + 0x90))(plVar9);
          iVar6 = *(int *)(*(longlong *)(param_1 + 0x270) + 0x928);
          if (iVar6 < 0) {
            FUN_00416ba0(&local_80,*(undefined8 *)(param_1 + 0x118),
                         L": can\'t found in components.txt");
            FUN_015fcf20(local_80,0,0,0);
          }
          else {
            *(int *)(param_1 + 0xf0) = iVar6 + 1;
            do {
              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x910);
              (**(code **)(*plVar2 + 0x18))(plVar2,&local_68,*(undefined4 *)(param_1 + 0xf0));
              FUN_00414b50(param_1 + 0x210,local_68);
              if (((*(char *)(*(longlong *)(param_1 + 0x270) + 0x94e) == '\0') ||
                  (*(int *)(*(longlong *)(param_1 + 0x208) + 8) == 0x3f7)) ||
                 ((iVar6 = FUN_004170c0(L"trise_clk",*(undefined8 *)(param_1 + 0x210),1), iVar6 < 1
                  && (iVar6 = FUN_004170c0(L"tfall_clk",*(undefined8 *)(param_1 + 0x210),1),
                     iVar6 < 1)))) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) {
                plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x910);
                (**(code **)(*plVar2 + 0x18))(plVar2,&local_70,*(undefined4 *)(param_1 + 0xf0));
                (**(code **)(*plVar9 + 0x78))(plVar9,local_70);
              }
              *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
              plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x910);
              (**(code **)(*plVar2 + 0x18))(plVar2,&local_78,*(undefined4 *)(param_1 + 0xf0));
              iVar6 = FUN_004170c0(&DAT_01556f54,local_78,1);
            } while (iVar6 < 1);
            iVar6 = FUN_00416db0(local_30,*(undefined8 *)(param_1 + 0x118));
            if (iVar6 != 0) {
              FUN_01b229f0(plVar9,local_30,*(undefined8 *)(param_1 + 0x118));
            }
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
            (**(code **)(*plVar2 + 0x88))(plVar2,plVar9);
          }
          FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x18,*(undefined8 *)(param_1 + 0x138));
          goto LAB_01556b51;
        }
      }
      local_9c = local_9c + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  FUN_00410f20(plVar9);
  FUN_00414560(&local_98,0xc);
  FUN_00414480(&local_30);
  return;
}

