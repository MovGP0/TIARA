/* Ghidra address: 01a38350 */
/* Ghidra symbol: FUN_01a38350 */


undefined8 FUN_01a38350(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_res10 [3];
  undefined1 auStack_ad8 [32];
  undefined4 *local_ab8;
  undefined4 *local_ab0;
  undefined8 *local_aa8;
  undefined8 *local_aa0;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined8 local_a20 [22];
  undefined8 local_96f;
  longlong local_e8;
  undefined1 *local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_a58 = 0;
  local_a50 = 0;
  local_a48 = 0;
  local_a40 = 0;
  local_a38 = 0;
  local_a30 = 0;
  local_a28 = 0;
  puVar5 = local_a20;
  for (lVar4 = 0x127; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_e8 = 0;
  local_58 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  local_80 = (longlong *)0x0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_res10[0] = param_2;
  local_e0 = auStack_ad8;
  FUN_00414610(param_2);
  FUN_00bac3d0(&local_58);
  local_b8 = 0;
  cVar1 = (**(code **)(*local_58 + 0x170))(local_58,local_res10[0]);
  if (cVar1 != '\0') {
    (**(code **)(*local_58 + 0x100))(local_58,&local_e8);
    if (local_e8 != 0) {
      local_b8 = FUN_00f309b0(&LAB_00f23b78,1);
      local_50 = local_b8;
      FUN_00414480(&local_a0);
      FUN_01a35ab0(param_1,local_a20);
      FUN_00441920(&local_20,local_96f);
      (**(code **)(*local_58 + 0x100))(local_58,&local_60);
      (**(code **)(*local_60 + 0xd8))(local_60,&local_a28,L"table");
      FUN_0041b890(&local_60,local_a28,&DAT_01a38cd0);
      (**(code **)(*local_60 + 0xe8))(local_60,&local_78,&DAT_01a38cec);
      (**(code **)(*local_78 + 0x68))(local_78);
      (**(code **)(*local_78 + 0x70))(local_78,&local_a30);
      FUN_0041b890(&local_68,local_a30,&DAT_01a38cd0);
      while (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x100))(local_68,&local_28,&DAT_01a38d00);
        (**(code **)(*local_68 + 0x100))(local_68,&local_88,L"compid");
        iVar2 = FUN_00416db0(local_28,L"Outputs");
        if ((((iVar2 == 0) || (iVar2 = FUN_00416db0(local_28,L"Currents"), iVar2 == 0)) ||
            (iVar2 = FUN_00416db0(local_28,L"Other Voltages"), iVar2 == 0)) ||
           (iVar2 = FUN_00416db0(local_28,L"Nodal Voltages"), iVar2 == 0)) {
          iVar2 = FUN_00416db0(local_28,local_a0);
          if (iVar2 != 0) {
            local_c8 = FUN_00f33100(&LAB_00f256b8,1);
            FUN_0043e1a0(&local_a38,local_28);
            FUN_00f30e70(local_b8,local_a38,local_c8);
            FUN_00414b50(&local_a0,local_28);
          }
          (**(code **)(*local_68 + 0xe8))(local_68,&local_80,&DAT_01a38dc8);
          (**(code **)(*local_80 + 0x68))(local_80);
          (**(code **)(*local_80 + 0x70))(local_80,&local_a40);
          FUN_0041b890(&local_70,local_a40,&DAT_01a38cd0);
          local_a4 = 0;
          while (local_70 != (longlong *)0x0) {
            (**(code **)(*local_70 + 0x100))(local_70,&local_90,L"value");
            if (local_a4 == 0) {
              FUN_00414b50(&local_30,local_90);
            }
            else {
              FUN_00414b50(&local_38,local_90);
            }
            local_ab8 = &local_a8;
            local_ab0 = &local_ac;
            local_aa8 = &local_40;
            local_aa0 = &local_98;
            FUN_01a37fe0(param_1,local_28,local_90,local_a4);
            if (local_a4 == 1) {
              local_c0 = FUN_00f309b0(&LAB_00f23b78,1);
              iVar2 = FUN_00416db0(local_28,L"Nodal Voltages");
              if (iVar2 != 0) {
                uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,local_98);
                FUN_00f30e70(local_c0,L"label",uVar3);
              }
              uVar3 = FUN_00f2f680(&LAB_00f22f08,1,local_40);
              FUN_00f30e70(local_c0,L"value",uVar3);
              local_d0 = FUN_00f33100(&LAB_00f256b8,1);
              iVar2 = FUN_00416db0(local_28,L"Nodal Voltages");
              if (iVar2 == 0) {
                FUN_00f33660(local_d0,local_a8);
              }
              else {
                FUN_00f33660(local_d0,local_a8);
                FUN_00f33660(local_d0,local_ac);
              }
              FUN_00f30e70(local_c0,L"nodes",local_d0);
              FUN_00f33710(local_c8,local_c0);
            }
            (**(code **)(*local_80 + 0x70))(local_80,&local_a48);
            FUN_0041b890(&local_70,local_a48,&DAT_01a38cd0);
            local_a4 = local_a4 + 1;
          }
        }
        (**(code **)(*local_78 + 0x70))(local_78,&local_a50);
        FUN_0041b890(&local_68,local_a50,&DAT_01a38cd0);
      }
    }
  }
  local_50 = local_b8;
  FUN_00414480(&local_a58);
  FUN_00417840(&local_a50,&DAT_00b9f8e0,3);
  FUN_00414480(&local_a38);
  FUN_00417840(&local_a30,&DAT_00b9f8e0,2);
  FUN_00417740(local_a20,&DAT_01d0d0b8);
  FUN_0041b800(&local_e8);
  FUN_00414560(&local_a0,4);
  FUN_00417840(&local_80,&DAT_00b9f960,2);
  FUN_00417840(&local_70,&LAB_00b9fca0,3);
  FUN_0041b800(&local_58);
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res10);
  return local_50;
}

