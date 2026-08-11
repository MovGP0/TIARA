/* Ghidra address: 0180dc80 */
/* Ghidra symbol: FUN_0180dc80 */


void FUN_0180dc80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_00416740(param_1);
  uVar2 = FUN_0180bfb0();
  FUN_01809b60(uVar2,local_20,L"mbError");
  uVar2 = FUN_00416740(local_20[0]);
  FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar1,uVar2,0x10);
  FUN_00414480(local_20);
  return;
}

