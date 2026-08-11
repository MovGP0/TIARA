/* Ghidra address: 013c5240 */
/* Ghidra symbol: FUN_013c5240 */


undefined1 FUN_013c5240(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_68;
  undefined8 local_60 [8];
  
  local_68 = 0;
  local_60[0] = 0;
  lVar7 = 0;
  uVar3 = *PTR_DAT_020052b0;
  lVar6 = *(longlong *)(param_1 + 8);
  uVar5 = FUN_017e1bd0(&DAT_017df868,1,0,1,0,0,param_3);
  *(undefined8 *)(param_1 + 8) = uVar5;
  if (lVar6 == 0) {
    FUN_017e9a20(uVar5,*(undefined8 *)(param_1 + 0x2c0),*(undefined8 *)(param_1 + 0x2c8));
  }
  else {
    FUN_017e9a30(uVar5,lVar6);
    FUN_00410f20(lVar6);
  }
  lVar6 = *(longlong *)(param_1 + 8);
  *(undefined1 *)(lVar6 + 0x8c8) = *(undefined1 *)(param_1 + 0x278);
  *(undefined1 *)(lVar6 + 0x8c9) = param_2;
  FUN_01695540(lVar6,*(undefined8 *)(param_1 + 0x2b0));
  FUN_01695da0(*(undefined8 *)(param_1 + 8),uVar3);
  FUN_016942f0(*(undefined8 *)(param_1 + 8));
  FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x550),0,
               *(undefined8 *)(param_1 + 0x2d0),0);
  FUN_013c0a90(*(undefined8 *)(param_1 + 0x280),*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x550))
  ;
  FUN_01115c40(*(undefined8 *)(param_1 + 8));
  FUN_017e40a0(*(undefined8 *)(param_1 + 8),1);
  lVar6 = FUN_013bdbe0(&DAT_013bda78,1,*(undefined8 *)(param_1 + 8));
  iVar4 = FUN_013bfdc0(lVar6);
  if (iVar4 != 0) {
    cVar2 = FUN_01695e60(*(undefined8 *)(param_1 + 8));
    if ((cVar2 == '\0') && (cVar2 = FUN_01695ee0(*(undefined8 *)(param_1 + 8)), cVar2 == '\0')) {
      FUN_017e2900(*(undefined8 *)(param_1 + 8),0);
    }
    else if (*(char *)(param_1 + 0x2b8) == '\0') {
      FUN_013c42f0(param_1,param_1 + 0x288);
    }
  }
  if (iVar4 == 0) {
    cVar2 = FUN_01695e20(*(undefined8 *)(param_1 + 8));
    if ((cVar2 == '\0') && (cVar2 = FUN_01695e40(*(undefined8 *)(param_1 + 8)), cVar2 == '\0')) {
      FUN_01696180(*(undefined8 *)(param_1 + 8));
      lVar7 = FUN_010c2660(&DAT_010c2500,1,*(undefined8 *)(param_1 + 8));
      iVar4 = FUN_010c7360(lVar7);
      if (iVar4 == 0) {
        cVar2 = FUN_00c53220(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x4f8));
        if (cVar2 == '\0') {
          FUN_017e2760(*(undefined8 *)(param_1 + 8),2);
        }
        cVar2 = FUN_017e28e0(*(undefined8 *)(param_1 + 8));
        if (cVar2 == '\0') {
          FUN_01115c40(*(undefined8 *)(param_1 + 8));
          FUN_010c2250(&local_68,0);
          FUN_00414ad0(param_1 + 0x288,local_68);
        }
        else {
          lVar1 = *(longlong *)(param_1 + 8);
          if (((*(char *)(lVar1 + 0x50c) == '\0') || (*(short *)(lVar1 + 0x2d8) != 0x103)) &&
             (*(short *)(lVar1 + 0x2d8) != 0x14)) {
            FUN_013c42f0(param_1,param_1 + 0x288);
          }
        }
      }
      else {
        FUN_013c42f0(param_1,param_1 + 0x288);
      }
    }
    else {
      FUN_00f08d50(local_60,9);
      FUN_0072d730(local_60[0],0xffffffff,0xffffffff);
    }
  }
  if (lVar7 != 0) {
    FUN_00410f20(lVar7);
  }
  if (lVar6 != 0) {
    FUN_00410f20(lVar6);
  }
  uVar3 = FUN_017e28e0(*(undefined8 *)(param_1 + 8));
  FUN_00414560(&local_68,2);
  return uVar3;
}

