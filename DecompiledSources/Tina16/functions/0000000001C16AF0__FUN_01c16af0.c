/* Ghidra address: 01c16af0 */
/* Ghidra symbol: FUN_01c16af0 */


void FUN_01c16af0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  uVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
  cVar1 = FUN_004113d0(uVar2,&PTR_FUN_0061c2b8);
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (*(char *)(lVar3 + 0xd8) != '\0') {
      FUN_01c16580(param_1);
    }
  }
  cVar1 = FUN_01c06f30(param_1);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x210))(param_1);
    local_20._0_4_ = (int)uVar2;
    local_28 = (((int)param_1[0x73] - (int)param_1[0x72]) - (int)local_20) / 2;
    local_20._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
    local_24 = ((*(int *)((longlong)param_1 + 0x39c) - *(int *)((longlong)param_1 + 0x394)) -
               local_20._4_4_) / 2;
    local_20 = uVar2;
    FUN_01c04950(param_1,&local_28);
  }
  return;
}

