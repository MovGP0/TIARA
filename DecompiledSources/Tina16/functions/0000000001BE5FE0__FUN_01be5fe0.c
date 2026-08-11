/* Ghidra address: 01be5fe0 */
/* Ghidra symbol: FUN_01be5fe0 */


void FUN_01be5fe0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_00654410(*(undefined8 *)(param_2 + 0x70));
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x5b0);
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x440))
              (*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(lVar1 + 8),lVar1);
  }
  uVar2 = FUN_0065b870(*(undefined8 *)(param_2 + 0x70));
  thunk_FUN_041b2403(uVar2,0x85,1,0);
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x428))(*(undefined8 *)(param_2 + 0x70));
  return;
}

