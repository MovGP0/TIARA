/* Ghidra address: 01bfdc50 */
/* Ghidra symbol: FUN_01bfdc50 */


bool FUN_01bfdc50(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool local_11;
  undefined8 local_10;
  
  local_10 = 0;
  lVar3 = FUN_01bfd980(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_01bfd980(param_1);
    cVar1 = FUN_004113d0(uVar4,&PTR_FUN_0061c2b8);
    if (cVar1 != '\0') {
      FUN_01bfd990(param_1,&local_10);
      lVar3 = FUN_01bfd980(param_1);
      iVar2 = FUN_0043e6d0(local_10,*(undefined8 *)(lVar3 + 0xd0));
      local_11 = iVar2 != 0;
      goto code_r0x01bfdcc5;
    }
  }
  local_11 = true;
code_r0x01bfdcc5:
  FUN_00414480(&local_10);
  return local_11;
}

