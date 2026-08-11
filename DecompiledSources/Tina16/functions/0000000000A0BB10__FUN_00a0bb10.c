/* Ghidra address: 00a0bb10 */
/* Ghidra symbol: FUN_00a0bb10 */


void FUN_00a0bb10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  FUN_00a0b720(param_1);
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x48) + 0x10);
  uVar2 = (**(code **)*puVar1)(puVar1);
  (**(code **)(*param_2 + 0x20))(param_2,puVar1[1],uVar2);
  return;
}

