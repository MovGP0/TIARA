/* Ghidra address: 0060d540 */
/* Ghidra symbol: FUN_0060d540 */


void FUN_0060d540(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_0060cf90(param_1);
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x48) + 0x10);
  uVar2 = (**(code **)*puVar1)(puVar1);
  FUN_004b89e0(param_2,puVar1[1],uVar2);
  return;
}

