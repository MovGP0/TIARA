/* Ghidra address: 017c1dd0 */
/* Ghidra symbol: FUN_017c1dd0 */


undefined1 FUN_017c1dd0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  longlong *local_38;
  undefined1 local_21;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_21 = 0;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_017bf4c8,1,*(undefined8 *)PTR_DAT_02004030);
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = FUN_004b6930(&PTR_FUN_00478280,1);
  cVar1 = (**(code **)(*param_1 + 600))(param_1,0);
  if (cVar1 != '\0') {
    FUN_017c4360(param_1[0x7c],local_38);
  }
  cVar1 = (**(code **)(*param_1 + 600))(param_1,1);
  if (cVar1 != '\0') {
    FUN_017c4360(param_1[0x7d],local_40);
  }
  *(undefined1 *)((longlong)local_38 + 0x49) = 0;
  FUN_004b67b0(local_38,1);
  (**(code **)(*local_38 + 0x88))(local_38,local_40);
  (**(code **)(**(longlong **)(local_20[0xdb] + 0x4f0) + 0x10))
            (*(longlong **)(local_20[0xdb] + 0x4f0),local_38);
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  FUN_004169a0(&local_58,param_1 + 0x5b);
  FUN_0064de00(local_20[0xdb],local_58);
  (**(code **)(*(longlong *)local_20[0xd6] + 0x268))((longlong *)local_20[0xd6],(char)param_1[0x7b])
  ;
  uVar4 = FUN_017c3740(param_1);
  (**(code **)(*(longlong *)local_20[0xe1] + 0x128))
            ((longlong *)local_20[0xe1],
             CONCAT71((int7)((ulonglong)uVar4 >> 8),(char)uVar4 == '\0') & 0xffffffff);
  (**(code **)(*(longlong *)local_20[0xe1] + 0x268))
            ((longlong *)local_20[0xe1],*(undefined1 *)((longlong)param_1 + 0x3da));
  uVar4 = FUN_017c3740(param_1);
  (**(code **)(*(longlong *)local_20[0xdd] + 0x128))
            ((longlong *)local_20[0xdd],
             CONCAT71((int7)((ulonglong)uVar4 >> 8),(char)uVar4 == '\0') & 0xffffffff);
  (**(code **)(*(longlong *)local_20[0xdd] + 0x268))
            ((longlong *)local_20[0xdd],(char)param_1[0x7f] != '\0');
  uVar4 = FUN_017c3740(param_1);
  (**(code **)(*(longlong *)local_20[0xde] + 0x128))
            ((longlong *)local_20[0xde],
             CONCAT71((int7)((ulonglong)uVar4 >> 8),(char)uVar4 == '\0') & 0xffffffff);
  (**(code **)(*(longlong *)local_20[0xde] + 0x268))
            ((longlong *)local_20[0xde],*(undefined1 *)((longlong)param_1 + 0x3dc));
  uVar4 = FUN_017c3740(param_1);
  (**(code **)(*(longlong *)local_20[0xdf] + 0x128))
            ((longlong *)local_20[0xdf],
             CONCAT71((int7)((ulonglong)uVar4 >> 8),(char)uVar4 == '\0') & 0xffffffff);
  uVar4 = FUN_017c3740(param_1);
  (**(code **)(*(longlong *)local_20[0xe0] + 0x128))
            ((longlong *)local_20[0xe0],
             CONCAT71((int7)((ulonglong)uVar4 >> 8),(char)uVar4 == '\0') & 0xffffffff);
  (**(code **)(*(longlong *)local_20[0xdf] + 0x268))
            ((longlong *)local_20[0xdf],*(char *)((longlong)param_1 + 0x3f9) == '\0');
  uVar4 = (**(code **)(*(longlong *)local_20[0xdf] + 0x260))((longlong *)local_20[0xdf]);
  (**(code **)(*(longlong *)local_20[0xe0] + 0x268))
            ((longlong *)local_20[0xe0],
             CONCAT71((int7)((ulonglong)uVar4 >> 8),(char)uVar4 == '\0') & 0xffffffff);
  iVar3 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar3 == 1) {
    local_21 = 1;
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    FUN_0064dd90(local_20[0xdb],&local_60);
    FUN_00416910(param_1 + 0x5b,local_60,0xff);
    uVar2 = (**(code **)(*(longlong *)local_20[0xd6] + 0x260))((longlong *)local_20[0xd6]);
    *(undefined1 *)(param_1 + 0x7b) = uVar2;
    uVar2 = (**(code **)(*(longlong *)local_20[0xe1] + 0x260))((longlong *)local_20[0xe1]);
    *(undefined1 *)((longlong)param_1 + 0x3da) = uVar2;
    *(undefined1 *)((longlong)param_1 + 0x3db) = uVar2;
    cVar1 = (**(code **)(*(longlong *)local_20[0xdd] + 0x260))((longlong *)local_20[0xdd]);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x7f) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x7f) = 1;
    }
    uVar2 = (**(code **)(*(longlong *)local_20[0xde] + 0x260))((longlong *)local_20[0xde]);
    *(undefined1 *)((longlong)param_1 + 0x3dc) = uVar2;
    uVar2 = (**(code **)(*(longlong *)local_20[0xe0] + 0x260))((longlong *)local_20[0xe0]);
    *(undefined1 *)((longlong)param_1 + 0x3f9) = uVar2;
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    cVar1 = FUN_017c3740(param_1);
    if ((cVar1 != '\0') && (*(longlong *)PTR_DAT_02004e40 != 0)) {
      FUN_004169a0(&local_68,param_1 + 0x5b);
      FUN_0199ec70(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),param_1,local_68);
    }
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_68);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  return local_21;
}

