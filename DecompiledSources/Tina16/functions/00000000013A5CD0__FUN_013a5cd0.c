/* Ghidra address: 013a5cd0 */
/* Ghidra symbol: FUN_013a5cd0 */


ushort * FUN_013a5cd0(undefined8 param_1,int param_2)

{
  ushort *puVar1;
  longlong lVar2;
  
  puVar1 = (ushort *)FUN_004095c0(0x10);
  if (0xffff < param_2) {
    param_2 = 0xffff;
  }
  *puVar1 = (ushort)param_2;
  puVar1[1] = 8;
  lVar2 = FUN_004095c0((uint)*puVar1 * 2);
  *(longlong *)(puVar1 + 4) = lVar2;
  if (lVar2 != 0) {
    FUN_0040d200(lVar2,(uint)*puVar1 * 2,0);
  }
  return puVar1;
}

