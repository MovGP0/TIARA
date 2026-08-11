/* Ghidra address: 01b25c70 */
/* Ghidra symbol: FUN_01b25c70 */


void FUN_01b25c70(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = FUN_01b25bf0(param_1);
    if ((-1 < iVar1) || (4 < iVar2)) break;
    thunk_FUN_0419965d(800);
    iVar2 = iVar2 + 1;
  }
  *param_2 = 0;
  return;
}

