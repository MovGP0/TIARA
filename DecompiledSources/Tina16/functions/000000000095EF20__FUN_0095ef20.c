/* Ghidra address: 0095ef20 */
/* Ghidra symbol: FUN_0095ef20 */


void FUN_0095ef20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))
                        (*(longlong **)(param_1 + 0x40),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00957290(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

