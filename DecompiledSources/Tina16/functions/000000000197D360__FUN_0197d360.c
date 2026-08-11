/* Ghidra address: 0197d360 */
/* Ghidra symbol: FUN_0197d360 */


/* WARNING: Removing unreachable block (ram,0x0197d382) */

void FUN_0197d360(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_0197d1c0(param_1);
  FUN_00452320(param_1 + 0x10);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

