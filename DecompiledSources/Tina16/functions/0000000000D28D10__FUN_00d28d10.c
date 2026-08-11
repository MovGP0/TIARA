/* Ghidra address: 00d28d10 */
/* Ghidra symbol: FUN_00d28d10 */


void FUN_00d28d10(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  cVar2 = FUN_00cd71e0(DAT_01eca858,&PTR_FUN_00478280);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*DAT_01eca858 + 0x28))(DAT_01eca858);
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      do {
        uVar4 = (**(code **)(*DAT_01eca858 + 0x30))(DAT_01eca858,iVar3);
        lVar5 = FUN_00419bd0(uVar4);
        if ((param_1 < 0) || (lVar5 != param_1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*DAT_01eca858 + 0x98))(DAT_01eca858,iVar3);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  return;
}

