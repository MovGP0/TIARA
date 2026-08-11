/* Ghidra address: 018872f0 */
/* Ghidra symbol: FUN_018872f0 */


void FUN_018872f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  while (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x10),0);
    FUN_00410f20(uVar1);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x10));
    if (*(char *)(param_1 + 0x28) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),local_20,0);
      FUN_004412f0(local_20[0]);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))(*(longlong **)(param_1 + 0x18));
    }
  }
  FUN_01888a10(*(undefined8 *)(param_1 + 8));
  FUN_00414480(local_20);
  return;
}

