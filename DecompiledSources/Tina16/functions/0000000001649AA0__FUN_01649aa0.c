/* Ghidra address: 01649aa0 */
/* Ghidra symbol: FUN_01649aa0 */


void FUN_01649aa0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                (*(longlong **)(param_1 + 0x50),local_30,iVar3);
      iVar2 = FUN_0043fc00(local_30[0]);
      FUN_0162fb60(iVar2 + 2,0,*(undefined8 *)(param_1 + 0x78),1);
      dVar4 = (double)FUN_0162fcb0(iVar2 + 3,0,*(undefined8 *)(param_1 + 0x78),1);
      if (dVar4 == 0.0) {
        FUN_0162fb60(iVar2 + 1,0,*(undefined8 *)(param_1 + 0x78),1);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return;
}

