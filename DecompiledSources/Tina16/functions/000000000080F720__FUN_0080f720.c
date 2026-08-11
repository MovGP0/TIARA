/* Ghidra address: 0080f720 */
/* Ghidra symbol: FUN_0080f720 */


undefined4 FUN_0080f720(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  
  uVar1 = 0;
  lVar2 = thunk_FUN_041d93e9();
  if (lVar2 == 0) {
    lVar2 = *param_2;
    lVar3 = *(longlong *)(param_1 + 0xa8);
    if ((lVar3 == 0) || (lVar2 != *(longlong *)(lVar3 + 0x698))) {
      lVar3 = FUN_006485b0(lVar2);
      while ((lVar3 == 0 && (lVar2 = thunk_FUN_03de17fb(lVar2), lVar2 != 0))) {
        lVar3 = FUN_006485b0(lVar2);
      }
    }
    if (lVar3 != 0) {
      pcVar4 = (code *)FUN_00411550(lVar3,0xffad);
      uVar1 = (*pcVar4)(lVar3,param_2);
    }
  }
  return uVar1;
}

