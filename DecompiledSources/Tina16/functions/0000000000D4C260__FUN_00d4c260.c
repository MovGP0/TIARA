/* Ghidra address: 00d4c260 */
/* Ghidra symbol: FUN_00d4c260 */


void FUN_00d4c260(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_00788d60(param_1,0);
  FUN_00788400(param_1,param_2);
  FUN_00788d60(param_1,1);
  cVar1 = FUN_00d4bf40(param_1);
  if (cVar1 == '\0') {
    FUN_00787be0(param_1[3],&local_28);
    iVar2 = FUN_004230a0(&local_28);
    local_20 = local_28 + iVar2 / 2;
    local_30 = (int)*(short *)(param_2 + 0x10);
    local_2c = (int)*(short *)(param_2 + 0x12);
    cVar1 = FUN_00423210(&local_28,&local_30);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    FUN_00787be0(param_1[3],&local_28);
    iVar2 = FUN_004230a0(&local_28);
    local_28 = local_20 - iVar2 / 2;
    local_38 = (int)*(short *)(param_2 + 0x10);
    local_34 = (int)*(short *)(param_2 + 0x12);
    cVar1 = FUN_00423210(&local_28,&local_38);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x79) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x79) = 1;
    }
  }
  else {
    FUN_00787be0(param_1[3],&local_28);
    iVar2 = FUN_004230c0(&local_28);
    local_1c = local_24 + iVar2 / 2;
    local_40 = (int)*(short *)(param_2 + 0x10);
    local_3c = (int)*(short *)(param_2 + 0x12);
    cVar1 = FUN_00423210(&local_28,&local_40);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    FUN_00787be0(param_1[3],&local_28);
    iVar2 = FUN_004230c0(&local_28);
    local_24 = local_1c - iVar2 / 2;
    local_48 = (int)*(short *)(param_2 + 0x10);
    local_44 = (int)*(short *)(param_2 + 0x12);
    cVar1 = FUN_00423210(&local_28,&local_48);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x79) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x79) = 1;
    }
  }
  (**(code **)(*param_1 + 0x60))(param_1);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

