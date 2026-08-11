/* Ghidra address: 0163d0e0 */
/* Ghidra symbol: FUN_0163d0e0 */


undefined1 FUN_0163d0e0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  double dVar3;
  undefined8 local_20 [3];
  
  local_20[0] = 0;
  dVar3 = (double)FUN_016290e0(param_1);
  FUN_00414b50(local_20,&LAB_0163d1b4);
  iVar2 = FUN_004170c0(local_20[0],*(undefined8 *)(*(longlong *)(param_1 + 0x13980) + 0x648),1);
  if (((iVar2 < 1) || (dVar3 <= 4.1e-05)) || (4.3e-05 <= dVar3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00414480(local_20);
  return uVar1;
}

