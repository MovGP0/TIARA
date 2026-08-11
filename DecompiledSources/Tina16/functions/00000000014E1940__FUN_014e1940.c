/* Ghidra address: 014e1940 */
/* Ghidra symbol: FUN_014e1940 */


longlong * FUN_014e1940(longlong *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_014db750(param_2);
  FUN_017bf050(plVar2,0,L"Internal Comp");
  uVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  lVar3 = FUN_00409570(uVar1);
  plVar2[0x18] = lVar3;
  FUN_01d38290(plVar2,1);
  (**(code **)(*param_1 + 0x20))(param_1,plVar2);
  return plVar2;
}

