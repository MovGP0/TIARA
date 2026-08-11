/* Ghidra address: 0043e0b0 */
/* Ghidra symbol: FUN_0043e0b0 */


void FUN_0043e0b0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004095c0(0x18);
  *puVar1 = DAT_01dbfb48;
  puVar1[1] = *(undefined8 *)PTR_PTR_02001588;
  puVar1[2] = param_1;
  DAT_01dbfb48 = puVar1;
  *(code **)PTR_PTR_02001588 = FUN_0043e070;
  return;
}

