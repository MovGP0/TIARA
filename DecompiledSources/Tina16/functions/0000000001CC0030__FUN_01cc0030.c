/* Ghidra address: 01cc0030 */
/* Ghidra symbol: FUN_01cc0030 */


void FUN_01cc0030(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01cbf760(&PTR_FUN_01cb2378,1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x50))(*(longlong **)(param_1 + 0x50),uVar1);
  return;
}

