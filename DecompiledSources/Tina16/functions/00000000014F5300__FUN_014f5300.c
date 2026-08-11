/* Ghidra address: 014f5300 */
/* Ghidra symbol: FUN_014f5300 */


void FUN_014f5300(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 0x4c8) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_1 + 0x4c8) & 0x1f)
            & 0x28U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (*(longlong *)(param_1 + 0x13b0) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x13b0);
    *puVar1 = *(undefined8 *)(param_1 + 5000);
    puVar1[1] = *(undefined8 *)(param_1 + 0x1390);
    puVar1[2] = *(undefined8 *)(param_1 + 0x1398);
    puVar1[3] = *(undefined8 *)(param_1 + 0x13a0);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x13a8);
    *(undefined8 *)(param_1 + 0x13b0) = 0;
  }
  return;
}

