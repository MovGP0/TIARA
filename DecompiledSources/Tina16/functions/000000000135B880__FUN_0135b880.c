/* Ghidra address: 0135b880 */
/* Ghidra symbol: FUN_0135b880 */


void FUN_0135b880(longlong param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  while ((param_2 == '\0' && (iVar1 = FUN_00611650(*(undefined8 *)(param_1 + 8)), 0 < iVar1))) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8));
    FUN_00410f20(uVar2);
  }
  while (iVar1 = FUN_00611650(*(undefined8 *)(param_1 + 0x10)), 0 < iVar1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10));
    FUN_00410f20(uVar2);
  }
  return;
}

