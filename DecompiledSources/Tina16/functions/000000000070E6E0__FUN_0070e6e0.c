/* Ghidra address: 0070e6e0 */
/* Ghidra symbol: FUN_0070e6e0 */


void FUN_0070e6e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  FUN_00786040(param_1,0);
  FUN_00785c20(param_1,param_2);
  FUN_00786040(param_1,1);
  cVar1 = FUN_0070e380(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],&local_38);
    iVar2 = FUN_004230a0(&local_38);
    local_30 = local_38 + iVar2 / 2;
    local_40 = (int)*(short *)(param_2 + 0x10);
    local_3c = (int)*(short *)(param_2 + 0x12);
    cVar1 = FUN_00423210(&local_38,&local_40);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],&local_38);
    iVar2 = FUN_004230a0(&local_38);
    local_38 = local_30 - iVar2 / 2;
    local_48 = (int)*(short *)(param_2 + 0x10);
    local_44 = (int)*(short *)(param_2 + 0x12);
    cVar1 = FUN_00423210(&local_38,&local_48);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x41) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x41) = 1;
    }
  }
  else {
    (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],&local_38);
    iVar2 = FUN_004230c0(&local_38);
    local_2c = local_34 + iVar2 / 2;
    local_50 = (int)*(short *)(param_2 + 0x10);
    local_4c = (int)*(short *)(param_2 + 0x12);
    cVar1 = FUN_00423210(&local_38,&local_50);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],&local_38);
    iVar2 = FUN_004230c0(&local_38);
    local_34 = local_2c - iVar2 / 2;
    local_58 = (int)*(short *)(param_2 + 0x10);
    local_54 = (int)*(short *)(param_2 + 0x12);
    cVar1 = FUN_00423210(&local_38,&local_58);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x41) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x41) = 1;
    }
  }
  (**(code **)(*param_1 + 0x58))(param_1);
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

