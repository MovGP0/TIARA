/* Ghidra address: 00a1ae70 */
/* Ghidra symbol: FUN_00a1ae70 */


undefined8 FUN_00a1ae70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)((longlong)param_1 + 0x21c);
  if (iVar3 == 0) {
    iVar3 = FUN_00a19c80(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = *(int *)((longlong)param_1 + 0x21c);
  }
  lVar1 = param_1[0x49];
  if (iVar3 == *(int *)(lVar1 + 0x20) + 0xd0) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x62;
    *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(lVar1 + 0x20);
    (**(code **)(lVar2 + 8))(param_1,3);
    *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  }
  else {
    iVar3 = (**(code **)(param_1[5] + 0x28))(param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  *(uint *)(param_1[0x49] + 0x20) = *(int *)(param_1[0x49] + 0x20) + 1U & 7;
  return 1;
}

