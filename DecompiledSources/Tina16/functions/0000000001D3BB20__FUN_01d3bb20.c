/* Ghidra address: 01d3bb20 */
/* Ghidra symbol: FUN_01d3bb20 */


void FUN_01d3bb20(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_01d3bae0(param_2,iVar2);
      (**(code **)(*param_1 + 0x20))(param_1,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}

