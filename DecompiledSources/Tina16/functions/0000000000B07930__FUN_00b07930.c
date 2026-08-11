/* Ghidra address: 00b07930 */
/* Ghidra symbol: FUN_00b07930 */


void FUN_00b07930(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1[0x97];
  *(undefined8 *)(lVar1 + 0x208) = 0;
  *(undefined8 *)(lVar1 + 0x210) = 0;
  iVar2 = (int)param_1[0x13];
  lVar1 = param_1[0x99];
  if (*(char *)(lVar1 + 0xa9) == '\0') {
    if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
      FUN_0064cb30(lVar1,iVar2 + 1);
    }
  }
  else {
    iVar2 = iVar2 - *(int *)(lVar1 + 0x98);
    FUN_0064cb30(lVar1,iVar2);
    lVar1 = param_1[0x97];
    *(longlong **)(lVar1 + 0x210) = param_1;
    *(code **)(lVar1 + 0x208) = FUN_00b07f50;
  }
  lVar1 = param_1[0x98];
  if (*(char *)(lVar1 + 0xa9) == '\0') {
    if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
      FUN_0064cb30(lVar1,(int)param_1[0x13] + 1);
    }
  }
  else {
    if (*(char *)(param_1[0x99] + 0xa9) != '\0') {
      iVar2 = iVar2 + 1;
    }
    iVar2 = iVar2 - *(int *)(lVar1 + 0x98);
    FUN_0064cb30(lVar1,iVar2);
    lVar1 = param_1[0x97];
    *(longlong **)(lVar1 + 0x210) = param_1;
    *(code **)(lVar1 + 0x208) = FUN_00b07e60;
  }
  FUN_0064cbf0(param_1[0x97],iVar2 + *(int *)(param_1[0x97] + 0x90) * -2);
  (**(code **)(*param_1 + 0x180))(param_1);
  if (*(char *)(param_1[0x9a] + 0xa9) != '\0') {
    FUN_00b07e30(param_1);
    FUN_00b07d00(param_1);
  }
  return;
}

