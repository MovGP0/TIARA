/* Ghidra address: 0094ef00 */
/* Ghidra symbol: FUN_0094ef00 */


undefined8 FUN_0094ef00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00416420(param_2,&DAT_0094ef44);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00416420(param_2,L"xmlns");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

