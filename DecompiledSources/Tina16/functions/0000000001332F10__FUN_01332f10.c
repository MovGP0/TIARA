/* Ghidra address: 01332f10 */
/* Ghidra symbol: FUN_01332f10 */


undefined8 FUN_01332f10(longlong param_1,char param_2)

{
  bool bVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  double dVar9;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90 [2];
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  double local_68;
  double local_60 [6];
  
  local_90[0] = 0;
  local_a0 = 0;
  plVar8 = (longlong *)0x0;
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  bVar1 = true;
  local_78 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_80 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  uVar6 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_70 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  FUN_0132cd20(uVar6);
  if (*(longlong *)PTR_DAT_020038e8 != 0) {
    FUN_01cc5c60(*(undefined8 *)PTR_DAT_020038e8);
    while( true ) {
      lVar7 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_020038e8);
      if (bVar1) {
        bVar1 = false;
        local_98 = lVar7;
      }
      if (lVar7 == 0) break;
      FUN_01cc0ae0(lVar7,local_90);
      (**(code **)(*plVar5 + 0x78))(plVar5,local_90[0]);
    }
    if (local_98 != 0) {
      plVar8 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8940,1,*(undefined8 *)PTR_DAT_020038e8);
      iVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,local_98,0);
      if (iVar4 == (uint)*(ushort *)(param_1 + 0x28) << 3) {
        (**(code **)(*plVar8 + 0x40))(plVar8,local_60,*(undefined8 *)(local_78 + 8));
        dVar2 = local_60[0];
        if (param_2 == '\x02') {
          local_78 = FUN_0132d3c0(local_78,local_78);
          dVar2 = local_60[0];
        }
        while (local_68 = local_60[0],
              cVar3 = (**(code **)(*plVar8 + 0x40))(plVar8,&local_68,*(undefined8 *)(local_80 + 8)),
              cVar3 != '\0') {
          dVar9 = local_68 - local_60[0];
          if (param_2 == '\x02') {
            local_80 = FUN_0132d3c0(local_80,local_80);
          }
          local_70 = FUN_0132cd70(local_70,local_78,local_80);
          FUN_0132d750(local_70,dVar9 * 0.5);
          uVar6 = FUN_0132cd70(uVar6,uVar6,local_70);
          lVar7 = local_78;
          local_78 = local_80;
          local_80 = lVar7;
          local_60[0] = local_68;
        }
        if (1e-15 < local_68 - dVar2) {
          FUN_0132d900(uVar6,local_68 - dVar2);
          local_a0 = uVar6;
        }
      }
    }
  }
  FUN_0132cce0(&local_70);
  FUN_0132cce0(&local_78);
  FUN_0132cce0(&local_80);
  FUN_00410f20(plVar8);
  FUN_00410f20(plVar5);
  FUN_00414480(local_90);
  return local_a0;
}

