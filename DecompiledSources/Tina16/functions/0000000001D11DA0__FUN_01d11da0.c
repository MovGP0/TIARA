/* Ghidra address: 01d11da0 */
/* Ghidra symbol: FUN_01d11da0 */


void FUN_01d11da0(longlong param_1,uint param_2)

{
  int iVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x90))(*(longlong **)(param_1 + 0xa0));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa0));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))(*(longlong **)(param_1 + 0x50));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x90))(*(longlong **)(param_1 + 0x50));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x90))(*(longlong **)(param_1 + 0x58));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))(*(longlong **)(param_1 + 0x60));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x90))(*(longlong **)(param_1 + 0x60));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))(*(longlong **)(param_1 + 0x68));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x90))(*(longlong **)(param_1 + 0x68));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x90))(*(longlong **)(param_1 + 0x70));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

