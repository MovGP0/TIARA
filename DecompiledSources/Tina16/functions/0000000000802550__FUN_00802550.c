/* Ghidra address: 00802550 */
/* Ghidra symbol: FUN_00802550 */


void FUN_00802550(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((*(longlong *)(param_1 + 0x4c0) == 0) ||
       (lVar1 = *(longlong *)(param_1 + 0x4c0), *(longlong *)(param_1 + 0x510) != 0)) &&
      (lVar1 = param_1, *(longlong *)(param_1 + 0x78) != 0)) &&
     ((*(longlong *)(param_1 + 0x510) == 0 && (lVar1 = FUN_0065c060(param_1,0,1,1,0), lVar1 == 0))))
  {
    lVar1 = param_1;
  }
  uVar2 = FUN_0065b870(lVar1);
  thunk_FUN_03c244fb(uVar2);
  lVar3 = thunk_FUN_041da4fa();
  lVar4 = FUN_0065b870(lVar1);
  if (lVar3 == lVar4) {
    FUN_0064fca0(lVar1,0xb029,0,0);
  }
  return;
}

