/* Ghidra address: 00c834f0 */
/* Ghidra symbol: FUN_00c834f0 */


void FUN_00c834f0(longlong param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar4);
      pwVar1 = *(wchar_t **)(lVar3 + 0x38);
      if (pwVar1 == L"TSpiceMacroCompHandler") {
        bVar6 = true;
      }
      else if (pwVar1 == (wchar_t *)0x0) {
        bVar6 = false;
      }
      else {
        iVar2 = FUN_0043e420(pwVar1,L"TSpiceMacroCompHandler");
        bVar6 = iVar2 == 0;
      }
      if (((bVar6) && (*(longlong *)(lVar3 + 0x30) != 0)) &&
         (iVar2 = (**(code **)(*param_2 + 0xb0))(param_2,*(undefined8 *)(lVar3 + 0x30)), iVar2 == -1
         )) {
        (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(lVar3 + 0x30));
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

