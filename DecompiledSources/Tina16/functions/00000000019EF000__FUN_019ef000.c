/* Ghidra address: 019ef000 */
/* Ghidra symbol: FUN_019ef000 */


void FUN_019ef000(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  
  iVar1 = FUN_019954d0();
  if (-1 < iVar1 + 1) {
    iVar1 = iVar1 + 2;
    do {
      (**(code **)(*param_3 + 0x78))(param_3,0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

