/* Ghidra address: 004c07a0 */
/* Ghidra symbol: FUN_004c07a0 */


void FUN_004c07a0(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  bVar1 = FUN_004bea50(param_1);
  if ((bVar1 & 0xf0) == 0xf0) {
    bVar1 = FUN_004c23c0(param_1);
    *param_2 = bVar1 & 0xf;
    if ((*param_2 & 2) != 0) {
      uVar2 = FUN_004c06c0(param_1);
      *param_3 = uVar2;
    }
  }
  return;
}

