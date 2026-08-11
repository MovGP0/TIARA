/* Ghidra address: 01b98470 */
/* Ghidra symbol: FUN_01b98470 */


void FUN_01b98470(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00418590(*(undefined8 *)(param_2 + 0x18),&DAT_01b94ff0);
  FUN_006dc990(param_2,0);
  iVar2 = FUN_006dd8c0();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_006dd770(param_2,iVar3);
      FUN_01b98470(param_1,uVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

