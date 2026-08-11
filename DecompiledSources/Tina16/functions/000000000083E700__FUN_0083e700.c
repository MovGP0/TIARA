/* Ghidra address: 0083e700 */
/* Ghidra symbol: FUN_0083e700 */


void FUN_0083e700(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar1,local_28);
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x508));
  thunk_FUN_0411b3be(0,uVar1,local_28,2);
  FUN_004238a0(param_2,local_28);
  return;
}

