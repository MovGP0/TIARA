/* Ghidra address: 01c1ca10 */
/* Ghidra symbol: FUN_01c1ca10 */


void FUN_01c1ca10(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    lVar1 = FUN_006edb10(*(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + 0x500),iVar2);
    if (lVar1 == param_3) break;
    iVar2 = iVar2 + 1;
  }
  FUN_006f6760(*(undefined8 *)(param_1 + 0x6c0),FUN_01c1c8c0,(longlong)iVar2);
  return;
}

