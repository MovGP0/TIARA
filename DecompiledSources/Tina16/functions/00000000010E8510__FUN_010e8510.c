/* Ghidra address: 010e8510 */
/* Ghidra symbol: FUN_010e8510 */


void FUN_010e8510(longlong param_1,byte param_2,longlong param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined7 uVar10;
  undefined1 uVar11;
  bool bVar13;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined1 uVar12;
  
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  uVar12 = 0;
  uVar11 = 0;
  local_58 = 0;
  FUN_00414b50(&local_30,L"Measurement");
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
  uVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,0);
  puVar9 = &DAT_01cdd500;
  lVar6 = FUN_004113f0(uVar5,&DAT_01cdd500);
  bVar1 = *(byte *)(*(longlong *)(param_3 + 8) + 0x434);
  uVar10 = (undefined7)((ulonglong)puVar9 >> 8);
  if (bVar1 == 8) {
    if (param_2 < 6) {
      if (param_2 == 5) {
        local_58 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,CONCAT71(uVar10,1),param_3);
      }
      else if (param_2 < 2) {
        local_58 = FUN_01cc6f70(&PTR_FUN_01cbc030,CONCAT71(uVar10,1),param_3);
      }
      else if (param_2 == 2) {
        local_58 = FUN_01cc6f70(&PTR_FUN_010e4d20,CONCAT71(uVar10,1),param_3);
        lVar7 = FUN_004113f0(local_58,&PTR_FUN_010e4d20);
        *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)(param_1 + 0x118);
        *(undefined1 *)(lVar7 + 0x88) = *(undefined1 *)(param_1 + 0x120);
      }
      else {
        if (param_2 != 4) goto LAB_010e8c52;
        local_58 = FUN_01cc6f70(&PTR_FUN_01cbc850,CONCAT71(uVar10,1),param_3);
        uVar12 = 0;
      }
    }
    else if (param_2 == 6) {
      local_58 = FUN_01cc6f70(&PTR_FUN_01cb9c30,CONCAT71(uVar10,1),param_3);
      uVar12 = 1;
    }
    else if (param_2 == 7) {
      local_58 = FUN_01cc6f70(&PTR_FUN_01cbab10,CONCAT71(uVar10,1),param_3);
    }
    else {
      if (param_2 != 8) goto LAB_010e8c52;
      local_58 = FUN_01cc6f70(&PTR_FUN_01cb9c30,CONCAT71(uVar10,1),param_3);
    }
    FUN_00414b50(&local_30,L"Spectrum Analyzer");
    uVar11 = uVar12;
  }
  else {
    if (bVar1 < 8) {
      bVar13 = ((int)CONCAT71(uVar10,1) << (bVar1 & 0x1f) & 0x50U) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0x10U) != 0) {
        FUN_00414b50(&local_30,L"Signal Analyzer");
      }
      else {
        FUN_00414b50(&local_30,L"Network Analyzer");
      }
      if (param_2 < 7) {
        if (param_2 == 6) {
          local_58 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_3);
          uVar11 = 1;
        }
        else if (param_2 < 4) {
          if (param_2 == 3) {
            local_58 = FUN_01cc6f70(&PTR_FUN_01cb9268,1,param_3);
          }
          else if (param_2 < 2) {
            local_58 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_3);
          }
          else {
            if (param_2 != 2) goto LAB_010e8c52;
            local_58 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_3);
            uVar11 = 0;
          }
        }
        else if (param_2 == 4) {
          local_58 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_3);
        }
        else {
          if (param_2 != 5) goto LAB_010e8c52;
          local_58 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_3);
        }
      }
      else if (param_2 == 7) {
        local_58 = FUN_01cc6f70(&PTR_FUN_01cbab10,1,param_3);
      }
      else if (param_2 == 8) {
        local_58 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_3);
        uVar11 = 1;
        FUN_00414b50(&local_30,L"Network Analyzer");
      }
      else if (param_2 == 9) {
        local_58 = FUN_01cc6f70(&PTR_FUN_01cba688,1,param_3);
        uVar11 = 1;
        FUN_00414b50(&local_30,L"Network Analyzer");
      }
      else {
        if (param_2 != 10) goto LAB_010e8c52;
        local_58 = FUN_01cc9f30(&PTR_FUN_01cbae98,1,param_3);
        FUN_00414b50(&local_30,L"Logic Analyzer");
      }
    }
    else if (bVar1 == 3) {
      if (param_2 == 0xb) {
        local_58 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_3);
      }
      else if ((param_2 == 0xc) || (param_2 == 0xf)) {
        local_58 = FUN_01cc6f70(&PTR_FUN_01cba328,1,param_3);
      }
      else {
        local_58 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_3);
      }
      FUN_00414b50(&local_30,L"Oscilloscope");
    }
    else if (bVar1 == 0) {
      local_58 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_3);
      FUN_00414b50(&local_30,L"XY Recorder");
    }
    else if (bVar1 == 1) {
      local_58 = FUN_01cc6f70(&PTR_FUN_01cba328,1,param_3);
      if (param_2 == 0xc) {
        FUN_00414b50(&local_30,L"XY Recorder");
      }
      else if (param_2 == 0xf) {
        FUN_00414b50(&local_30,L"DC Parameter Analyzer");
      }
    }
  }
  uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x30))(*(longlong **)(lVar6 + 0x70),0);
  lVar7 = FUN_004113f0(uVar5,&DAT_01ccbf00);
  uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x30))(*(longlong **)(lVar6 + 0x78),0);
  lVar8 = FUN_004113f0(uVar5,&DAT_01ccbf00);
  FUN_00416ba0(local_40,*(undefined8 *)(lVar7 + 0xd8),*(undefined8 *)(lVar7 + 0xe0));
  uVar3 = FUN_01cd66b0(lVar7);
  FUN_00416ba0(&local_48,*(undefined8 *)(lVar8 + 0xd8),*(undefined8 *)(lVar8 + 0xe0));
  uVar4 = FUN_01cd66b0(lVar8);
  FUN_013e19a0(param_3,local_58,*(undefined1 *)(lVar6 + 0x58),local_40[0],
               *(undefined1 *)(lVar7 + 0x70),*(undefined1 *)(lVar7 + 0x80),uVar3,local_48,
               *(undefined1 *)(lVar8 + 0x70),*(undefined1 *)(lVar8 + 0x80),uVar4,uVar11,0,0,local_30
              );
LAB_010e8c52:
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  return;
}

