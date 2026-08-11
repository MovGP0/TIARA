/* Ghidra address: 00c60b10 */
/* Ghidra symbol: FUN_00c60b10 */


bool FUN_00c60b10(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int local_30;
  int local_2c [3];
  
  bVar3 = false;
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
    FUN_017954b0(param_1[2],param_4,param_5,local_2c,&local_30);
    if (*(char *)(*(longlong *)(param_1[2] + 0x990) + 0x328) != '\0') {
      local_2c[0] = ((local_2c[0] + 2) / 4) * 4;
      local_30 = ((local_30 + 2) / 4) * 4;
    }
    piVar1 = (int *)FUN_004aeac0(param_1[4],(int)param_1[5]);
    *piVar1 = local_2c[0];
    lVar2 = FUN_004aeac0(param_1[4],(int)param_1[5]);
    *(int *)(lVar2 + 4) = local_30;
    (**(code **)(*param_1 + 0x20))(param_1);
    bVar3 = *(char *)((longlong)param_1 + 0x2c) == '\0';
  }
  return bVar3;
}

