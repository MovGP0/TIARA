/* Ghidra address: 00a0be40 */
/* Ghidra symbol: FUN_00a0be40 */


void FUN_00a0be40(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = thunk_FUN_040ef593(0);
  iVar2 = thunk_FUN_03e5bd07(uVar1,0xc);
  iVar3 = thunk_FUN_03e5bd07(uVar1,0xe);
  DAT_01e6e698 = (uint)(iVar2 * iVar3 < 9);
  thunk_FUN_041a9b5c(0,uVar1);
  return;
}

