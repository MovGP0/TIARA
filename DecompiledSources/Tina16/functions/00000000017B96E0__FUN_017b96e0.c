/* Ghidra address: 017b96e0 */
/* Ghidra symbol: FUN_017b96e0 */


void FUN_017b96e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),0);
    local_30[0] = FUN_00498310(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    (**(code **)(*plVar1 + 0xc0))(plVar1,uVar2,local_30);
  }
  return;
}

