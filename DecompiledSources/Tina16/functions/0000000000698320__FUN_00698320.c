/* Ghidra address: 00698320 */
/* Ghidra symbol: FUN_00698320 */


void FUN_00698320(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_2c;
  
  uVar2 = FUN_00786090(param_1);
  uVar1 = thunk_FUN_04133d57(uVar2);
  uVar2 = FUN_00786090(param_1);
  uVar3 = FUN_0065b870(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x78));
  thunk_FUN_041b2403(uVar3,0x111,CONCAT44(uStack_2c,(uint)uVar1),uVar2);
  return;
}

