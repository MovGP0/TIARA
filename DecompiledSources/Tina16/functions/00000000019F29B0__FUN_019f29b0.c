/* Ghidra address: 019f29b0 */
/* Ghidra symbol: FUN_019f29b0 */


undefined8
FUN_019f29b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
            undefined8 *param_5,longlong *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  int iVar8;
  bool bVar9;
  undefined8 local_res18 [2];
  undefined8 local_3e0;
  undefined1 local_3d8 [256];
  undefined8 local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8 [2];
  undefined1 local_293 [17];
  longlong local_282;
  longlong *local_278;
  byte local_168 [21];
  byte local_153 [17];
  longlong local_142;
  char local_139;
  longlong *local_138;
  
  local_3e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  bVar9 = false;
  if (param_6 != (longlong *)0x0) {
    pbVar6 = local_168;
    for (lVar5 = 0x28; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pbVar6 = *param_5;
      param_5 = param_5 + 1;
      pbVar6 = pbVar6 + 8;
    }
    iVar8 = 0;
    while ((iVar2 = (**(code **)(*param_6 + 0x28))(param_6), iVar8 < iVar2 && (!bVar9))) {
      puVar4 = (undefined8 *)(**(code **)(*param_6 + 0x30))(param_6,iVar8);
      puVar7 = local_2a8;
      for (lVar5 = 0x28; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      iVar2 = FUN_00414f50(local_168,local_2a8,(ulonglong)local_168[0] + 1);
      if (((iVar2 == 0) &&
          (iVar2 = FUN_00414f50(local_153,local_293,(ulonglong)local_153[0] + 1), iVar2 == 0)) &&
         (cVar1 = FUN_0043e2c0(*(undefined8 *)(local_142 + 9),*(undefined8 *)(local_282 + 9),
                               *(undefined2 *)(local_142 + 0x23)), cVar1 != '\0')) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (local_139 != '\0') {
        if (bVar9) {
          (**(code **)(*local_138 + 0x38))(local_138,&local_2c0);
          lVar5 = local_2c0;
          (**(code **)(*local_278 + 0x38))(local_278,&local_2c8);
          if (lVar5 == local_2c8) {
            bVar9 = true;
          }
          else if ((lVar5 == 0) || (local_2c8 == 0)) {
            bVar9 = false;
          }
          else {
            iVar2 = FUN_0043e420(lVar5,local_2c8);
            bVar9 = iVar2 == 0;
          }
        }
        else {
          bVar9 = false;
        }
      }
      if (bVar9) {
        (**(code **)(*param_6 + 0x18))(param_6,param_2,iVar8);
      }
      iVar8 = iVar8 + 1;
    }
  }
  if (!bVar9) {
    if (param_4 == 0xc) {
      FUN_00416760(&local_2d0,s_BCDEFGHIJKLMMOQRSTUVX_01fc43d1[0xb]);
      FUN_00416ba0(&local_2b8,local_2d0,&DAT_019f2dc8);
    }
    else if (param_4 == 0xd) {
      FUN_00416760(&local_2d8,s_BCDEFGHIJKLMMOQRSTUVX_01fc43d1[0xc]);
      FUN_00416ba0(&local_2b8,local_2d8,&DAT_019f2dd8);
    }
    else {
      FUN_00416760(&local_2b8,(&DAT_01fc43d0)[param_4]);
    }
    FUN_00416cd0(&local_3e0,3,local_2b8,&LAB_019f2de8,local_res18[0]);
    uVar3 = FUN_019ee110(param_1,local_3e0);
    FUN_0040e840(local_3d8,uVar3);
    FUN_004169a0(&local_2b0,local_3d8);
    FUN_00416cd0(&local_2b0,5,local_2b8,&LAB_019f2de8,local_res18[0],&LAB_019f2de8,local_2b0);
    FUN_00416cd0(local_res18,3,local_2b8,&LAB_019f2de8,local_res18[0]);
    FUN_00414ad0(param_2,local_2b0);
  }
  FUN_00414480(&local_3e0);
  FUN_00414560(&local_2d8,6);
  FUN_00414480(local_res18);
  return param_2;
}

