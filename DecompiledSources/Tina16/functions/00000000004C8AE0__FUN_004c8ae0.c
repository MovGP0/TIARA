/* Ghidra address: 004c8ae0 */
/* Ghidra symbol: FUN_004c8ae0 */


undefined1 FUN_004c8ae0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0;
  bVar1 = *(byte *)(param_1 + *param_2);
  if (bVar1 < 0x80) {
    iVar2 = 1;
  }
  else if ((byte)(bVar1 + 0x3e) < 0x1e) {
    iVar2 = 2;
  }
  else if ((byte)(bVar1 + 0x20) < 0x10) {
    iVar2 = 3;
  }
  else if ((byte)(bVar1 + 0x10) < 8) {
    iVar2 = 4;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 == 1) {
    uVar3 = (uint)bVar1;
  }
  else if (iVar2 == 2) {
    uVar3 = (uint)(bVar1 & 0x1f) << 6 | (uint)(*(byte *)(param_1 + 1 + *param_2) & 0x3f);
  }
  else if (iVar2 == 3) {
    uVar3 = (uint)(bVar1 & 0xf) << 0xc | (uint)(*(byte *)(param_1 + 1 + *param_2) & 0x3f) << 6 |
            (uint)(*(byte *)(param_1 + 2 + *param_2) & 0x3f);
  }
  else if (iVar2 == 4) {
    uVar3 = (uint)(*(byte *)(param_1 + 2 + *param_2) & 0x3f);
    uVar3 = (uint)(bVar1 & 7) << 0x12 | (uint)(*(byte *)(param_1 + 1 + *param_2) & 0x3f) << 0xc |
            uVar3 << 6 | uVar3;
  }
  else {
    uVar3 = 0;
  }
  *param_2 = *param_2 + (longlong)iVar2;
  if (uVar3 < 0x10000) {
    local_11 = FUN_00432520();
  }
  else {
    FUN_00432040(&local_10,uVar3);
    local_11 = FUN_00432320(local_10,1);
  }
  FUN_00414480(&local_10);
  return local_11;
}

