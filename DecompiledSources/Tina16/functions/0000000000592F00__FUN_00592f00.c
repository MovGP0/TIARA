/* Ghidra address: 00592f00 */
/* Ghidra symbol: FUN_00592f00 */


undefined ** FUN_00592f00(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  
  lVar1 = FUN_00589390(param_1);
  plVar2 = (longlong *)FUN_00589390(param_1);
  if (*plVar2 < *(longlong *)(lVar1 + 8)) {
    ppuVar3 = &PTR_PTR_01de1d28;
  }
  else {
    ppuVar3 = &PTR_PTR_01de1d50;
  }
  return ppuVar3;
}

