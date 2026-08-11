/* Ghidra address: 01c93bf0 */
/* Ghidra symbol: FUN_01c93bf0 */


void FUN_01c93bf0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_01993ec0(*(undefined8 *)(param_1 + 0x27a8));
  if (lVar3 != 0) {
    cVar1 = FUN_0198a580(lVar3);
    if (cVar1 == '\x04') {
      cVar1 = FUN_01d04d40(lVar3);
      if (((cVar1 != '\0') && (*(char *)(*(longlong *)(lVar3 + 0x1a8) + 0x61) != '\0')) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x1a8) + 0x30) != 0)) {
        iVar2 = FUN_0072d440(L"Are you sure you want to clear\rthe lock on the selected block?",3,3,
                             0);
        if (iVar2 == 6) {
          (**(code **)(**(longlong **)(lVar3 + 0x1a8) + 0x18))(*(longlong **)(lVar3 + 0x1a8),0);
          FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),0,1,0);
        }
      }
    }
  }
  return;
}

