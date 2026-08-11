/* Ghidra address: 01958eb0 */
/* Ghidra symbol: FUN_01958eb0 */


undefined8 * FUN_01958eb0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30[0] = 0;
  FUN_00414480(param_2);
  bVar2 = *(int *)(param_1 + 0x28) != *(int *)(param_3 + 0x28);
  if (bVar2) {
    FUN_0043f750(local_30,*(int *)(param_1 + 0x28));
    FUN_00416cd0(param_2,4,*param_2,L" Frame.Color=\"",local_30[0],&DAT_01959424);
  }
  if (*(char *)(param_1 + 0x2c) != *(char *)(param_3 + 0x2c)) {
    FUN_00468820(&local_50,*(char *)(param_1 + 0x2c));
    FUN_018036e0(&local_38,&local_50);
    FUN_00416cd0(param_2,4,*param_2,L" Frame.DropShadow=\"",local_38,&DAT_01959424);
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_3 + 0x38)) {
    FUN_0043f750(&local_58,*(int *)(param_1 + 0x38));
    FUN_00416cd0(param_2,4,*param_2,L" Frame.ShadowColor=\"",local_58,&DAT_01959424);
  }
  cVar1 = FUN_0180c8c0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_3 + 0x30));
  if (cVar1 != '\0') {
    FUN_00448430(&local_60,*(undefined8 *)(param_1 + 0x30));
    FUN_00416cd0(param_2,4,*param_2,L" Frame.ShadowWidth=\"",local_60,&DAT_01959424);
  }
  bVar3 = *(char *)(param_1 + 0x3c) != *(char *)(param_3 + 0x3c);
  if (bVar3) {
    FUN_00468530(&local_80,*(char *)(param_1 + 0x3c),1);
    FUN_018036e0(&local_68,&local_80);
    FUN_00416cd0(param_2,4,*param_2,L" Frame.Style=\"",local_68,&DAT_01959424);
  }
  if (*(char *)(param_1 + 0x3d) != *(char *)(param_3 + 0x3d)) {
    bVar4 = (*(byte *)(param_1 + 0x3d) & 1) != 0;
    if ((*(byte *)(param_1 + 0x3d) & 2) != 0) {
      bVar4 = bVar4 | 2;
    }
    if ((*(byte *)(param_1 + 0x3d) & 4) != 0) {
      bVar4 = bVar4 | 4;
    }
    if ((*(byte *)(param_1 + 0x3d) & 8) != 0) {
      bVar4 = bVar4 | 8;
    }
    FUN_0043f750(&local_88,bVar4);
    FUN_00416cd0(param_2,4,*param_2,L" Frame.Typ=\"",local_88,&DAT_01959424);
  }
  cVar1 = FUN_0180c8c0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_3 + 0x40));
  if (cVar1 != '\0') {
    FUN_00448430(&local_90,*(undefined8 *)(param_1 + 0x40));
    FUN_00416cd0(param_2,4,*param_2,L" Frame.Width=\"",local_90,&DAT_01959424);
  }
  FUN_01958800(*(undefined8 *)(param_1 + 8),&local_98,*(undefined8 *)(param_3 + 8),L"Frame.LeftLine"
               ,bVar2,bVar3,cVar1);
  FUN_00416ad0(param_2,local_98);
  FUN_01958800(*(undefined8 *)(param_1 + 0x10),&local_a0,*(undefined8 *)(param_3 + 0x10),
               L"Frame.TopLine",bVar2,bVar3,cVar1);
  FUN_00416ad0(param_2,local_a0);
  FUN_01958800(*(undefined8 *)(param_1 + 0x18),&local_a8,*(undefined8 *)(param_3 + 0x18),
               L"Frame.RightLine",bVar2,bVar3,cVar1);
  FUN_00416ad0(param_2,local_a8);
  FUN_01958800(*(undefined8 *)(param_1 + 0x20),&local_b0,*(undefined8 *)(param_3 + 0x20),
               L"Frame.BottomLine",bVar2,bVar3,cVar1);
  FUN_00416ad0(param_2,local_b0);
  FUN_00414560(&local_b0,6);
  FUN_00460ba0(&local_80);
  FUN_00414560(&local_68,3);
  FUN_00460ba0(&local_50);
  FUN_00414560(&local_38,2);
  return param_2;
}

