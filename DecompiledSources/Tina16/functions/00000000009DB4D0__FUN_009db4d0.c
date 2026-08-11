/* Ghidra address: 009db4d0 */
/* Ghidra symbol: FUN_009db4d0 */


undefined4 FUN_009db4d0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_2 = 0;
  plVar1 = (longlong *)FUN_009dab20(param_1);
  uVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1);
  lVar3 = FUN_009d9690(&PTR_FUN_009cf098,1,uVar2,param_1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0xa0;
  }
  FUN_0041b840(param_2,lVar3);
  return 0;
}

