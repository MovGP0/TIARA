/* Ghidra address: 01c10a60 */
/* Ghidra symbol: FUN_01c10a60 */


void FUN_01c10a60(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_20;
  int local_1c;
  
  FUN_01c10df0(param_1,param_2);
  cVar1 = FUN_01c06f30(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_01c07120(param_1);
      lVar3 = FUN_01c03e40(uVar2);
      FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar3 + 0x9c));
      local_20 = (*(int *)((longlong)param_1 + 0x34c) + -5) / 2;
      local_1c = *(int *)((longlong)param_1 + 0x9c) / 2;
      FUN_00635ce0(param_1[0x62],&local_20,2,1);
    }
  }
  FUN_01c04950(param_1,param_2);
  return;
}

