/* Ghidra address: 0041ef80 */
/* Ghidra symbol: FUN_0041ef80 */


undefined8 FUN_0041ef80(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_30;
  
  iVar1 = FUN_00414d00(param_2);
  iVar2 = FUN_0041de60(param_3,0,param_2,iVar1 + 1,0,0,0,0);
  if (iVar2 < 1) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_0041e250(param_1,(longlong)iVar2);
    FUN_0041de60(param_3,0,param_2,iVar1 + 1,local_30,iVar2,0,0);
  }
  return local_30;
}

