/* Ghidra address: 006600e0 */
/* Ghidra symbol: FUN_006600e0 */


bool FUN_006600e0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined4 uStack_2c;
  
  bVar3 = false;
  if ((*(longlong *)(param_1 + 0xa0) != 0) && (param_2 != *(longlong *)(param_1 + 0xf0))) {
    FUN_00660160(param_1);
    *(longlong *)(param_1 + 0xf0) = param_2;
    uVar2 = FUN_0065fec0(*(undefined8 *)(param_1 + 0xf0),param_3,param_4);
    uStack_2c = (undefined4)(uVar2 >> 0x20);
    iVar1 = thunk_FUN_0416f35b(*(undefined8 *)(param_1 + 0xf0),uVar2 & 0xffffffff,uStack_2c);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

