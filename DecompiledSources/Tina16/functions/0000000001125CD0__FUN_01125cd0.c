/* Ghidra address: 01125cd0 */
/* Ghidra symbol: FUN_01125cd0 */


void FUN_01125cd0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(char *)(*(longlong *)(param_1 + 0x808) + 0x5e0) != '\0') {
    if (((*(int *)(param_1 + 0xb48) == 8) &&
        (iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0xb58),L"noname.exc"), iVar2 == 0)) ||
       ((*(int *)(param_1 + 0xb48) == 9 &&
        (iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0xb60),L"noname.pwl"), iVar2 == 0)))) {
      FUN_01125df0(param_1);
    }
    else {
      if (*(int *)(param_1 + 0xb48) == 8) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
        (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined8 *)(param_1 + 0xb58));
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
        (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined8 *)(param_1 + 0xb60));
      }
      FUN_00c0dad0(*(undefined8 *)(param_1 + 0x808),0);
    }
    return;
  }
  return;
}

