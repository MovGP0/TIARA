/* Ghidra address: 010d1490 */
/* Ghidra symbol: FUN_010d1490 */


void FUN_010d1490(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_2,iVar2);
      uVar1 = FUN_013b2750(0,&PTR_FUN_013b25b8,uVar1);
      (**(code **)(*param_1 + 0x20))(param_1,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

