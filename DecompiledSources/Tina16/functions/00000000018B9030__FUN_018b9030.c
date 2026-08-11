/* Ghidra address: 018b9030 */
/* Ghidra symbol: FUN_018b9030 */


void FUN_018b9030(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  if (0 < iVar1) {
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_018b9080(param_1);
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(*(longlong **)(param_1 + 0x70),0);
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
  }
  return;
}

