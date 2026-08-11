/* Ghidra address: 01495d80 */
/* Ghidra symbol: FUN_01495d80 */


bool FUN_01495d80(longlong param_1,int param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [256];
  undefined8 local_90 [2];
  undefined8 local_80 [11];
  
  local_1a0 = (undefined1 *)0x0;
  local_198 = 0;
  local_90[0] = 0;
  local_80[0] = 0;
  uVar2 = FUN_00bfaa50(*(undefined8 *)(param_1 + 0x8b8));
  lVar9 = 0;
  *(undefined1 *)(param_1 + 0xba1) = 0;
  if (*(longlong *)(param_1 + 0x930) != 0) {
    *(undefined8 *)(param_1 + 0x938) = *(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x628);
    lVar5 = *(longlong *)(param_1 + 0x930);
    *(undefined8 *)(param_1 + 0x940) = *(undefined8 *)(lVar5 + 0x630);
    *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(lVar5 + 0x638);
    *(undefined8 *)(param_1 + 0x950) = *(undefined8 *)(lVar5 + 0x640);
    *(undefined8 *)(param_1 + 0x958) = *(undefined8 *)(lVar5 + 0x648);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x650);
    puVar8 = (undefined8 *)(param_1 + 0x960);
    for (lVar5 = 0x48; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x930));
    *(undefined8 *)(param_1 + 0x930) = 0;
  }
  uVar4 = FUN_017e1bd0(&DAT_017df868,1,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x930) = uVar4;
  FUN_017e8080(uVar4,*(undefined8 *)(param_1 + 0x8b8),*(undefined8 *)(param_1 + 0x860));
  FUN_017e2440(*(undefined8 *)(param_1 + 0x930),param_2);
  FUN_01695540(*(undefined8 *)(param_1 + 0x930),
               *(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + 0x4e8));
  lVar5 = *(longlong *)(param_1 + 0x930);
  *(undefined8 *)(lVar5 + 0x628) = *(undefined8 *)(param_1 + 0x938);
  *(undefined8 *)(lVar5 + 0x630) = *(undefined8 *)(param_1 + 0x940);
  *(undefined8 *)(lVar5 + 0x638) = *(undefined8 *)(param_1 + 0x948);
  *(undefined8 *)(lVar5 + 0x640) = *(undefined8 *)(param_1 + 0x950);
  *(undefined8 *)(lVar5 + 0x648) = *(undefined8 *)(param_1 + 0x958);
  puVar7 = (undefined8 *)(param_1 + 0x960);
  puVar8 = (undefined8 *)(lVar5 + 0x650);
  for (lVar6 = 0x48; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_01695da0(lVar5,param_3);
  FUN_016942f0(*(undefined8 *)(param_1 + 0x930));
  FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x550),1,0,0);
  uVar4 = FUN_019a4600();
  cVar1 = FUN_019a1540(uVar4,*(longlong *)(param_1 + 0x930) + 0x548);
  lVar5 = *(longlong *)(param_1 + 0x930);
  *(char *)(lVar5 + 0x540) = cVar1;
  if (cVar1 != '\0') {
    FUN_017e9ba0(lVar5,*(undefined8 *)(lVar5 + 0x548));
  }
  FUN_014959c0(param_1);
  FUN_01115c40(*(undefined8 *)(param_1 + 0x930));
  if (*(longlong *)PTR_DAT_020025d8 != 0) {
    iVar3 = FUN_007fd7d0(param_1);
    FUN_00806af0(*(undefined8 *)PTR_DAT_020025d8,
                 iVar3 - *(int *)(*(longlong *)PTR_DAT_020025d8 + 0x98));
  }
  lVar5 = FUN_013bdbe0(&DAT_013bda78,1,*(undefined8 *)(param_1 + 0x930));
  iVar3 = FUN_013bfdc0(lVar5);
  if (iVar3 != 0) {
    cVar1 = FUN_01695e60(*(undefined8 *)(param_1 + 0x930));
    if ((cVar1 == '\0') && (cVar1 = FUN_01695ee0(*(undefined8 *)(param_1 + 0x930)), cVar1 == '\0'))
    {
      FUN_017e2900(*(undefined8 *)(param_1 + 0x930),0);
    }
    else {
      FUN_01493900(param_1,param_1 + 0xba8);
    }
  }
  if (iVar3 == 0) {
    cVar1 = FUN_01695e20(*(undefined8 *)(param_1 + 0x930));
    if ((cVar1 == '\0') && (cVar1 = FUN_01695e40(*(undefined8 *)(param_1 + 0x930)), cVar1 == '\0'))
    {
      FUN_01696180(*(undefined8 *)(param_1 + 0x930));
      lVar9 = FUN_010c2660(&DAT_010c2500,1,*(undefined8 *)(param_1 + 0x930));
      iVar3 = FUN_010c7360(lVar9);
      if (iVar3 == 0) {
        cVar1 = FUN_00c53220(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x4f8));
        if (cVar1 == '\0') {
          FUN_017e2760(*(undefined8 *)(param_1 + 0x930),2);
        }
        lVar6 = *(longlong *)(param_1 + 0x930);
        if (*(char *)(lVar6 + 0x540) != '\0') {
          FUN_017e9ff0(lVar6,*(undefined8 *)(lVar6 + 0x548));
        }
        cVar1 = FUN_017e28e0(*(undefined8 *)(param_1 + 0x930));
        if (cVar1 == '\0') {
          FUN_01115c40(*(undefined8 *)(param_1 + 0x930));
          if (*(longlong *)PTR_DAT_020025d8 != 0) {
            iVar3 = FUN_007fd7d0(param_1);
            FUN_00806af0(*(undefined8 *)PTR_DAT_020025d8,
                         iVar3 - *(int *)(*(longlong *)PTR_DAT_020025d8 + 0x98));
          }
          FUN_00f08d50(&local_198,9);
          FUN_00416910(local_190,local_198,0xff);
          FUN_01493bd0(param_1,local_190);
          FUN_010c2250(&local_1a0,0);
          FUN_00414ad0(param_1 + 0xba8,local_1a0);
        }
        else if (*(short *)(*(longlong *)(param_1 + 0x930) + 0x2d8) != 0x14) {
          FUN_01493900(param_1,param_1 + 0xba8);
        }
      }
      else {
        FUN_01493900(param_1,param_1 + 0xba8);
      }
    }
    else {
      FUN_00f08d50(local_90,9);
      FUN_00416910(local_190,local_90[0],0xff);
      FUN_01493bd0(param_1,local_190);
    }
  }
  if (lVar9 != 0) {
    FUN_00410f20(lVar9);
  }
  if (lVar5 != 0) {
    FUN_00410f20(lVar5);
  }
  if (*PTR_DAT_02004808 != '\0') {
    FUN_01495d20(param_1,uVar2);
  }
  if (param_2 == 2) {
    uVar4 = FUN_019a4600();
    FUN_0199e310(uVar4,0,1,0);
    FUN_017ea2d0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x550),
                 *(undefined8 *)(param_1 + 3000),10);
    cVar1 = FUN_017e2480(*(undefined8 *)(param_1 + 0x930));
    if (cVar1 != '\0') {
      FUN_01ca2aa0(*(undefined8 *)PTR_DAT_02004e40);
    }
  }
  cVar1 = FUN_017e28e0(*(undefined8 *)(param_1 + 0x930));
  if (cVar1 != '\0') {
    FUN_01498900(param_1,1);
  }
  FUN_00414560(&local_1a0,2);
  FUN_00414480(local_90);
  FUN_00414480(local_80);
  return cVar1 == '\0';
}

