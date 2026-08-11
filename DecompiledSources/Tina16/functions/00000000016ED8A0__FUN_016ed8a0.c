/* Ghidra address: 016ed8a0 */
/* Ghidra symbol: FUN_016ed8a0 */


undefined8 * FUN_016ed8a0(undefined8 *param_1,longlong param_2,char param_3)

{
  undefined8 in_RAX;
  bool bVar1;
  
  if ((byte)(param_3 - 8U) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_00c44460(param_1,0,*(double *)(param_2 + 0x3a0) * 6.283185307179586);
  }
  else {
    *param_1 = *(undefined8 *)(param_2 + 0x4a0);
    param_1[1] = *(undefined8 *)(param_2 + 0x4a8);
  }
  return param_1;
}

