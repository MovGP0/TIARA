/* Ghidra address: 0112a3b0 */
/* Ghidra symbol: FUN_0112a3b0 */


undefined8 FUN_0112a3b0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(param_2 + 8);
  if (iVar1 == 0) {
    iVar1 = (uint)*(ushort *)(param_1 + 10) - (uint)*(ushort *)(param_2 + 10);
  }
  if (iVar1 == 0) {
    iVar1 = (uint)*(ushort *)(param_1 + 0xc) - (uint)*(ushort *)(param_2 + 0xc);
  }
  if (iVar1 == 0) {
    iVar1 = (uint)*(ushort *)(param_1 + 0xe) - (uint)*(ushort *)(param_2 + 0xe);
  }
  if (iVar1 == 0) {
    iVar1 = (uint)*(ushort *)(param_1 + 0x10) - (uint)*(ushort *)(param_2 + 0x10);
  }
  if (iVar1 == 0) {
    iVar1 = (uint)*(ushort *)(param_1 + 0x12) - (uint)*(ushort *)(param_2 + 0x12);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14);
  }
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),2);
  }
  return uVar2;
}

