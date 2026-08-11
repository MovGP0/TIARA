/* Ghidra address: 01d095b0 */
/* Ghidra symbol: FUN_01d095b0 */


void FUN_01d095b0(longlong param_1,char param_2,longlong *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar5;
  undefined8 *puVar4;
  undefined4 uVar7;
  undefined4 *puVar6;
  undefined8 local_b8;
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
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  lVar3 = FUN_019a4600();
  *(undefined1 *)(lVar3 + 0x218) = 0;
  if (*(longlong *)PTR_DAT_02001d08 != 0) {
    cVar1 = FUN_017fea70(*(undefined8 *)PTR_DAT_02001d08);
    if (cVar1 != '\0') {
      FUN_017ff4f0(param_1,&local_10);
      if (param_4 == '\0') {
        FUN_01d08c80(param_1,&local_60,0);
        FUN_00416cd0(&local_18,5,L"InsertPart(",local_60,&DAT_01d09ce8,
                     *(undefined8 *)(param_1 + 0x98),&DAT_01d09c94);
        puVar4 = &local_20;
        puVar6 = &local_24;
        FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,&local_68,local_10,L"InsertPart",puVar4,puVar6,
                     &local_28);
        uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
        uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
        iVar2 = FUN_00416db0(local_18,local_68);
        if (iVar2 != 0) {
          FUN_00415dd0(&local_70,local_10,0);
          FUN_00415dd0(&local_78,local_20,0);
          FUN_00415dd0(&local_80,local_18,0);
          FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_70,local_78,local_80,
                       CONCAT44(uVar5,local_24),CONCAT44(uVar7,local_28));
          if (param_2 == '\0') {
            (**(code **)(*param_3 + 0x78))(param_3,local_18);
          }
          else {
            FUN_00415dd0(&local_88,local_18,0);
            FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_88,0,1);
          }
        }
        FUN_01d08c80(param_1,&local_90,0);
        FUN_00416cd0(&local_18,3,L"LocatePart(",local_90,&DAT_01d09c94);
        *(undefined1 *)(param_1 + 0x530) = 1;
        puVar4 = &local_20;
        puVar6 = &local_24;
        FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,&local_98,local_10,L"LocatePart",puVar4,puVar6,
                     &local_28);
        uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
        uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
        iVar2 = FUN_00416db0(local_18,local_98);
        if (iVar2 != 0) {
          FUN_00415dd0(&local_a0,local_10,0);
          FUN_00415dd0(&local_a8,local_20,0);
          FUN_00415dd0(&local_b0,local_18,0);
          FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_a0,local_a8,local_b0,
                       CONCAT44(uVar5,local_24),CONCAT44(uVar7,local_28));
          if (param_2 == '\0') {
            (**(code **)(*param_3 + 0x78))(param_3,local_18);
          }
          else {
            FUN_00415dd0(&local_b8,local_18,0);
            FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_b8,0,1);
          }
        }
      }
      else {
        FUN_01d08c80(param_1,&local_30,1);
        FUN_00416cd0(&local_18,3,L"MovePart(",local_30,&DAT_01d09c94);
        puVar4 = &local_20;
        puVar6 = &local_24;
        FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,&local_38,local_10,L"MovePart",puVar4,puVar6,
                     &local_28);
        uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
        uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
        iVar2 = FUN_00416db0(local_18,local_38);
        if (iVar2 != 0) {
          FUN_00415dd0(&local_40,local_10,0);
          FUN_00415dd0(&local_48,local_20,0);
          FUN_00415dd0(&local_50,local_18,0);
          FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_40,local_48,local_50,
                       CONCAT44(uVar5,local_24),CONCAT44(uVar7,local_28));
          if (param_2 == '\0') {
            (**(code **)(*param_3 + 0x78))(param_3,local_18);
          }
          else {
            FUN_00415dd0(&local_58,local_18,0);
            FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_58,0,1);
          }
        }
      }
    }
  }
  FUN_00414590(&local_b8,4);
  FUN_00414560(&local_98,2);
  FUN_00414590(&local_88,4);
  FUN_00414560(&local_68,2);
  FUN_00414590(&local_58,4);
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_20,3);
  return;
}

