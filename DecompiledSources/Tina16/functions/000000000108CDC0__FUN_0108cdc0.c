/* Ghidra address: 0108cdc0 */
/* Ghidra symbol: FUN_0108cdc0 */


undefined8 FUN_0108cdc0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  FUN_00414480(param_2);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x9e8) + 0x4a0) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      cVar1 = FUN_00821920(*(undefined8 *)(param_1 + 0x9e8),iVar3);
      if (cVar1 == '\0') {
        FUN_00416ad0(param_2,&LAB_0108ce70);
      }
      else {
        FUN_00416ad0(param_2,&DAT_0108ce60);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_2;
}

