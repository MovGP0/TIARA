/* Ghidra address: 0044e9a0 */
/* Ghidra symbol: FUN_0044e9a0 */


void FUN_0044e9a0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  cVar2 = FUN_004113d0(puVar1,&PTR_FUN_004334c0);
  if (cVar2 != '\0') {
    (**(code **)*puVar1)(puVar1,param_1);
  }
  return;
}

