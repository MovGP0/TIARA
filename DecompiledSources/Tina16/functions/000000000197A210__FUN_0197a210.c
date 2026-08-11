/* Ghidra address: 0197a210 */
/* Ghidra symbol: FUN_0197a210 */


void FUN_0197a210(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = FUN_0197d260();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_0197d550(param_2,iVar4);
      if ((*(longlong *)(lVar2 + 0x40) != 0) && (*(longlong *)(lVar2 + 0x30) == 0)) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                          (*(longlong **)(param_1 + 0x30),lVar2 + 0x40,*(undefined8 *)(lVar2 + 0x38)
                          );
        *(undefined8 *)(lVar2 + 0x30) = uVar3;
      }
      FUN_0197a210(param_1,lVar2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

