/* Ghidra address: 005bf790 */
/* Ghidra symbol: FUN_005bf790 */


void FUN_005bf790(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0x79e;
  do {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 + -0x79e) * 8);
    if (lVar1 != 0) {
      FUN_00418590(lVar1,&DAT_005bc4e0);
      *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 + -0x79e) * 8) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x803);
  FUN_005c3350(*(undefined8 *)(param_1 + 0x10));
  return;
}

