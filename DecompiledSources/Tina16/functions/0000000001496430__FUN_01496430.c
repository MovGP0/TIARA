/* Ghidra address: 01496430 */
/* Ghidra symbol: FUN_01496430 */


bool FUN_01496430(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_res10 [3];
  longlong local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  
  local_98 = 0;
  local_90 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00450070(&local_90,local_res10[0],&DAT_014968ec,&DAT_014968fc,1);
  FUN_00414b50(local_res10,local_90);
  uVar2 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *param_3 = 0;
  FUN_00416ba0(&local_98,L"_ipr_temp_var := ",local_res10[0]);
  (**(code **)(*plVar5 + 0x78))(plVar5,local_98);
  uVar1 = *PTR_DAT_020052b0;
  local_a8 = 0;
  *(undefined1 *)(param_1 + 0xba1) = 0;
  if (*(longlong *)(param_1 + 0x930) != 0) {
    *(undefined8 *)(param_1 + 0x938) = *(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x628);
    lVar7 = *(longlong *)(param_1 + 0x930);
    *(undefined8 *)(param_1 + 0x940) = *(undefined8 *)(lVar7 + 0x630);
    *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(lVar7 + 0x638);
    *(undefined8 *)(param_1 + 0x950) = *(undefined8 *)(lVar7 + 0x640);
    *(undefined8 *)(param_1 + 0x958) = *(undefined8 *)(lVar7 + 0x648);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x650);
    puVar10 = (undefined8 *)(param_1 + 0x960);
    for (lVar7 = 0x48; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x930));
    *(undefined8 *)(param_1 + 0x930) = 0;
  }
  uVar6 = FUN_017e1bd0(&DAT_017df868,1,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x930) = uVar6;
  FUN_01695540(uVar6,plVar5);
  lVar7 = *(longlong *)(param_1 + 0x930);
  *(undefined8 *)(lVar7 + 0x628) = *(undefined8 *)(param_1 + 0x938);
  *(undefined8 *)(lVar7 + 0x630) = *(undefined8 *)(param_1 + 0x940);
  *(undefined8 *)(lVar7 + 0x638) = *(undefined8 *)(param_1 + 0x948);
  *(undefined8 *)(lVar7 + 0x640) = *(undefined8 *)(param_1 + 0x950);
  *(undefined8 *)(lVar7 + 0x648) = *(undefined8 *)(param_1 + 0x958);
  puVar9 = (undefined8 *)(param_1 + 0x960);
  puVar10 = (undefined8 *)(lVar7 + 0x650);
  for (lVar8 = 0x48; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_01695da0(lVar7,uVar1);
  if (param_4 == '\0') {
    FUN_016942f0(*(undefined8 *)(param_1 + 0x930));
    FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x550),1,0,0);
    FUN_014959c0(param_1);
  }
  lVar7 = FUN_013bdbe0(&DAT_013bda78,1,*(undefined8 *)(param_1 + 0x930));
  iVar4 = FUN_013bfdc0(lVar7);
  if (iVar4 != 0) {
    cVar3 = FUN_01695e60(*(undefined8 *)(param_1 + 0x930));
    if ((cVar3 == '\0') && (cVar3 = FUN_01695ee0(*(undefined8 *)(param_1 + 0x930)), cVar3 == '\0'))
    {
      FUN_017e2900(*(undefined8 *)(param_1 + 0x930),0);
    }
    else {
      FUN_01493900(param_1,param_1 + 0xba8);
    }
  }
  if ((iVar4 == 0) && (param_4 == '\0')) {
    FUN_01696180(*(undefined8 *)(param_1 + 0x930));
    local_a8 = FUN_010c2660(&DAT_010c2500,1,*(undefined8 *)(param_1 + 0x930));
    iVar4 = FUN_010c7360();
    if (iVar4 == 0) {
      cVar3 = FUN_00c53220(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x4f8));
      if (cVar3 == '\0') {
        FUN_017e2760(*(undefined8 *)(param_1 + 0x930),2);
      }
      cVar3 = FUN_017e28e0(*(undefined8 *)(param_1 + 0x930));
      if (cVar3 == '\0') {
        lVar8 = FUN_013b3ad0(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x4e8),&DAT_01496934);
        if (lVar8 != 0) {
          FUN_013b4b70(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x4e8),lVar8,local_88);
          *param_3 = local_80;
        }
      }
      else if (*(short *)(*(longlong *)(param_1 + 0x930) + 0x2d8) != 0x14) {
        FUN_01493900(param_1,param_1 + 0xba8);
      }
    }
    else {
      FUN_01493900(param_1,param_1 + 0xba8);
    }
  }
  cVar3 = FUN_017e28e0(*(undefined8 *)(param_1 + 0x930));
  if (lVar7 != 0) {
    FUN_00410f20(lVar7);
  }
  FUN_00410f20(plVar5);
  if ((param_4 == '\0') && (local_a8 != 0)) {
    FUN_00410f20(local_a8);
  }
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar2;
  FUN_00414560(&local_98,2);
  FUN_00414480(local_res10);
  return cVar3 == '\0';
}

