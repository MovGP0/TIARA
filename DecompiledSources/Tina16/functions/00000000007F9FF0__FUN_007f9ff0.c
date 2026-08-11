/* Ghidra address: 007f9ff0 */
/* Ghidra symbol: FUN_007f9ff0 */


bool FUN_007f9ff0(longlong param_1,short param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0x100000;
  if (param_2 == 1) {
    uVar3 = 0x200000;
  }
  uVar2 = FUN_0065b870(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8));
  uVar1 = thunk_FUN_04118143(uVar2,0xfffffff0);
  return (uVar3 & uVar1) != 0;
}

