/* Ghidra address: 0195b240 */
/* Ghidra symbol: FUN_0195b240 */


undefined8 * FUN_0195b240(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  byte bVar5;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30 [2];
  
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_01951d20(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x1a0) != *(char *)(param_3 + 0x1a0)) {
    FUN_00468530(&local_48,*(char *)(param_1 + 0x1a0),1);
    FUN_018036e0(local_30,&local_48);
    FUN_00416cd0(param_2,4,*param_2,L" Align=\"",local_30[0],&DAT_0195b76c);
  }
  FUN_01958eb0(*(undefined8 *)(param_1 + 0x1c0),&local_50,*(undefined8 *)(param_3 + 0x1c0));
  FUN_00416ad0(param_2,local_50);
  if (*(short *)(param_1 + 0x1a2) != *(short *)(param_3 + 0x1a2)) {
    FUN_00468530(&local_70,(longlong)*(short *)(param_1 + 0x1a2),0xfffffffffffffffe);
    FUN_018036e0(&local_58,&local_70);
    FUN_00416cd0(param_2,4,*param_2,L" Cursor=\"",local_58,&DAT_0195b76c);
  }
  if (*(char *)(param_1 + 0x218) != *(char *)(param_3 + 0x218)) {
    bVar5 = (*(byte *)(param_1 + 0x218) & 1) != 0;
    if ((*(byte *)(param_1 + 0x218) & 2) != 0) {
      bVar5 = bVar5 | 2;
    }
    if ((*(byte *)(param_1 + 0x218) & 4) != 0) {
      bVar5 = bVar5 | 4;
    }
    FUN_0043f750(&local_78,bVar5);
    FUN_00416cd0(param_2,4,*param_2,L" Visibility=\"",local_78,&DAT_0195b76c);
  }
  iVar4 = FUN_00416db0(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_3 + 0x1d0));
  if (iVar4 != 0) {
    FUN_01802f80(&local_80,*(undefined8 *)(param_1 + 0x1d0));
    FUN_00416cd0(param_2,4,*param_2,L" TagStr=\"",local_80,&DAT_0195b76c);
  }
  cVar1 = FUN_0195ce10(param_1);
  cVar2 = FUN_0195ce10(param_3);
  if (cVar1 != cVar2) {
    uVar3 = FUN_0195ce10(param_1);
    FUN_00468530(&local_a0,uVar3,1);
    FUN_018036e0(&local_88,&local_a0);
    FUN_00416cd0(param_2,4,*param_2,L" FillType=\"",local_88,&DAT_0195b76c);
  }
  (**(code **)(**(longlong **)(param_1 + 0x210) + 0x20))
            (*(longlong **)(param_1 + 0x210),&local_a8,*(undefined8 *)(param_3 + 0x210),L"Fill");
  FUN_00416ad0(param_2,local_a8);
  FUN_01956210(*(undefined8 *)(param_1 + 0x208),&local_b0,*(undefined8 *)(param_3 + 0x208),
               L"Hyperlink");
  FUN_00416ad0(param_2,local_b0);
  if (*(char *)(param_1 + 0xc4) != *(char *)(param_3 + 0xc4)) {
    bVar5 = (*(byte *)(param_1 + 0xc4) & 1) != 0;
    if ((*(byte *)(param_1 + 0xc4) & 2) != 0) {
      bVar5 = bVar5 | 2;
    }
    FUN_0043f750(&local_b8,bVar5);
    FUN_00416cd0(param_2,4,*param_2,L" Editable=\"",local_b8,&DAT_0195b76c);
  }
  FUN_00414560(&local_b8,3);
  FUN_00460ba0(&local_a0);
  FUN_00414560(&local_88,3);
  FUN_00460ba0(&local_70);
  FUN_00414560(&local_58,2);
  FUN_00460ba0(&local_48);
  FUN_00414480(local_30);
  return param_2;
}

