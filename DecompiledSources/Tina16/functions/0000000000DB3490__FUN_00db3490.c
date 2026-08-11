/* Ghidra address: 00db3490 */
/* Ghidra symbol: FUN_00db3490 */


void FUN_00db3490(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  
  iVar3 = *param_1;
  iVar2 = 1;
  if (0 < iVar3) {
    param_1 = param_1 + 2;
    do {
      FUN_00db23a0(param_1,param_2,param_3,param_4);
      local_3c = *(double *)(param_1 + 0x42) * 0.1 <= *(double *)(param_1 + 2);
      local_3b = 0;
      local_40 = iVar2;
      uVar1 = FUN_016ebdc0(param_2);
      FUN_01d04b50(uVar1,&local_40);
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 0x46;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

