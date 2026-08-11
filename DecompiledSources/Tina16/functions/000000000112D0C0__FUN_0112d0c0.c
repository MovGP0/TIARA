/* Ghidra address: 0112d0c0 */
/* Ghidra symbol: FUN_0112d0c0 */


undefined8 FUN_0112d0c0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  int local_2c;
  ushort local_28;
  ushort local_26;
  ushort local_24;
  ushort local_22;
  ushort local_20;
  ushort local_1e;
  int local_1c;
  
  FUN_0112ce60(param_1,&local_28,param_1 + 8);
  FUN_0112ce60(param_1,&local_38,param_2 + 8);
  iVar1 = (uint)local_28 - (uint)local_38;
  if (iVar1 == 0) {
    iVar1 = (uint)local_26 - (uint)local_36;
  }
  if (iVar1 == 0) {
    iVar1 = (uint)local_24 - (uint)local_34;
  }
  if (iVar1 == 0) {
    iVar1 = (uint)local_22 - (uint)local_32;
  }
  if (iVar1 == 0) {
    iVar1 = (uint)local_20 - (uint)local_30;
  }
  if (iVar1 == 0) {
    iVar1 = (uint)local_1e - (uint)local_2e;
  }
  if (iVar1 == 0) {
    iVar1 = local_1c - local_2c;
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

