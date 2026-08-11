/* Ghidra address: 01358e20 */
/* Ghidra symbol: FUN_01358e20 */


void FUN_01358e20(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_017ff4f0(param_1,&local_30);
  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  uVar2 = uVar2 & 0xffff;
  if (uVar2 < 0x34) {
    if (uVar2 == 0x33) {
      (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_28);
      if (*local_28 == '\0') {
        FUN_00416cd0(&local_38,3,L"SetState(",local_30,L",0,0)");
      }
      else {
        FUN_00416cd0(&local_38,3,L"SetState(",local_30,L",1,0)");
      }
      puVar3 = &local_40;
      puVar5 = local_1c;
      FUN_0135ad60(DAT_02108128,local_50,local_30,L"SetState",puVar3,puVar5,&local_20);
      uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
      uVar4 = (undefined4)((ulonglong)puVar3 >> 0x20);
      iVar1 = FUN_00416db0(local_38,local_50[0]);
      if (iVar1 != 0) {
        FUN_00415dd0(&local_58,local_30,0);
        FUN_00415dd0(&local_60,local_40,0);
        FUN_00415dd0(&local_68,local_38,0);
        FUN_0135af50(DAT_02108128,local_58,local_60,local_68,CONCAT44(uVar4,local_1c[0]),
                     CONCAT44(uVar6,local_20));
        (**(code **)(*param_2 + 0x78))(param_2,local_38);
      }
      goto code_r0x01359363;
    }
    if (uVar2 != 0x2c) {
      if (uVar2 == 0x32) {
        (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_28);
        if (*local_28 == '\0') {
          FUN_00416cd0(&local_38,3,L"SetState(",local_30,L",0,0)");
        }
        else {
          FUN_00416cd0(&local_38,3,L"SetState(",local_30,L",1,0)");
        }
        puVar3 = &local_40;
        puVar5 = local_1c;
        FUN_0135ad60(DAT_02108128,&local_70,local_30,L"SetState",puVar3,puVar5,&local_20);
        uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
        uVar4 = (undefined4)((ulonglong)puVar3 >> 0x20);
        iVar1 = FUN_00416db0(local_38,local_70);
        if (iVar1 != 0) {
          FUN_00415dd0(&local_78,local_30,0);
          FUN_00415dd0(&local_80,local_40,0);
          FUN_00415dd0(&local_88,local_38,0);
          FUN_0135af50(DAT_02108128,local_78,local_80,local_88,CONCAT44(uVar4,local_1c[0]),
                       CONCAT44(uVar6,local_20));
          (**(code **)(*param_2 + 0x78))(param_2,local_38);
        }
      }
      goto code_r0x01359363;
    }
  }
  else {
    if (uVar2 == 0x3c) {
      FUN_00416cd0(&local_90,3,L"SetState(",local_30,L",0,0,0)");
      (**(code **)(*param_2 + 0x78))(param_2,local_90);
      goto code_r0x01359363;
    }
    if (1 < uVar2 - 0x460) goto code_r0x01359363;
  }
  FUN_00416cd0(&local_38,3,L"SetState(",local_30,&LAB_013594f4);
  puVar3 = &local_40;
  puVar5 = local_1c;
  FUN_0135ad60(DAT_02108128,&local_98,local_30,L"SetState",puVar3,puVar5,&local_20);
  uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
  uVar4 = (undefined4)((ulonglong)puVar3 >> 0x20);
  iVar1 = FUN_00416db0(local_38,local_98);
  if (iVar1 != 0) {
    FUN_00415dd0(&local_a0,local_30,0);
    FUN_00415dd0(&local_a8,local_40,0);
    FUN_00415dd0(&local_b0,local_38,0);
    FUN_0135af50(DAT_02108128,local_a0,local_a8,local_b0,CONCAT44(uVar4,local_1c[0]),
                 CONCAT44(uVar6,local_20));
    (**(code **)(*param_2 + 0x78))(param_2,local_38);
  }
code_r0x01359363:
  FUN_00414590(&local_b0,3);
  FUN_00414560(&local_98,2);
  FUN_00414590(&local_88,3);
  FUN_00414480(&local_70);
  FUN_00414590(&local_68,3);
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  return;
}

