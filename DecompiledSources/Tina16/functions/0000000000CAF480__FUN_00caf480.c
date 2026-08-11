/* Ghidra address: 00caf480 */
/* Ghidra symbol: FUN_00caf480 */


void FUN_00caf480(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  (**(code **)(**(longlong **)(param_2 + 0xa0) + 0xa0))(*(undefined8 *)(param_2 + 0xa0),0);
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_2 + 0xa8))(*(undefined8 *)(param_2 + 0xa8));
    lVar2 = FUN_004b6da0(*(undefined8 *)(param_2 + 0xa8));
    if (lVar2 < lVar1) {
      uVar3 = FUN_004b6da0(*(undefined8 *)(param_2 + 0xa8));
      FUN_004b6e40(*(undefined8 *)(param_2 + 0xa8),uVar3);
    }
  }
  FUN_00419430(param_2 + 0x70,&DAT_0086e978);
  return;
}

