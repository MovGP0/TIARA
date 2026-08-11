/* Ghidra address: 019b7640 */
/* Ghidra symbol: FUN_019b7640 */


void FUN_019b7640(short param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_3 + 0x28);
  do {
    if (lVar1 == 0) {
      return;
    }
    iVar2 = 0;
    do {
      if (*(short *)(lVar1 + (longlong)iVar2 * 2) == param_1) {
        *(undefined8 *)(lVar1 + 0x68 + (longlong)iVar2 * 8) = param_2;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x32);
    lVar1 = *(longlong *)(lVar1 + 0x1f8);
  } while( true );
}

