/* Ghidra address: 01bfd990 */
/* Ghidra symbol: FUN_01bfd990 */


undefined8 FUN_01bfd990(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_28 [2];
  undefined1 local_20;
  
  if (DAT_01fe2178 == 0) {
    bVar3 = false;
  }
  else {
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + -4);
    }
    bVar3 = iVar2 == 0;
  }
  if ((bVar3) && (lVar1 = FUN_01bfd980(param_1), lVar1 == 0)) {
    local_28[0] = FUN_004b1870(param_1);
    local_20 = 0;
    FUN_00442f70(param_2,L"ActionClientItem%d",local_28,0);
    return param_2;
  }
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x40));
  return param_2;
}

