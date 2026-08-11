/* Ghidra address: 01d3e460 */
/* Ghidra symbol: FUN_01d3e460 */


undefined8 FUN_01d3e460(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_01d39f20();
  lVar2 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,uVar1);
  if ((*(int *)(lVar2 + 0xa7) < 1) || (*PTR_DAT_020052b8 != '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

