/* Ghidra address: 01c00ce0 */
/* Ghidra symbol: FUN_01c00ce0 */


void FUN_01c00ce0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01bfaa70(*(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x498));
  FUN_01bf9980(uVar2,1);
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0x498);
  (**(code **)(*plVar1 + 0x68))(plVar1);
  FUN_00654410(*(undefined8 *)(param_2 + 0x60));
  FUN_00654320(*(undefined8 *)(param_2 + 0x60),0);
  return;
}

