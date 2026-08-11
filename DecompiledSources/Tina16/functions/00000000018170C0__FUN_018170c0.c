/* Ghidra address: 018170c0 */
/* Ghidra symbol: FUN_018170c0 */


undefined8 FUN_018170c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = *param_3;
  uStack_28 = param_3[1];
  uStack_20 = param_3[2];
  FUN_0046bd60(&local_30);
  iVar1 = FUN_01817010(param_1,&local_30);
  if (iVar1 == -1) {
    FUN_0046f180(param_2);
  }
  else {
    lVar2 = FUN_01817000(param_1,iVar1);
    FUN_00461840(param_2,lVar2 + 0x28);
  }
  FUN_00460ba0(&local_30);
  return param_2;
}

