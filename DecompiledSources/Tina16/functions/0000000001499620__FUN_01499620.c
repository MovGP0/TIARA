/* Ghidra address: 01499620 */
/* Ghidra symbol: FUN_01499620 */


void FUN_01499620(longlong param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  
  iVar1 = *(int *)(param_1 + 0xc08);
  *(undefined4 *)(param_1 + 0xc08) = param_2;
  FUN_013b9770(PTR_DAT_02004010);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),
               *(undefined8 *)(*(longlong *)(param_1 + 0xbb0) + 0x20));
  if (*(int *)(param_1 + 0xc08) == 1) {
    if (*(char *)(param_1 + 0xc0c) == '\0') {
      uVar3 = FUN_0149bcb0(param_1);
      *(undefined1 *)(param_1 + 0xc0c) = uVar3;
    }
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x840),*(undefined4 *)(param_1 + 0x91c));
    FUN_00c03380(*(undefined8 *)(param_1 + 0x8b8),*(undefined8 *)(param_1 + 0xbf0));
    lVar2 = *(longlong *)(param_1 + 0xbc0);
    FUN_00414ad0(lVar2 + 0x100,&PTR_DAT_014997cc);
    FUN_00414ad0(lVar2 + 0xe0,L"Python file|*.py");
    lVar2 = *(longlong *)(param_1 + 0xbc8);
    FUN_0177dd40(lVar2,&PTR_DAT_014997cc);
    FUN_00414ad0(lVar2 + 0xe0,L"Python file|*.py");
    FUN_00c0fae0(*(undefined8 *)(param_1 + 0x8c0));
    FUN_0149b8c0(param_1);
  }
  else {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x840),0);
    FUN_00c03380(*(undefined8 *)(param_1 + 0x8b8),*(undefined8 *)(param_1 + 0xbe8));
    lVar2 = *(longlong *)(param_1 + 0xbc0);
    FUN_00414ad0(lVar2 + 0x100,&DAT_01499810);
    FUN_00414ad0(lVar2 + 0xe0,L"Interpreter file (*.IPR)|*.IPR");
    lVar2 = *(longlong *)(param_1 + 0xbc8);
    FUN_0177dd40(lVar2,&DAT_01499810);
    FUN_00414ad0(lVar2 + 0xe0,L"Interpreter file (*.IPR)|*.IPR");
  }
  cVar4 = FUN_01a90ed0();
  if (cVar4 != '\0') {
    FUN_01b25310(*(undefined8 *)(param_1 + 0x8b8));
  }
  if ((param_3 != '\0') && (iVar1 != *(int *)(param_1 + 0xc08))) {
    FUN_01497120(param_1,0);
  }
  return;
}

