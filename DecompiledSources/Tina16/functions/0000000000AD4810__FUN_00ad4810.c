/* Ghidra address: 00ad4810 */
/* Ghidra symbol: FUN_00ad4810 */


void FUN_00ad4810(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_00414b50(*(longlong *)(param_1 + 0x60) + 0x38,&DAT_00ad492c);
  FUN_00ad1170(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x70));
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + 0x44) = 1;
  while ((((sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + 0x20),
           sVar1 != 9 && (sVar1 != 0xd)) && (sVar1 != 0x20)) && (sVar1 != 0x3e))) {
    iVar3 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x38);
    if (lVar2 != 0) {
      iVar3 = *(int *)(lVar2 + -4);
    }
    FUN_004169f0(*(longlong *)(param_1 + 0x60) + 0x38,iVar3 + 1);
    lVar4 = FUN_00414de0(*(longlong *)(param_1 + 0x60) + 0x38);
    iVar3 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x38);
    if (lVar2 != 0) {
      iVar3 = *(int *)(lVar2 + -4);
    }
    *(short *)(lVar4 + -2 + (longlong)iVar3 * 2) = sVar1;
    FUN_00ad1170(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x70));
  }
  iVar3 = FUN_0043e420(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38),L"</textarea");
  if (iVar3 == 0) {
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + 0x44) = 0xc1;
  }
  else {
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + 0x44) = 1;
  }
  return;
}

