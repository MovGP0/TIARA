/* Ghidra address: 005264d0 */
/* Ghidra symbol: FUN_005264d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_005264d0(float param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_0040c2f0((double)param_1);
  return CONCAT44((int)((ulonglong)(dVar1 * (double)_DAT_01dd7650) >> 0x20),
                  (float)(dVar1 * (double)_DAT_01dd7650));
}

