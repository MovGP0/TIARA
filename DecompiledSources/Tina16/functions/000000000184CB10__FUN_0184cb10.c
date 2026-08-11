/* Ghidra address: 0184cb10 */
/* Ghidra symbol: FUN_0184cb10 */


void FUN_0184cb10(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  (**(code **)(*plVar1 + 0x98))(plVar1,uVar2);
  return;
}

