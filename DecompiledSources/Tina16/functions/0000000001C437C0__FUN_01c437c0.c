/* Ghidra address: 01c437c0 */
/* Ghidra symbol: FUN_01c437c0 */


void FUN_01c437c0(longlong param_1)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) != *(longlong *)(param_1 + 0x6f0))
  goto code_r0x01c43898;
  cVar1 = FUN_01c3c010(param_1);
  if (cVar1 != '\x01') {
    cVar1 = FUN_01c3c010(param_1);
    if (cVar1 != '\x03') {
      cVar1 = FUN_01c3c010(param_1);
      if (cVar1 == '\x04') goto LAB_01c43823;
LAB_01c4387e:
      (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x128))(*(longlong **)(param_1 + 0x8a0),1);
      goto code_r0x01c43898;
    }
LAB_01c43823:
    FUN_01c3c530(param_1,local_20);
    cVar1 = FUN_01d44920(local_20[0]);
    if (cVar1 == '\0') {
      cVar1 = FUN_01c3c270(param_1);
      if (cVar1 == '\0') goto LAB_01c4387e;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x268))(*(longlong **)(param_1 + 0x8a0),0);
  (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x128))(*(longlong **)(param_1 + 0x8a0),0);
code_r0x01c43898:
  FUN_00414480(local_20);
  return;
}

