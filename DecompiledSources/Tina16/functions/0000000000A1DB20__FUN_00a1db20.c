/* Ghidra address: 00a1db20 */
/* Ghidra symbol: FUN_00a1db20 */


void FUN_00a1db20(longlong *param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (((int)param_1[0x26] != 0) || (2 < iVar1 - 0x65U)) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x14;
    *(int *)(lVar2 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  (**(code **)(param_1[0x3a] + 0x28))(param_1,param_2,param_4);
  if (param_4 != 0) {
    pcVar3 = *(code **)(param_1[0x3a] + 0x30);
    do {
      (*pcVar3)(param_1,*param_3);
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

