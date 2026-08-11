/* Ghidra address: 00711230 */
/* Ghidra symbol: FUN_00711230 */


undefined8 FUN_00711230(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00711290(param_1);
    uVar2 = FUN_007111e0(iVar1 + 1);
    uVar2 = FUN_00711200(uVar2,param_1,iVar1 + 1);
  }
  return uVar2;
}

