/* Ghidra address: 00b95290 */
/* Ghidra symbol: FUN_00b95290 */


void FUN_00b95290(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[2];
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      (**(code **)(*param_1 + 0x10))(param_1,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

