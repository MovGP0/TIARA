/* Ghidra address: 01a2e3f0 */
/* Ghidra symbol: FUN_01a2e3f0 */


void FUN_01a2e3f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_0065b870(param_1);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),local_20);
  uVar2 = FUN_00416740(local_20[0]);
  thunk_FUN_0419adcc(uVar1,L"open",uVar2,0,0,5);
  FUN_00414480(local_20);
  return;
}

