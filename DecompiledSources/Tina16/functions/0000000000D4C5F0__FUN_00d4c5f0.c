/* Ghidra address: 00d4c5f0 */
/* Ghidra symbol: FUN_00d4c5f0 */


void FUN_00d4c5f0(longlong *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
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
  
  FUN_0078a020(param_1,param_2);
  FUN_00788400(param_1,param_2);
  cVar1 = *(char *)((longlong)param_1 + 0x7a);
  cVar2 = *(char *)((longlong)param_1 + 0x7b);
  cVar3 = FUN_00d4bf40(param_1);
  if (cVar3 == '\0') {
    FUN_00787be0(param_1[3],&local_38);
    iVar4 = FUN_004230a0(&local_38);
    local_30 = local_38 + iVar4 / 2;
    local_40 = (int)*(short *)(param_2 + 0x10);
    local_3c = (int)*(short *)(param_2 + 0x12);
    cVar3 = FUN_00423210(&local_38,&local_40);
    if (cVar3 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
    }
    FUN_00787be0(param_1[3],&local_38);
    iVar4 = FUN_004230a0(&local_38);
    local_38 = local_30 - iVar4 / 2;
    local_48 = (int)*(short *)(param_2 + 0x10);
    local_44 = (int)*(short *)(param_2 + 0x12);
    cVar3 = FUN_00423210(&local_38,&local_48);
    if (cVar3 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x7b) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
    }
  }
  else {
    FUN_00787be0(param_1[3],&local_38);
    iVar4 = FUN_004230c0(&local_38);
    local_2c = local_34 + iVar4 / 2;
    local_50 = (int)*(short *)(param_2 + 0x10);
    local_4c = (int)*(short *)(param_2 + 0x12);
    cVar3 = FUN_00423210(&local_38,&local_50);
    if (cVar3 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
    }
    FUN_00787be0(param_1[3],&local_38);
    iVar4 = FUN_004230c0(&local_38);
    local_34 = local_2c - iVar4 / 2;
    local_58 = (int)*(short *)(param_2 + 0x10);
    local_54 = (int)*(short *)(param_2 + 0x12);
    cVar3 = FUN_00423210(&local_38,&local_58);
    if (cVar3 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x7b) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
    }
  }
  if ((cVar1 != *(char *)((longlong)param_1 + 0x7a)) &&
     (cVar2 != *(char *)((longlong)param_1 + 0x7b))) {
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

