/* Ghidra address: 013331f0 */
/* Ghidra symbol: FUN_013331f0 */


undefined8 FUN_013331f0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 local_78;
  longlong local_70;
  int local_64;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong local_50 [4];
  
  local_60 = 0;
  local_78 = 0;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  bVar1 = true;
  FUN_01cc5c60(*(undefined8 *)PTR_DAT_020038e8);
  while( true ) {
    lVar5 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_020038e8);
    if (bVar1) {
      bVar1 = false;
      local_70 = lVar5;
    }
    if (lVar5 == 0) break;
    FUN_01cc0ae0(lVar5,&local_60);
    (**(code **)(*plVar4 + 0x78))(plVar4,local_60);
  }
  plVar6 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8940,1,*(undefined8 *)PTR_DAT_020038e8);
  iVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,local_70,0);
  if (iVar3 == (uint)*(ushort *)(param_1 + 0x28) << 3) {
    local_50[0] = FUN_0132c700();
    local_78 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
    FUN_0132cd20(local_78);
    while (cVar2 = (**(code **)(*plVar6 + 0x40))(plVar6,local_58,*(undefined8 *)(local_50[0] + 8)),
          cVar2 != '\0') {
      uVar7 = (uint)*(ushort *)(param_1 + 0x28);
      local_64 = 0;
      if (-1 < (int)(uVar7 - 1)) {
        do {
          FUN_0132daf0(local_50[0],local_64);
          dVar8 = (double)FUN_0040c850();
          FUN_0132daf0(local_78,local_64);
          dVar9 = (double)FUN_0040c850();
          if (dVar9 < dVar8) {
            uVar10 = FUN_0132daf0(local_50[0],local_64);
            FUN_0132dbe0(local_78,local_64,uVar10);
          }
          local_64 = local_64 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    FUN_0132cce0(local_50);
    FUN_00410f20(plVar6);
    FUN_00410f20(plVar4);
  }
  FUN_00414480(&local_60);
  return local_78;
}

