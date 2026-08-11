/* Ghidra address: 0112b9b0 */
/* Ghidra symbol: FUN_0112b9b0 */


undefined8 FUN_0112b9b0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  lVar3 = FUN_005c05d0(*(undefined8 *)PTR_DAT_020041f0,param_2,0);
  local_30[0] = FUN_005ba6b0((double)lVar3);
  uVar1 = FUN_005ba700(local_30);
  lVar3 = FUN_005c05d0(*(undefined8 *)PTR_DAT_020041f0,param_2,0);
  local_38 = FUN_005ba6b0((double)lVar3);
  uVar2 = FUN_005ba720(&local_38);
  FUN_0112ba60(param_1,param_2,uVar1,uVar2);
  return param_1;
}

