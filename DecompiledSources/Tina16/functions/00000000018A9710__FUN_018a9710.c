/* Ghidra address: 018a9710 */
/* Ghidra symbol: FUN_018a9710 */


void FUN_018a9710(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 unaff_R13B;
  
  lVar2 = FUN_018b0ad0(*(undefined8 *)(param_1 + 0x578),0);
  (**(code **)(**(longlong **)(lVar2 + 0x38) + 0x168))(*(longlong **)(lVar2 + 0x38),param_2);
  if (*(char *)(param_1 + 0x58b) != '\0') {
    unaff_R13B = *(undefined1 *)(param_2 + 0xa0);
    *(byte *)(param_2 + 0xa0) = *(byte *)(param_2 + 0xa0) & 0xfe;
  }
  iVar1 = FUN_004b2060(*(undefined8 *)(param_1 + 0x578));
  iVar1 = iVar1 + -1;
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      lVar2 = FUN_018b0ad0(*(undefined8 *)(param_1 + 0x578),iVar3);
      (**(code **)(**(longlong **)(lVar2 + 0x38) + 0x168))(*(longlong **)(lVar2 + 0x38),param_2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (*(char *)(param_1 + 0x58b) != '\0') {
    *(undefined1 *)(param_2 + 0xa0) = unaff_R13B;
  }
  return;
}

