/* Ghidra address: 007d7e10 */
/* Ghidra symbol: FUN_007d7e10 */


bool FUN_007d7e10(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (*(char *)(*(longlong *)(param_1 + 0x70) + 0xe1) == '\0') {
    bVar3 = false;
  }
  else if (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) == 0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x90))(*(longlong **)(param_1 + 0x70));
    bVar3 = 0 < iVar4;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x40);
    cVar2 = FUN_004113d0(uVar1,&PTR_FUN_007d3710);
    if ((cVar2 != '\0') &&
       (cVar2 = FUN_007d7cd0(*(undefined8 *)(param_1 + 0x70),uVar1), cVar2 != '\0')) {
      return false;
    }
    bVar3 = true;
  }
  return bVar3;
}

