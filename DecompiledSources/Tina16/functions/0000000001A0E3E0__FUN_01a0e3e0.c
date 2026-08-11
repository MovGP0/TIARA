/* Ghidra address: 01a0e3e0 */
/* Ghidra symbol: FUN_01a0e3e0 */


undefined8 FUN_01a0e3e0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x1c8))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x210))
                        (*(longlong **)(param_1 + 200),iVar3);
      if (iVar2 == param_2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

