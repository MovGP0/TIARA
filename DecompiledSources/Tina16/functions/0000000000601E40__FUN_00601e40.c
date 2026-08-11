/* Ghidra address: 00601e40 */
/* Ghidra symbol: FUN_00601e40 */


bool FUN_00601e40(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) == 0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x40))(*(longlong **)(param_1 + 0x70));
    bVar3 = cVar2 == '\0';
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x40);
    cVar2 = FUN_004113d0(uVar1,&PTR_FUN_005f6910);
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x38))
                          (*(longlong **)(param_1 + 0x70),uVar1), cVar2 != '\0')) {
      return false;
    }
    bVar3 = true;
  }
  return bVar3;
}

