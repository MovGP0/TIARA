/* Ghidra address: 012456d0 */
/* Ghidra symbol: FUN_012456d0 */


longlong * FUN_012456d0(undefined4 param_1)

{
  undefined2 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,param_1);
  uVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  lVar3 = FUN_00409570(uVar1);
  plVar2[0x18] = lVar3;
  FUN_01d38290(plVar2,1);
  return plVar2;
}

