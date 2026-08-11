/* Ghidra address: 01813750 */
/* Ghidra symbol: FUN_01813750 */


void FUN_01813750(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(*(undefined8 *)(param_2 + 0xf0),&PTR_FUN_01918c28);
  if (cVar1 != '\0') {
    FUN_01950e90(*(undefined8 *)(param_2 + 0xf0),0);
  }
  cVar1 = FUN_004113d0(*(undefined8 *)(param_2 + 0x100),&PTR_FUN_01918c28);
  if (cVar1 != '\0') {
    FUN_01950e90(*(undefined8 *)(param_2 + 0x100),0);
  }
  FUN_004095f0(*(undefined8 *)(param_2 + 0xb0),(longlong)(*(int *)(param_2 + 0x9c) * 8));
  return;
}

