/* Ghidra address: 00abfa30 */
/* Ghidra symbol: FUN_00abfa30 */


void FUN_00abfa30(longlong param_1,longlong *param_2,int param_3,int param_4,undefined1 param_5,
                 byte param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_34 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
  local_34 = local_34 - param_4;
  local_38 = (int)*(undefined8 *)(param_1 + 0x14);
  local_2c = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  local_2c = local_2c - param_4;
  local_30 = (int)*(undefined8 *)(param_1 + 0x1c);
  local_38 = local_38 + param_3;
  local_30 = local_30 + param_3;
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != 0x1fffffff) {
    if (((param_6 & 2) != 0) && (cVar1 = FUN_00781870(), cVar1 != '\0')) {
      uVar4 = FUN_00781840();
      iVar2 = FUN_007793c0(uVar4,iVar2);
    }
    uVar3 = FUN_005fbf20(iVar2);
    FUN_005fdab0(param_2[0x10],uVar3 | *(uint *)PTR_DAT_02005078);
    FUN_005fdcb0(param_2[0x10],0);
    (**(code **)(*param_2 + 0xa8))(param_2,&local_38);
  }
  local_48 = local_38 - *(int *)(param_1 + 0x78);
  local_44 = local_34 - *(int *)(param_1 + 0x6c);
  local_40 = local_30 + *(int *)(param_1 + 0x70);
  local_3c = local_2c + *(int *)(param_1 + 0x74);
  local_58 = *(undefined4 *)(param_1 + 0x88);
  local_54 = *(undefined4 *)(param_1 + 0x7c);
  local_50 = *(undefined4 *)(param_1 + 0x80);
  local_4c = *(undefined4 *)(param_1 + 0x84);
  local_5c = CONCAT13(*(undefined1 *)(param_1 + 0x94),
                      CONCAT12(*(undefined1 *)(param_1 + 0x90),
                               CONCAT11(*(undefined1 *)(param_1 + 0x8c),
                                        *(undefined1 *)(param_1 + 0x98))));
  FUN_00a75130(param_2,&local_48,&local_38,&local_58,local_5c,*(undefined4 *)(param_1 + 0x24),
               param_5,param_6);
  return;
}

