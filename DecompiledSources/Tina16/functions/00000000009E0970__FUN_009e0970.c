/* Ghidra address: 009e0970 */
/* Ghidra symbol: FUN_009e0970 */


void FUN_009e0970(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  DAT_02013320 = 0;
  thunk_FUN_0413b16e(*(undefined4 *)(param_1 + 0x30),FUN_009e09e0,0);
  if (-1 < DAT_02013320 + -1) {
    puVar1 = &DAT_02012b20;
    iVar2 = DAT_02013320;
    do {
      thunk_FUN_0413e052(*puVar1,0x8d2,0,0);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

