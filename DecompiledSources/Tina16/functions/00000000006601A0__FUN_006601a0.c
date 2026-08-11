/* Ghidra address: 006601a0 */
/* Ghidra symbol: FUN_006601a0 */


bool FUN_006601a0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    bVar3 = false;
  }
  else {
    uVar2 = FUN_0065fec0(*(undefined8 *)(param_1 + 0xf0));
    uStack_c = (undefined4)(uVar2 >> 0x20);
    iVar1 = thunk_FUN_04142d71(uVar2 & 0xffffffff,uStack_c);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

