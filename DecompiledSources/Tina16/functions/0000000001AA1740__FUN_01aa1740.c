/* Ghidra address: 01aa1740 */
/* Ghidra symbol: FUN_01aa1740 */


void FUN_01aa1740(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  sVar1 = FUN_01d03160(*(undefined8 *)(param_1 + 0x550));
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x288))(*(longlong **)(param_1 + 0x550),local_30);
  iVar2 = FUN_01aa16f0(*(undefined8 *)(param_1 + 0x550));
  if (((sVar1 == 0xf1) || (sVar1 == 0xf0)) && (iVar2 == 0)) {
    FUN_01aa16b0(param_1);
  }
  FUN_00414480(local_30);
  return;
}

