/* Ghidra address: 011762d0 */
/* Ghidra symbol: FUN_011762d0 */


undefined4 FUN_011762d0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  uVar4 = FUN_00b90090(*(undefined8 *)(DAT_020412f0 + 0x750));
  *(undefined8 *)(*param_1 + 0xa8) = uVar4;
  uVar4 = FUN_00b90090(*(undefined8 *)(DAT_020412f0 + 0x748));
  *(undefined8 *)(*param_1 + 0xb0) = uVar4;
  if (*(double *)(*param_1 + 0xa8) < *(double *)(*param_1 + 0xb0)) {
    uVar6 = 0;
    FUN_00526500(0x4000000000000000,0);
    iVar1 = FUN_0040c770();
    iVar2 = *(int *)PTR_DAT_02002710;
    *(int *)(*param_1 + 0xcc) = iVar2 / iVar1;
    uVar4 = FUN_00b90090(*(undefined8 *)(DAT_020412f0 + 0x758),
                         (longlong)iVar2 % (longlong)iVar1 & 0xffffffff);
    *(undefined8 *)(*param_1 + 0xb8) = uVar4;
    if (*(double *)(*param_1 + 0xb8) < -0.001) {
      *(undefined4 *)(*param_1 + 0xd4) = 0;
    }
    else {
      *(undefined4 *)(*param_1 + 0xd4) = 1;
    }
    dVar5 = *(double *)(*param_1 + 0xb0) / *(double *)(*param_1 + 0xa8);
    if (dVar5 < 10.0) {
      *(undefined4 *)(*param_1 + 0xd0) = 1;
      *(undefined4 *)(*param_1 + 0xc4) = 0;
      *(undefined4 *)(*param_1 + 200) = 0;
    }
    else {
      *(undefined4 *)(*param_1 + 0xd0) = 0;
      *(undefined4 *)(*param_1 + 0xc4) = 0;
      for (; 2.0 < dVar5; dVar5 = dVar5 / 10.0) {
        *(int *)(*param_1 + 0xc4) = *(int *)(*param_1 + 0xc4) + 1;
      }
      iVar2 = *(int *)(*param_1 + 0xcc) / *(int *)(*param_1 + 0xc4);
      *(int *)(*param_1 + 200) = iVar2;
      *(int *)(*param_1 + 0xcc) = *(int *)(*param_1 + 0xc4) * iVar2 + 1;
      fVar3 = (float)FUN_00526700(0x41200000,CONCAT44(uVar6,(float)*(int *)(*param_1 + 0xc4)));
      *(double *)(*param_1 + 0xb0) = *(double *)(*param_1 + 0xa8) * (double)fVar3;
      FUN_00b90440(*(undefined8 *)(DAT_020412f0 + 0x748),*(undefined8 *)(*param_1 + 0xb0));
    }
    local_24 = 0;
  }
  else {
    FUN_0064dd90(*(undefined8 *)(DAT_020412f0 + 0x750),&local_18);
    FUN_0064dd90(*(undefined8 *)(DAT_020412f0 + 0x748),&local_20);
    FUN_00416cd0(&local_10,4,L"Start freq ",local_18,L" >=  Stop Freq ",local_20);
    uVar4 = FUN_00416740(local_10);
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar4,L" ERROR",0x10);
    dVar5 = (double)FUN_00b90090(*(undefined8 *)(DAT_020412f0 + 0x750));
    FUN_00b90440(*(undefined8 *)(DAT_020412f0 + 0x748),dVar5 * 100.0);
    local_24 = 1;
  }
  FUN_00414560(&local_20,2);
  FUN_00414480(&local_10);
  return local_24;
}

