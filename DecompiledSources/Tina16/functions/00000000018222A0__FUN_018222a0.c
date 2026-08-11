/* Ghidra address: 018222a0 */
/* Ghidra symbol: FUN_018222a0 */


undefined8 * FUN_018222a0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00414480(param_2);
  if (*(char *)(param_1 + 0x99) != '\0') {
    FUN_018210c0(param_1);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  cVar1 = FUN_01822150(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_01822070(param_1), cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 0x84) = uVar3;
  }
  else {
    FUN_00416dc0(param_2,*(undefined8 *)(param_1 + 0xa8),*(int *)(param_1 + 0x80),
                 *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80));
  }
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x50),&LAB_01822390);
  if (iVar2 != 0) {
    while (iVar2 = FUN_004170c0(*(undefined8 *)(param_1 + 0x50),*param_2,1), iVar2 != 0) {
      uVar3 = FUN_004170c0(*(undefined8 *)(param_1 + 0x50),*param_2,1);
      uVar4 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x50));
      FUN_00416e20(param_2,uVar3,uVar4);
      FUN_00416ea0(&LAB_01822390,param_2,uVar3);
    }
  }
  return param_2;
}

