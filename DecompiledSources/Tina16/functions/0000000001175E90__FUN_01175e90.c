/* Ghidra address: 01175e90 */
/* Ghidra symbol: FUN_01175e90 */


undefined4 FUN_01175e90(longlong *param_1)

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
  uVar4 = FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x800));
  *(undefined8 *)(*param_1 + 0xb0) = uVar4;
  uVar4 = FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x808));
  *(undefined8 *)(*param_1 + 0xb8) = uVar4;
  if (*(double *)(*param_1 + 0xb0) < *(double *)(*param_1 + 0xb8)) {
    uVar6 = 0;
    FUN_00526500(0x4000000000000000,0);
    iVar1 = FUN_0040c770();
    iVar2 = *(int *)PTR_DAT_02002710;
    *(int *)(*param_1 + 0xd4) = iVar2 / iVar1;
    uVar4 = FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x810),
                         (longlong)iVar2 % (longlong)iVar1 & 0xffffffff);
    *(undefined8 *)(*param_1 + 0xc0) = uVar4;
    if (*(double *)(*param_1 + 0xc0) < -0.001) {
      *(undefined4 *)(*param_1 + 0xdc) = 0;
    }
    else {
      *(undefined4 *)(*param_1 + 0xdc) = 1;
    }
    dVar5 = *(double *)(PTR_DAT_020040b8 + 0xb8) / *(double *)(PTR_DAT_020040b8 + 0xb0);
    if (dVar5 < 10.0) {
      *(undefined4 *)(*param_1 + 0xd8) = 1;
      *(undefined4 *)(*param_1 + 0xcc) = 0;
      *(undefined4 *)(*param_1 + 0xd0) = 0;
    }
    else {
      *(undefined4 *)(*param_1 + 0xd8) = 0;
      *(undefined4 *)(*param_1 + 0xcc) = 0;
      for (; 2.0 < dVar5; dVar5 = dVar5 / 10.0) {
        *(int *)(*param_1 + 0xcc) = *(int *)(*param_1 + 0xcc) + 1;
      }
      iVar2 = *(int *)(*param_1 + 0xd4) / *(int *)(*param_1 + 0xcc);
      *(int *)(*param_1 + 0xd0) = iVar2;
      *(int *)(*param_1 + 0xd4) = *(int *)(*param_1 + 0xcc) * iVar2 + 1;
      fVar3 = (float)FUN_00526700(0x41200000,CONCAT44(uVar6,(float)*(int *)(*param_1 + 0xcc)));
      *(double *)(*param_1 + 0xb8) = *(double *)(*param_1 + 0xb0) * (double)fVar3;
      FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x808),
                   *(undefined8 *)(*param_1 + 0xb8));
    }
    local_24 = 0;
  }
  else {
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x800),&local_18);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x808),&local_20);
    FUN_00416cd0(&local_10,4,L"Start freq ",local_18,L" >=  Stop Freq ",local_20);
    uVar4 = FUN_00416740(local_10);
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar4,L" ERROR",0x10);
    local_24 = 1;
    dVar5 = (double)FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x800));
    FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x808),dVar5 * 100.0);
  }
  FUN_00414560(&local_20,2);
  FUN_00414480(&local_10);
  return local_24;
}

