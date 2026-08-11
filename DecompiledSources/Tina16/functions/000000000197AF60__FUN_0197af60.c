/* Ghidra address: 0197af60 */
/* Ghidra symbol: FUN_0197af60 */


void FUN_0197af60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_0197d260();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_0197d550(param_2,iVar3);
      if (*(longlong *)(lVar2 + 0x40) == 0) {
        FUN_0197af60(param_1,lVar2);
      }
      else {
        FUN_004412f0(*(undefined8 *)(lVar2 + 0x40));
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

