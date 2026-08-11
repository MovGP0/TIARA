/* Ghidra address: 005b77f0 */
/* Ghidra symbol: FUN_005b77f0 */


void FUN_005b77f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong *local_28;
  undefined1 local_20;
  
  local_38 = *(undefined8 *)(param_1 + 0x78);
  local_30 = 0x11;
  lVar1 = FUN_00416740(*(undefined8 *)(param_1 + 0x78));
  lVar1 = *(longlong *)(param_1 + 0x58) - lVar1;
  local_40 = lVar1 / 2 + 1;
  local_28 = &local_40;
  local_20 = 0x10;
  uVar2 = FUN_0044d8d0(&PTR_FUN_005b7368,CONCAT71((int7)((ulonglong)(lVar1 % 2) >> 8),1),
                       PTR_PTR_02002888,&local_38,1);
  FUN_004134c0(uVar2);
  return;
}

