/* Ghidra address: 016983e0 */
/* Ghidra symbol: FUN_016983e0 */


void FUN_016983e0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  while( true ) {
    iVar1 = FUN_00611650(*(undefined8 *)(param_1 + 0x28));
    if (iVar1 < 1) break;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28));
    FUN_01698a10(param_1,uVar2);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  while( true ) {
    iVar1 = FUN_00611650(*(undefined8 *)(param_1 + 0x30));
    if (iVar1 < 1) break;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))(*(longlong **)(param_1 + 0x30));
    FUN_004095f0(uVar2);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

