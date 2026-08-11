/* Ghidra address: 00c54660 */
/* Ghidra symbol: FUN_00c54660 */


undefined8 FUN_00c54660(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar2 = FUN_01d31a40(*param_2);
  if (iVar2 == 0) {
    cVar1 = FUN_01cf0620(param_1,param_2,0,0,0xffffffff);
    if (cVar1 != '\0') {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

