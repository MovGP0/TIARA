/* Ghidra address: 0195ba50 */
/* Ghidra symbol: FUN_0195ba50 */


void FUN_0195ba50(undefined8 param_1,byte *param_2,byte param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  ulonglong in_RAX;
  
  if (param_3 < 8) {
    iVar2 = (int)CONCAT71((int7)(in_RAX >> 8),1) << (param_3 & 0x1f);
    bVar1 = ~(byte)iVar2;
    in_RAX = (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),bVar1);
    *param_2 = *param_2 & bVar1;
  }
  if (param_4 < 8) {
    *param_2 = *param_2 | (byte)((int)CONCAT71((int7)(in_RAX >> 8),1) << (param_4 & 0x1f));
  }
  return;
}

