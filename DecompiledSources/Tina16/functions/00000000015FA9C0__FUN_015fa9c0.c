/* Ghidra address: 015fa9c0 */
/* Ghidra symbol: FUN_015fa9c0 */


void FUN_015fa9c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480 [66];
  undefined1 local_269 [513];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_498 = 0;
  local_4a0 = 0;
  local_4a8 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar6 = *(int *)(*(longlong *)(param_3 + 0x9b8) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_3 + 0x9b8),iVar5);
      uVar4 = FUN_01565d40(lVar3);
      FUN_017ff4f0(uVar4,&local_50);
      FUN_01565cf0(lVar3,local_480);
      FUN_00415dd0(&local_68,local_480[0],0);
      if (*(char *)(lVar3 + 0x38) == '\0') {
        FUN_004425e0(local_269,local_68);
        uVar4 = _get_lcd_string(param_1,local_269);
        FUN_00415430(&local_488,uVar4,0);
        FUN_00416880(&local_48,local_488);
        FUN_00416cd0(&local_48,5,L"SetState(",local_50,&DAT_015fad58,local_48,&DAT_015fad6c);
        puVar7 = &local_60;
        puVar9 = &local_2c;
        FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,&local_490,local_50,L"SetState",puVar7,puVar9,
                     &local_30);
        uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
        uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
        iVar1 = FUN_00416db0(local_48,local_490);
        if (iVar1 != 0) {
          FUN_00415dd0(&local_498,local_50,0);
          FUN_00415dd0(&local_4a0,local_60,0);
          FUN_00415dd0(&local_4a8,local_48,0);
          FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_498,local_4a0,local_4a8,
                       CONCAT44(uVar8,local_2c),CONCAT44(uVar10,local_30));
          (**(code **)(*plVar2 + 0x78))(plVar2,local_48);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (0 < iVar6) {
    FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,plVar2,0,1);
  }
  FUN_00410f20(plVar2);
  FUN_015fa560();
  FUN_00414590(&local_4a8,3);
  FUN_00414480(&local_490);
  FUN_004144d0(&local_488);
  FUN_00414480(local_480);
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,6);
  return;
}

