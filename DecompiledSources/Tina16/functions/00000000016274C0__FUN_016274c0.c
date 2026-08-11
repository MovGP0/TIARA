/* Ghidra address: 016274c0 */
/* Ghidra symbol: FUN_016274c0 */


/* WARNING: Type propagation algorithm not settling */

void FUN_016274c0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                 int param_5,longlong param_6,char param_7,char param_8)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  int local_88;
  int local_84;
  undefined8 local_80;
  longlong local_78 [9];
  ushort local_2a;
  
  local_80 = 0;
  local_78[8] = 0;
  local_78[7] = 0;
  local_78[6] = 0;
  local_78[5] = 0;
  local_78[4] = 0;
  local_78[3] = 0;
  local_78[2] = 0;
  local_78[1] = 0;
  local_98 = param_1;
  local_90 = param_4;
  FUN_00414480(local_78 + 3);
  sVar3 = (**(code **)(*local_98 + 0xf8))(local_98);
  if (param_7 == '\0') {
    FUN_00414b50(local_78 + 6,L"<internal comp. processed later>");
  }
  else {
    FUN_00414b50(local_78 + 6,*(undefined8 *)(*(longlong *)(local_90 + 0x13980) + 0x660));
  }
  cVar2 = FUN_01d3d530(sVar3);
  if ((cVar2 == '\0') && (cVar2 = FUN_01d3d590(sVar3), cVar2 == '\0')) {
    iVar6 = 0;
  }
  else {
    iVar6 = 2;
  }
  iVar4 = (**(code **)(*param_2 + 0x28))();
  local_88 = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_78 + 8,local_88);
      local_84 = FUN_0043fc00(local_78[8]);
      if (local_88 < iVar6) {
        bVar7 = local_88 != 0;
        if (bVar7) {
          FUN_01d3d920(local_98,9,0,&local_2a);
          (**(code **)(*local_98 + 0x2d0))(local_98,local_2a,local_78);
        }
        else {
          FUN_01d3d920(local_98,9,0,&local_2a);
          plVar1 = local_98;
          (**(code **)(*local_98 + 0x2d0))(local_98,local_2a,local_78);
          FUN_01d3d920(local_98,9,local_2a + 1,&local_2a);
          (**(code **)(*plVar1 + 0x2d0))(plVar1,local_2a,local_78);
        }
        *(short *)(local_78[0] + 0x1f) = (short)local_84;
        FUN_01643f90(local_90,local_98,local_84,!bVar7);
      }
      else {
        cVar2 = FUN_01d3d590(sVar3);
        if (cVar2 == '\0') {
          iVar5 = local_88 - iVar6;
        }
        else {
          iVar5 = FUN_01627110(local_88 - iVar6,sVar3);
        }
        if (sVar3 == 0x39) {
          local_84 = FUN_01627390(auStack_b8,local_98,iVar5);
        }
        FUN_016271b0(local_98,iVar5,local_84,local_90);
      }
      if ((param_7 != '\0') && (*(int *)(local_90 + 0x70) < local_84)) {
        *(int *)(local_90 + 0x70) = local_84;
      }
      if (local_88 < param_5) {
        FUN_0043f750(&local_80,local_84);
        FUN_00416ad0(local_78 + 3,local_80);
      }
      local_88 = local_88 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00416ba0(local_78 + 2,L"B_AMSReserved",local_78[3]);
  if ((param_7 != '\0') && (param_6 != 0)) {
    FUN_00414ad0(param_6 + 0x30,local_78[2]);
  }
  if (param_8 != '\0') {
    FUN_0163de40(local_90,local_98,local_78[2]);
  }
  if (param_6 != 0) {
    FUN_016296d0(param_6,local_78[2]);
  }
  FUN_00414480(&local_80);
  FUN_00414560(local_78 + 1,8);
  return;
}

