/* Ghidra address: 0134d990 */
/* Ghidra symbol: FUN_0134d990 */


undefined1 FUN_0134d990(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  undefined1 auStack_a48 [32];
  double local_a28;
  ulonglong local_a20;
  ulonglong local_a18;
  undefined8 local_a10;
  undefined1 local_a08;
  undefined1 local_a00;
  undefined8 local_9f8;
  code *local_9e0;
  undefined8 local_9d8;
  undefined1 *local_9d0;
  longlong local_9c0;
  longlong local_9b8;
  longlong *local_9b0;
  undefined1 local_998 [2108];
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined8 local_151;
  double local_10f;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  char local_31;
  char local_19;
  
  local_9d0 = auStack_a48;
  FUN_00417580(local_998,&DAT_01d0d0b8);
  local_19 = '\0';
  local_31 = 0;
  *PTR_DAT_02002ce0 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_00417c40(local_998,PTR_DAT_02004010,&DAT_01d0d0b8);
  uVar3 = FUN_019a4600();
  local_a28 = (double)CONCAT71(local_a28._1_7_,4);
  local_a20 = local_a20 & 0xffffffffffffff00;
  local_a18 = 0;
  local_a10 = 0;
  local_a08 = 0;
  local_a00 = 1;
  local_9f8 = 0;
  uVar3 = FUN_0133d3e0(&PTR_FUN_0133c678,1,uVar3,6);
  *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148) = uVar3;
  FUN_01331bf0(*(undefined8 *)PTR_DAT_02003c48);
  FUN_01331510(*(undefined8 *)PTR_DAT_02003c48);
  *(undefined1 *)(*(longlong *)PTR_DAT_02003c48 + 0xf1) = 1;
  FUN_01340600(4,0,*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148));
  FUN_016f1c10(*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148),6);
  local_9b0 = (longlong *)
              FUN_01339620(&PTR_FUN_01338b58,1,*(undefined8 *)PTR_DAT_02004030,
                           *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148));
  iVar2 = (**(code **)(*local_9b0 + 0x2d0))(local_9b0);
  local_31 = iVar2 == 2;
  FUN_00410f20(local_9b0);
  FUN_01331490(*(undefined8 *)PTR_DAT_02003c48);
  lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
  FUN_00417c40(local_998,lVar5 + 0x5d8,&DAT_01d0d0b8);
  *(undefined1 *)(lVar5 + 0x5db) = 0;
  *(undefined8 *)(lVar5 + 0x695) = 0x3ff0000000000000;
  local_9b8 = lVar5 + 0x5d8;
  *(undefined1 *)(lVar5 + 0x885) = local_15a;
  *(undefined1 *)(lVar5 + 0x884) = local_15b;
  *(undefined1 *)(lVar5 + 0x887) = local_15c;
  if (1e+30 < local_10f) {
    local_10f = 0.0;
  }
  *(double *)(lVar5 + 0x888) = local_10f;
  *(undefined8 *)(lVar5 + 0x890) = local_151;
  bVar6 = local_31 == '\0';
  if (bVar6) {
    local_48 = *(double *)(*(longlong *)PTR_DAT_02003c48 + 200);
    lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
    *(double *)(lVar5 + 0x388) = local_48;
    *(double *)(lVar5 + 0x13a0) = local_48;
    lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
    *(double *)(lVar5 + 0x13a0) = local_48 / 40.0;
    *(double *)(lVar5 + 0x1398) = local_48;
  }
  lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
  *(undefined1 *)(lVar5 + 0x13b0) = 1;
  if (bVar6) {
    lVar4 = FUN_019a4600();
    local_a28 = 0.0;
    local_a20 = CONCAT71(local_a20._1_7_,1);
    local_a18 = local_a18 & 0xffffffffffffff00;
    FUN_017cc620(lVar5,3,0,*(undefined8 *)(lVar4 + 0x360));
    FUN_016d7180(*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148),0,0);
    FUN_01340be0(*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148));
    FUN_01af2a70(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0xf10),
                 FUN_013411e0);
    lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
    lVar4 = *(longlong *)(lVar5 + 0xf10);
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 200);
    FUN_01af29b0(lVar4,*(undefined1 *)(lVar5 + 0x5dc));
    FUN_01af29d0(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0xf10),1);
    lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
    if (*(char *)(lVar5 + 0x325) == '\0') {
      FUN_01af25b0(*(undefined8 *)(lVar5 + 0xf10),0,&LAB_0134e698,4);
    }
    else {
      FUN_01af25b0(*(undefined8 *)(lVar5 + 0xf10),0,&DAT_0134e694,1);
    }
    FUN_01af2ae0(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0xf10));
  }
  if (bVar6) {
    if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0xf18) != '\0') {
      local_9d8 = *(undefined8 *)PTR_DAT_02004e40;
      local_9e0 = FUN_01c88f60;
      FUN_00f83540(&local_9e0,*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148),500);
    }
    local_19 = *(char *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0xf18);
    *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0xf18) = 0;
    *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0xb0) =
         *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0xc0);
    cVar1 = FUN_01333420(*(undefined8 *)PTR_DAT_02003c48,0);
    local_31 = cVar1 == '\0';
    if (!(bool)local_31) {
      local_50 = FUN_0132c700(*(undefined2 *)(*(longlong *)PTR_DAT_02003c48 + 0x28));
      local_58 = FUN_0132c700(*(undefined2 *)(*(longlong *)PTR_DAT_02003c48 + 0x28));
      *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0x388) =
           *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 200);
      FUN_01332750(*(undefined8 *)PTR_DAT_02003c48,local_50);
      local_58 = FUN_01333d00(*(undefined8 *)PTR_DAT_02003c48,local_50);
      lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
      uVar3 = FUN_016ed780(*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148),6);
      *(undefined8 *)(lVar5 + 0x428) = uVar3;
      dVar7 = (double)FUN_016ed780(lVar5,6);
      *(double *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0x388) =
           dVar7 + *(double *)(*(longlong *)PTR_DAT_02003c48 + 0xc0);
      lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
      if ((*(char *)(lVar5 + 0x49c) != '\x01') &&
         (*(double *)(lVar5 + 0x428) <= *(double *)(*(longlong *)PTR_DAT_02003c48 + 200) &&
          *(double *)(*(longlong *)PTR_DAT_02003c48 + 200) != *(double *)(lVar5 + 0x428))) {
        FUN_01af2ac0(*(undefined8 *)(lVar5 + 0xf10));
        lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
        *(undefined8 *)(*(longlong *)(lVar5 + 0xf10) + 0x18) =
             *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0xc0);
        local_9c0 = lVar5 + 0x5d8;
        *(double *)(lVar5 + 0x890) = local_48;
        lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
        *(char *)(lVar5 + 0xf18) = local_19;
        FUN_01b10ee0(*(undefined8 *)(lVar5 + 0x4b8),0,local_48);
        FUN_01342880(4,*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148),0,0);
      }
    }
  }
  if (local_19 != '\0') {
    local_9d8 = *(undefined8 *)PTR_DAT_02004e40;
    local_9e0 = FUN_01c88f60;
    FUN_00f83590(&local_9e0);
    FUN_01c88f60(*(undefined8 *)PTR_DAT_02004e40,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148));
  }
  FUN_016d7a10(*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148));
  if (*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) != 0) {
    FUN_019af4b0(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0xa0));
    if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0x49c) == '\x01' ||
        local_31 != '\0') {
      FUN_017cc920(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148));
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
      if ((*(char *)(lVar5 + 0x49c) != '\x01') && (*(char *)(lVar5 + 0x884) != '\0')) {
        local_a28 = local_48;
        local_a20 = 0;
        FUN_017d0c90(lVar5,*(undefined8 *)(lVar5 + 0xb0),0,*(undefined8 *)(lVar5 + 0x888));
      }
      FUN_013d2f60(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0xb0),0,0)
      ;
    }
  }
  FUN_0132cce0(&local_50);
  FUN_0132cce0(&local_58);
  lVar5 = FUN_004097b0();
  if ((lVar5 != 0) && (*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) != 0)) {
    FUN_017cc920(*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148));
    local_31 = '\x01';
  }
  if ((local_31 == '\0') &&
     ((*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) == 0 ||
      (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0x49c) != '\x01')))) {
    local_31 = 0;
  }
  else {
    local_31 = 1;
  }
  FUN_013335a0(*(undefined8 *)PTR_DAT_02003c48);
  FUN_00417c40(PTR_DAT_02004010,local_998,&DAT_01d0d0b8);
  FUN_00417740(local_998,&DAT_01d0d0b8);
  return local_31;
}

