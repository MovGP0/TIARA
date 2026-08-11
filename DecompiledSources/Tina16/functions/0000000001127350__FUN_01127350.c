/* Ghidra address: 01127350 */
/* Ghidra symbol: FUN_01127350 */


void FUN_01127350(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
  (**(code **)(*plVar1 + 0x38))(plVar1,local_20);
  (**(code **)(**(longlong **)(param_1 + 0xa21) + 0x60))
            (*(longlong **)(param_1 + 0xa21),local_20[0]);
  if ((*(char *)(param_1 + 0xa29) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x808) + 0x5e0) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xa29) = uVar2;
  FUN_016d7170(0,param_1 + 0xa11,param_1 + 0xb68);
  if (*(longlong *)(param_1 + 0xb68) != 0) {
    FUN_016fd940(*(undefined8 *)(param_1 + 0xb68));
  }
  FUN_00414480(local_20);
  return;
}

