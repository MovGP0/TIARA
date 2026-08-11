/* Ghidra address: 0187fd00 */
/* Ghidra symbol: FUN_0187fd00 */


undefined8 FUN_0187fd00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),0);
  cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01918c28);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),0);
  }
  return uVar2;
}

