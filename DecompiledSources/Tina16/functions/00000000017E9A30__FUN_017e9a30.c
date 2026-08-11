/* Ghidra address: 017e9a30 */
/* Ghidra symbol: FUN_017e9a30 */


void FUN_017e9a30(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(param_2 + 0x628);
  *(undefined8 *)(param_1 + 0x630) = *(undefined8 *)(param_2 + 0x630);
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_2 + 0x638);
  *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_2 + 0x640);
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_2 + 0x648);
  puVar3 = (undefined8 *)(param_2 + 0x650);
  puVar4 = (undefined8 *)(param_1 + 0x650);
  for (lVar2 = 0x48; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(param_2 + 0x510);
  *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(param_2 + 0x518);
  uVar1 = FUN_017e3300(param_2);
  FUN_017e32e0(param_1,uVar1);
  return;
}

