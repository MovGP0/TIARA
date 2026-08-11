/* Ghidra address: 00dd6a50 */
/* Ghidra symbol: FUN_00dd6a50 */


undefined8 FUN_00dd6a50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00411110(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if ((*(longlong *)(param_1 + 8) != 0) &&
       (cVar1 = thunk_FUN_041c9697(param_2,*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) + 0x20),
       cVar1 != '\0')) {
      FUN_00411110(param_1,&LAB_00dd6ab8,param_3);
      return 0;
    }
    uVar2 = 0x80004002;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

