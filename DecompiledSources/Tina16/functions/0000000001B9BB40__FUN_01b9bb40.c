/* Ghidra address: 01b9bb40 */
/* Ghidra symbol: FUN_01b9bb40 */


void FUN_01b9bb40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0198d430(*(undefined8 *)(param_2 + 0x88));
  *(undefined8 *)(lVar1 + 0x148) = 0;
  uVar2 = (**(code **)**(undefined8 **)(param_2 + 0x88))(*(undefined8 *)(param_2 + 0x88));
  FUN_00418590(uVar2,&DAT_01984da0);
  return;
}

