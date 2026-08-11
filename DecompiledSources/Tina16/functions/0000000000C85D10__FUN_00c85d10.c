/* Ghidra address: 00c85d10 */
/* Ghidra symbol: FUN_00c85d10 */


undefined8 FUN_00c85d10(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00c7f210(lVar1);
  }
  return uVar2;
}

