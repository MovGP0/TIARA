/* Ghidra address: 0065ff40 */
/* Ghidra symbol: FUN_0065ff40 */


bool FUN_0065ff40(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = *(longlong *)(param_1 + 0xa0) != 0;
  if (bVar2) {
    *(undefined4 *)(param_1 + 0x100) = param_2;
    *(undefined4 *)(param_1 + 0xf8) = param_3;
    *(undefined4 *)(param_1 + 0xfc) = param_4;
    uVar1 = FUN_007d56e0(param_1);
    thunk_FUN_041ca9ea(uVar1,param_2,param_3,param_4);
    *(undefined1 *)(param_1 + 0xea) = 1;
  }
  return bVar2;
}

