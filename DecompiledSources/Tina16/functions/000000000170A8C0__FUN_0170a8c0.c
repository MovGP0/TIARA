/* Ghidra address: 0170a8c0 */
/* Ghidra symbol: FUN_0170a8c0 */


void FUN_0170a8c0(longlong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  int local_33c;
  int local_32c;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  longlong local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [8];
  int local_2b0;
  undefined4 uStack_2ac;
  
  local_320 = 0;
  local_328 = 0;
  local_318 = 0;
  local_308 = 0;
  local_310 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  local_2e0 = 0;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  FUN_00417580(local_2b8,&DAT_00432b90);
  local_32c = 0;
  uVar11 = 0;
  uVar10 = 0;
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))();
  local_33c = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                (*(longlong **)(param_1 + 0x38),&local_2c8,local_33c);
      FUN_004414c0(&local_2c0,local_2c8,L".TLD");
      cVar2 = FUN_00440a20(local_2c0,1);
      if (cVar2 != '\0') {
        if (param_2 == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                    (*(longlong **)(param_1 + 0x38),&local_2d8,local_33c);
          FUN_004414c0(&local_2d0,local_2d8,L".IND");
          cVar2 = FUN_00440a20(local_2d0,1);
          if (cVar2 == '\0') goto LAB_0170aa60;
          bVar1 = false;
        }
        else {
LAB_0170aa60:
          bVar1 = true;
        }
        if (!bVar1) {
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                    (*(longlong **)(param_1 + 0x38),&local_2e0,local_33c);
          uVar4 = FUN_00440970(local_2e0);
          dVar12 = (double)FUN_00442290(uVar4);
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                    (*(longlong **)(param_1 + 0x38),&local_2f0,local_33c);
          FUN_004414c0(&local_2e8,local_2f0,L".IND");
          uVar4 = FUN_00440970(local_2e8);
          dVar13 = (double)FUN_00442290(uVar4);
          bVar1 = dVar13 < dVar12;
        }
        if (bVar1) {
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                    (*(longlong **)(param_1 + 0x38),&local_2f8,local_33c);
          FUN_00441230(local_2f8,0x20,local_2b8);
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                    (*(longlong **)(param_1 + 0x38),&local_300,local_33c);
          (**(code **)(*plVar6 + 0x80))(plVar6,local_300,CONCAT44(uStack_2ac,local_2b0));
          local_32c = local_32c + local_2b0;
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                    (*(longlong **)(param_1 + 0x38),&local_310,local_33c);
          FUN_00441920(&local_308,local_310);
          uVar8 = 0;
          if (local_308 != 0) {
            uVar8 = *(uint *)(local_308 + -4);
          }
          uVar11 = uVar11 & 0xff;
          if ((int)uVar11 <= (int)uVar8) {
            uVar11 = uVar8;
          }
          FUN_004412c0(local_2b8);
        }
      }
      uVar10 = (undefined1)uVar11;
      local_33c = local_33c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar9 = 0;
  iVar3 = (**(code **)(*plVar6 + 0x28))();
  local_33c = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_318,local_33c);
      uVar7 = FUN_016acb70(&DAT_016ac6b0,1,local_318,local_32c,iVar9,uVar10);
      FUN_00410f20(uVar7);
      iVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,local_33c);
      iVar9 = iVar9 + iVar5;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_328,local_33c);
      FUN_004414c0(&local_320,local_328,L".IND");
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                (*(longlong **)(param_1 + 0x30),local_320);
      local_33c = local_33c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(plVar6);
  FUN_00414560(&local_328,0xe);
  FUN_00417740(local_2b8,&DAT_00432b90);
  return;
}

