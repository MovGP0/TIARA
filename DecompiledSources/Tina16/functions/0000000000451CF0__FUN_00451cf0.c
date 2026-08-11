/* Ghidra address: 00451cf0 */
/* Ghidra symbol: FUN_00451cf0 */


void FUN_00451cf0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  iVar3 = 0;
  do {
    puVar1 = *(undefined8 **)(param_1 + 8 + (longlong)iVar3 * 8);
    *(undefined8 *)(param_1 + 8 + (longlong)iVar3 * 8) = 0;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_004095f0(puVar1);
      puVar1 = puVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

