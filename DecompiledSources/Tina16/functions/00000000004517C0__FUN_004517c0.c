/* Ghidra address: 004517c0 */
/* Ghidra symbol: FUN_004517c0 */


void FUN_004517c0(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)PTR_PTR_02004e98; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[6] != 0) {
      FUN_00418590(puVar1[6],&DAT_00451578);
      puVar1[6] = 0;
    }
  }
  return;
}

