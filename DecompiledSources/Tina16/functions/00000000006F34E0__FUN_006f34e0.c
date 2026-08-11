/* Ghidra address: 006f34e0 */
/* Ghidra symbol: FUN_006f34e0 */


void FUN_006f34e0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  code *pcVar11;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  local_38 = 0;
  FUN_00658210(param_1,param_2);
  plVar2 = *(longlong **)(param_2 + 0x10);
  cVar4 = FUN_006f37e0(param_1);
  if ((cVar4 == '\0') || (*plVar2 != param_1[0xa8])) goto code_r0x006f377a;
  iVar6 = (int)plVar2[2];
  if (iVar6 < -0x132) {
    if ((iVar6 == -0x133) || (iVar6 == -0x147)) {
      puVar3 = *(uint **)(*(longlong *)(param_2 + 0x10) + 0x20);
      if ((*puVar3 & 1) != 0) {
        lVar7 = FUN_006f8f70(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x18));
        if ((int)*(uint *)(lVar7 + 0x2c) < (int)puVar3[1]) {
          uVar1 = *(uint *)(lVar7 + 0x28);
          if ((0 < (int)uVar1) && ((int)uVar1 <= (int)puVar3[1])) {
            puVar3[1] = uVar1;
          }
        }
        else {
          puVar3[1] = *(uint *)(lVar7 + 0x2c);
        }
        FUN_006ed840(lVar7,puVar3[1]);
      }
      goto code_r0x006f377a;
    }
    if (iVar6 != -0x145) {
      if (iVar6 == -0x137) {
        *(undefined1 *)((longlong)param_1 + 0x5a1) = 1;
      }
      goto code_r0x006f377a;
    }
  }
  else if (iVar6 != -0x131) {
    if (iVar6 == -5) {
      uVar5 = thunk_FUN_041a8b50();
      uVar5 = FUN_004239b0(uVar5);
      local_20 = FUN_00422ce0(uVar5);
      uVar8 = FUN_0065b870(param_1);
      uVar9 = FUN_0064d3a0(param_1,&local_20);
      lVar7 = thunk_FUN_039d75c5(uVar8,uVar9);
      if (lVar7 != 0) {
        lVar10 = FUN_0065b870(param_1);
        if (lVar7 != lVar10) {
          FUN_004169f0(&local_38,0x50);
          uVar5 = 0;
          if (local_38 != 0) {
            uVar5 = *(undefined4 *)(local_38 + -4);
          }
          uVar8 = FUN_00416740(local_38);
          uVar5 = thunk_FUN_03b3efbf(lVar7,uVar8,uVar5);
          FUN_004169f0(&local_38,uVar5);
          iVar6 = FUN_00416db0(local_38,L"SysHeader32");
          if (iVar6 == 0) {
            local_30 = FUN_0064d3a0(param_1,&local_20);
            uVar8 = FUN_0065b870(param_1);
            iVar6 = thunk_FUN_04119211(uVar8,0);
            local_30 = CONCAT44(local_30._4_4_,(int)local_30 + iVar6);
            lVar7 = FUN_004701a0(lVar7,0x1206,1,&local_30);
            if (-1 < lVar7) {
              uVar8 = FUN_006f8f70(param_1,local_24);
              pcVar11 = (code *)FUN_00411550(param_1,0xffa8);
              (*pcVar11)(param_1,uVar8,&local_30);
            }
          }
        }
      }
    }
    goto code_r0x006f377a;
  }
  lVar7 = *(longlong *)(param_2 + 0x10);
  uVar8 = FUN_006f8f70(param_1,*(undefined4 *)(lVar7 + 0x18));
  uVar9 = FUN_0065b870(param_1);
  uVar5 = thunk_FUN_041b2403(uVar9,0x101d,(longlong)*(int *)(lVar7 + 0x18),0);
  FUN_006ed840(uVar8,uVar5);
  cVar4 = (**(code **)(*param_1 + 0x328))(param_1,0,0);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
code_r0x006f377a:
  FUN_00414480(&local_38);
  return;
}

