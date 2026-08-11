/* Ghidra address: 004132a0 */
/* Ghidra symbol: FUN_004132a0 */


void FUN_004132a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_2 + 0x118) = 0;
  lVar1 = FUN_0041f930();
  *(undefined8 *)(param_2 + 0x110) = *(undefined8 *)(lVar1 + 0x208);
  lVar1 = *(longlong *)(param_2 + 0x110);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(longlong *)(param_2 + 0x110) == *(longlong *)(param_2 + 0x108)) break;
    *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x110);
    *(undefined8 *)(param_2 + 0x110) = **(undefined8 **)(param_2 + 0x110);
    lVar1 = *(longlong *)(param_2 + 0x110);
  }
  if ((*(longlong *)(param_2 + 0x118) == 0) && (*(int *)(*(longlong *)(param_2 + 0x100) + 8) != 1))
  {
    return;
  }
  if (*(longlong *)(param_2 + 0x118) == 0) {
    lVar1 = FUN_0041f930();
    *(undefined8 *)(lVar1 + 0x208) = 0;
  }
  else {
    **(undefined8 **)(param_2 + 0x118) = **(undefined8 **)(param_2 + 0x110);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x110) + 0x10);
  if (lVar1 != 0) {
    FUN_00410f20(lVar1);
    *(undefined8 *)(*(longlong *)(param_2 + 0x110) + 0x10) = 0;
  }
  FUN_00409750(*(undefined8 *)(param_2 + 0x110));
  return;
}

