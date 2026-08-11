/* Ghidra address: 0070eab0 */
/* Ghidra symbol: FUN_0070eab0 */


void FUN_0070eab0(longlong *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  FUN_00786bc0(param_1,param_2);
  FUN_00785c20(param_1,param_2);
  cVar1 = *(char *)((longlong)param_1 + 0x42);
  cVar2 = *(char *)((longlong)param_1 + 0x43);
  cVar3 = FUN_0070e380(param_1);
  if (cVar3 == '\0') {
    (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],&local_48);
    iVar4 = FUN_004230a0(&local_48);
    local_40 = local_48 + iVar4 / 2;
    local_50 = (int)*(short *)(param_2 + 0x10);
    local_4c = (int)*(short *)(param_2 + 0x12);
    cVar3 = FUN_00423210(&local_48,&local_50);
    if (cVar3 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x42) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x42) = 1;
    }
    (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],&local_48);
    iVar4 = FUN_004230a0(&local_48);
    local_48 = local_40 - iVar4 / 2;
    local_58 = (int)*(short *)(param_2 + 0x10);
    local_54 = (int)*(short *)(param_2 + 0x12);
    cVar3 = FUN_00423210(&local_48,&local_58);
    if (cVar3 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x43) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x43) = 1;
    }
  }
  else {
    (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],&local_48);
    iVar4 = FUN_004230c0(&local_48);
    local_3c = local_44 + iVar4 / 2;
    local_60 = (int)*(short *)(param_2 + 0x10);
    local_5c = (int)*(short *)(param_2 + 0x12);
    cVar3 = FUN_00423210(&local_48,&local_60);
    if (cVar3 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x42) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x42) = 1;
    }
    (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],&local_48);
    iVar4 = FUN_004230c0(&local_48);
    local_44 = local_3c - iVar4 / 2;
    local_68 = (int)*(short *)(param_2 + 0x10);
    local_64 = (int)*(short *)(param_2 + 0x12);
    cVar3 = FUN_00423210(&local_48,&local_68);
    if (cVar3 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x43) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x43) = 1;
    }
  }
  if ((cVar1 != *(char *)((longlong)param_1 + 0x42)) &&
     (cVar2 != *(char *)((longlong)param_1 + 0x43))) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

