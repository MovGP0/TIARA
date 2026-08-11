/* Ghidra address: 00d1cf30 */
/* Ghidra symbol: FUN_00d1cf30 */


void FUN_00d1cf30(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar2 = FUN_00cd71e0(DAT_01ebb7c8,&PTR_FUN_00478280);
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FUN_00d0cef0();
    iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      do {
        uVar5 = (**(code **)(*DAT_01ebb7c8 + 0x30))(DAT_01ebb7c8,iVar3);
        lVar6 = FUN_00419bd0(uVar5);
        if ((param_1 < 0) || (lVar6 != param_1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*DAT_01ebb7c8 + 0x98))(DAT_01ebb7c8,iVar3);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  return;
}

