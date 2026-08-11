/* Ghidra address: 01560640 */
/* Ghidra symbol: FUN_01560640 */


void FUN_01560640(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
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
  undefined8 local_30 [2];
  undefined4 local_20;
  byte local_1a;
  byte local_19;
  
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_48 = 0;
  local_50 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  uVar4 = FUN_015755e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1360) + 0x8d0),param_3,
                       param_1 + 0x1328);
  *(undefined1 *)(param_1 + 0x1307) = uVar4;
  if (*(char *)(param_1 + 0x1307) == '\0') {
    uVar6 = FUN_01574ae0(&DAT_01572e00,1,param_3);
    *(undefined8 *)(param_1 + 0x1328) = uVar6;
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1360) + 0x8d0),
                 *(undefined8 *)(param_1 + 0x1328));
  }
  bVar3 = false;
  if (*(int *)(param_1 + 0x1300) == 4) {
    (**(code **)(*param_2 + 0x288))(param_2,&local_38);
    FUN_00415dd0(&local_40,local_38,0);
    FUN_015f1b30(local_30,local_40,0xfffffffd,0);
    FUN_00416880(param_1 + 0x12f8,local_30[0]);
    (**(code **)(*param_2 + 0x288))(param_2,&local_58);
    FUN_00415dd0(&local_60,local_58,0);
    FUN_015f1890(&local_50,local_60,*(longlong *)(param_1 + 0x1360) + 0x960,param_3,0);
    FUN_00416880(&local_68,local_50);
    FUN_0043e1a0(&local_48,local_68);
    FUN_00414b50(param_1 + 0x12f0,local_48);
    FUN_0155fe70(*(undefined8 *)(param_1 + 0x1360),&local_70,*(undefined8 *)(param_1 + 0x12f0));
    FUN_00414b50(param_1 + 0x12f0,local_70);
    (**(code **)(*param_2 + 0x2d0))(param_2,0,param_1 + 0x1320);
    (**(code **)(*param_2 + 0x2d0))(param_2,1,param_1 + 0x1318);
    local_19 = **(byte **)(param_1 + 0x1320);
    local_1a = **(byte **)(param_1 + 0x1318);
    bVar3 = false;
  }
  else {
    cVar5 = FUN_0160e4d0(*(undefined8 *)(*(longlong *)(param_1 + 0x1360) + 0x18),param_3,1,0,
                         &local_20);
    if (cVar5 == '\0') {
      cVar5 = FUN_0160e4d0(*(undefined8 *)(*(longlong *)(param_1 + 0x1360) + 0x18),param_3,2,0,
                           &local_20);
      if (cVar5 != '\0') {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1360) + 0x18);
        uVar6 = (**(code **)(*plVar2 + 0x30))(plVar2,local_20);
        *(undefined8 *)(param_1 + 0x12e8) = uVar6;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1360) + 0x18);
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_88,local_20);
        FUN_00414b50(param_1 + 0x12e0,local_88);
        bVar3 = true;
        local_19 = 1;
        local_1a = 0;
        cVar5 = FUN_01560320(*(undefined8 *)(param_1 + 0x1360),*(undefined8 *)(param_1 + 0x12e8),
                             *(undefined8 *)(param_1 + 0x12e0),param_3,param_1 + 0x1310,
                             param_1 + 0x1308);
        if (cVar5 == '\0') {
          FUN_0043f750(&local_90,*(undefined4 *)(*(longlong *)(param_1 + 0x1360) + 0xb4));
          FUN_00416ba0(param_1 + 0x12f0,&DAT_01560d10,local_90);
          piVar1 = (int *)(*(longlong *)(param_1 + 0x1360) + 0xb4);
          *piVar1 = *piVar1 + 1;
        }
        else {
          FUN_00414b50(param_1 + 0x12f0,*(undefined8 *)(param_1 + 0x1310));
          FUN_01560610(param_1,*(undefined8 *)(param_1 + 0x1308),&local_19,&local_1a);
        }
        FUN_00414b50(param_1 + 0x12f8,*(undefined8 *)(param_1 + 0x12f0));
        *(undefined4 *)(*(longlong *)(param_1 + 0x1360) + 0x960) = 0xffffffff;
      }
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1360) + 0x18);
      uVar6 = (**(code **)(*plVar2 + 0x30))(plVar2,local_20);
      *(undefined8 *)(param_1 + 0x12e8) = uVar6;
      bVar3 = true;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1360) + 0x20);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_80,local_20);
      FUN_0043e1a0(&local_78,local_80);
      FUN_00414b50(param_1 + 0x12f0,local_78);
      FUN_00414b50(param_1 + 0x12f8,*(undefined8 *)(param_1 + 0x12f0));
      *(undefined4 *)(*(longlong *)(param_1 + 0x1360) + 0x960) = 0xffffffff;
      local_19 = 2;
      local_1a = 0;
    }
  }
  if (*(int *)(param_1 + 0x1300) == 4 || bVar3) {
    lVar7 = FUN_00410e60(&DAT_01572be8,1);
    FUN_00416ba0(lVar7 + 8,L"top_",*(undefined8 *)(param_1 + 0x12f0));
    FUN_00414ad0(lVar7 + 0x10,*(undefined8 *)(param_1 + 0x12f8));
    *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(*(longlong *)(param_1 + 0x1360) + 0x960);
    *(uint *)(lVar7 + 0x1c) = (uint)local_19;
    *(uint *)(lVar7 + 0x20) = (uint)local_1a;
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1328) + 0x30),lVar7);
  }
  FUN_00414560(&local_90,6);
  FUN_004144d0(&local_60);
  FUN_00414480(&local_58);
  FUN_004144d0(&local_50);
  FUN_00414480(&local_48);
  FUN_004144d0(&local_40);
  FUN_00414480(&local_38);
  FUN_004144d0(local_30);
  return;
}

