/* Ghidra address: 01979a00 */
/* Ghidra symbol: FUN_01979a00 */


void FUN_01979a00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_0197d260();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_0197d550(param_2,iVar4);
      if (*(longlong *)(lVar1 + 0x30) != 0) {
        lVar1 = FUN_0197d550(param_2,iVar4);
        FUN_00452320(lVar1 + 0x30);
      }
      uVar2 = FUN_0197d550(param_2,iVar4);
      FUN_01979a00(param_1,uVar2);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

