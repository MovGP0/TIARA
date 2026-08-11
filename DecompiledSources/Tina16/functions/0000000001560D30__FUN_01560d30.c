/* Ghidra address: 01560d30 */
/* Ghidra symbol: FUN_01560d30 */


void FUN_01560d30(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  double *pdVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined1 local_1358 [32];
  undefined1 *local_1338;
  undefined1 *local_1330;
  longlong *local_1328;
  int local_1320;
  int local_131c;
  undefined8 local_1318 [253];
  double local_b30;
  undefined8 local_9e0 [209];
  undefined1 local_358;
  double local_200;
  undefined1 local_9a;
  undefined1 local_99;
  undefined8 local_98 [3];
  undefined1 local_79;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined8 local_48 [5];
  
  local_358 = 0;
  local_1358[0] = 0;
  puVar10 = local_9e0;
  for (lVar7 = 0x127; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_1318;
  for (lVar7 = 0x127; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_98[0] = 0;
  local_60 = 0;
  local_68 = 0;
  local_78[0] = 0;
  local_48[0] = 0;
  cVar1 = FUN_01995600(*(undefined8 *)(param_1 + 0x748),0,0);
  if (cVar1 == '\0') {
    FUN_015fcf20(L"Graph init error!",0,0,0);
  }
  else {
    local_1328 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x748),1,0);
    uVar2 = FUN_01d03160();
    local_58 = (uint)uVar2;
    uVar3 = FUN_01d3f2c0(local_1328);
    plVar5 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x748),uVar3,0);
    while (local_1328 = plVar5, local_1328 != (longlong *)0x0) {
      uVar2 = FUN_01d03160(local_1328);
      local_58 = (uint)uVar2;
      (**(code **)(*local_1328 + 0x288))(local_1328,local_98);
      cVar1 = FUN_0198a580(local_1328);
      plVar5 = local_1328;
      if (cVar1 == '\x04') {
        iVar4 = (**(code **)(*local_1328 + 0x1c8))();
        iVar8 = 0;
        if (-1 < iVar4 + -1) {
          do {
            local_131c = (**(code **)(*local_1328 + 0x210))(local_1328,iVar8);
            cVar1 = FUN_01d01970(local_1328);
            if ((cVar1 == '\0') ||
               (cVar1 = FUN_00e147f0(*(undefined8 *)(param_1 + 0x9c8),local_131c), cVar1 == '\0')) {
              FUN_01560640(local_1358,local_1328,local_131c);
            }
            else {
              iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x9c8) + 0x18) + 0x10);
              local_1320 = 0;
              if (-1 < iVar9 + -1) {
                do {
                  lVar7 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x9c8) + 0x18),
                                       local_1320);
                  if (*(int *)(lVar7 + 8) == local_131c) {
                    FUN_01560640(local_1358,local_1328,*(undefined4 *)(lVar7 + 0xc));
                  }
                  local_1320 = local_1320 + 1;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
            }
            iVar8 = iVar8 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        uVar3 = FUN_01d3f2c0(local_1328);
        FUN_01995800(*(undefined8 *)(param_1 + 0x748),uVar3,0);
        local_1328 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x748),1);
        plVar5 = (longlong *)0x0;
        if (local_1328 != (longlong *)0x0) {
          uVar3 = FUN_01d3f2c0(local_1328);
          plVar5 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x748),uVar3);
        }
      }
    }
    cVar1 = FUN_01569690(param_1);
    if (cVar1 != '\0') {
      plVar5 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x4b1);
      local_1328 = plVar5;
      FUN_01d38290(plVar5,1);
      local_1338 = &local_99;
      local_1330 = &local_9a;
      pdVar6 = (double *)FUN_01cfde70(plVar5,1,0,&local_79);
      FUN_01569cb0(param_1,local_9e0);
      FUN_01569cb0(param_1,local_1318);
      dVar11 = (local_200 / local_b30) / 80.0;
      if (*(char *)(param_1 + 0x953) != '\0') {
        dVar11 = (double)FUN_00f81cf0(*(undefined8 *)PTR_DAT_02005680);
      }
      *pdVar6 = 1.0 / dVar11;
      iVar4 = FUN_019954d0(*(undefined8 *)(param_1 + 0x748));
      (**(code **)(*plVar5 + 0x208))(plVar5,0,iVar4 + 1,0);
      FUN_019954b0(*(undefined8 *)(param_1 + 0x748),iVar4 + 1);
      FUN_017bf050(plVar5,0,L"interactive_clock");
      *(longlong **)(param_1 + 0x6c0) = local_1328;
      local_131c = (**(code **)(*local_1328 + 0x210))(local_1328,0);
      FUN_01560640(local_1358,local_1328,local_131c);
    }
  }
  FUN_00417840(local_1318,&DAT_01d0d0b8,2);
  FUN_00414480(local_98);
  FUN_00414480(local_78);
  FUN_00414560(&local_68,2);
  FUN_00414480(local_48);
  return;
}

