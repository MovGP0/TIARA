/* Ghidra address: 00709be0 */
/* Ghidra symbol: FUN_00709be0 */


undefined8 FUN_00709be0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_006abd68);
  if (cVar2 != '\0') {
    uVar3 = *(undefined8 *)(lVar1 + 0x4a8);
  }
  return uVar3;
}

