/* Ghidra address: 00a0bdd0 */
/* Ghidra symbol: FUN_00a0bdd0 */


void FUN_00a0bdd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int local_1c;
  
  local_1c = 0;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x48) + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    local_1c = (**(code **)*puVar1)(puVar1);
  }
  (**(code **)(*param_2 + 0x20))(param_2,&local_1c,4);
  if (0 < local_1c) {
    (**(code **)(*param_2 + 0x20))
              (param_2,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 8),
               local_1c);
  }
  return;
}

