/* Ghidra address: 01c1ede0 */
/* Ghidra symbol: FUN_01c1ede0 */


undefined1 FUN_01c1ede0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  undefined1 local_d1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_d0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  local_e0 = param_3;
  FUN_00414610(param_2);
  local_d1 = 0;
  FUN_01c1e8b0(auStack_108,&local_40,local_res10[0],&local_38);
  FUN_00414b50(&local_30,local_40);
  if (local_30 != 0) {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar3 + 0x90))(plVar3);
    (**(code **)(*DAT_021114c8 + 0xb0))(DAT_021114c8,&DAT_01c1f30c,plVar3);
    iVar1 = (**(code **)(*plVar3 + 0x28))();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_50,iVar4);
        FUN_0043e1a0(&local_48,local_50);
        FUN_0043e1a0(&local_58,local_res10[0]);
        iVar2 = FUN_004170c0(local_48,local_58,1);
        if ((iVar2 < 1) || (iVar2 = FUN_004170c0(&DAT_01c1f320,local_res10[0],1), iVar2 != 0)) {
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_68,iVar4);
          FUN_0043e1a0(&local_60,local_68);
          FUN_0043e1a0(&local_70,local_30);
          iVar2 = FUN_004170c0(local_60,local_70,1);
          if ((0 < iVar2) && (iVar2 = FUN_004170c0(&DAT_01c1f320,local_30,1), iVar2 == 0))
          goto LAB_01c1f060;
        }
        else {
LAB_01c1f060:
          if (local_38 == 0) {
            FUN_01c1e440(&local_78,local_30);
            FUN_00414ad0(local_e0,local_78);
          }
          else {
            FUN_00414ad0(local_e0,local_38);
          }
          FUN_00441a10(&local_80,*local_e0);
          if (local_80 == 0) {
            FUN_00416ad0(local_e0,L".zip");
          }
          local_d1 = 1;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    (**(code **)(*plVar3 + 0x90))(plVar3);
    (**(code **)(*DAT_021114c8 + 0xb0))(DAT_021114c8,L"asIs",plVar3);
    iVar1 = (**(code **)(*plVar3 + 0x28))();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_90,iVar4);
        FUN_0043e1a0(&local_88,local_90);
        FUN_0043e1a0(&local_98,local_res10[0]);
        iVar2 = FUN_004170c0(local_88,local_98,1);
        if ((iVar2 < 1) || (iVar2 = FUN_004170c0(&DAT_01c1f320,local_res10[0],1), iVar2 != 0)) {
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_a8,iVar4);
          FUN_0043e1a0(&local_a0,local_a8);
          FUN_0043e1a0(&local_b0,local_30);
          iVar2 = FUN_004170c0(local_a0,local_b0,1);
          if ((0 < iVar2) && (iVar2 = FUN_004170c0(&DAT_01c1f320,local_30,1), iVar2 == 0))
          goto LAB_01c1f23f;
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_c0,iVar4);
          FUN_0043e1a0(&local_b8,local_c0);
          FUN_0043e1a0(&local_c8,local_38);
          iVar2 = FUN_004170c0(local_b8,local_c8,1);
          if (0 < iVar2) goto LAB_01c1f23f;
        }
        else {
LAB_01c1f23f:
          if (local_38 == 0) {
            FUN_01c1e440(&local_d0,local_30);
            FUN_00414ad0(local_e0,local_d0);
          }
          else {
            FUN_00414ad0(local_e0,local_38);
          }
          local_d1 = 1;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00410f20(plVar3);
  }
  FUN_00414560(&local_d0,0x15);
  FUN_00414480(local_res10);
  return local_d1;
}

