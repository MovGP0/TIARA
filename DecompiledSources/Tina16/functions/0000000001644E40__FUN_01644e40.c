/* Ghidra address: 01644e40 */
/* Ghidra symbol: FUN_01644e40 */


void FUN_01644e40(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if ((*(char *)(*(longlong *)(param_1 + 0x78) + 0x139e0) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x78) + 0x139e1) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x1a8) + 0xe0) = uVar3;
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((*(char *)(lVar1 + 0x139e0) == '\0') || (*(char *)(lVar1 + 0x139e1) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  FUN_01601420(&local_18,uVar2);
  FUN_00416cd0(&local_10,3,L"FMixedMode: SetMixedMode_VAMS called, FMixedMode set to ",local_18,
               L" (calculated from HDLGlobals.FHasAnalog, HDLGlobals.FHasDigital)");
  FUN_01602e30(local_10,1);
  FUN_00414560(&local_18,2);
  return;
}

