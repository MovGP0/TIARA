/* Ghidra address: 017ebb80 */
/* Ghidra symbol: FUN_017ebb80 */


void FUN_017ebb80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(longlong *)(param_1 + 0x768) = param_2;
  puVar2 = (undefined8 *)(param_2 + 0x650);
  puVar3 = (undefined8 *)(param_1 + 0x770);
  for (lVar1 = 0x48; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_017eb410(param_1);
  return;
}

