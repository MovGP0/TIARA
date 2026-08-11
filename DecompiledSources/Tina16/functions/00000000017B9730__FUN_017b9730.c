/* Ghidra address: 017b9730 */
/* Ghidra symbol: FUN_017b9730 */


void FUN_017b9730(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    local_20 = FUN_00498310(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    uVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,&local_20);
    FUN_00c3c3f0(*(undefined8 *)(param_1 + 0x40));
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x40),uVar2);
  }
  return;
}

