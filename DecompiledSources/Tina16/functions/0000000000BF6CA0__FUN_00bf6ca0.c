/* Ghidra address: 00bf6ca0 */
/* Ghidra symbol: FUN_00bf6ca0 */


void FUN_00bf6ca0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x170) + 0x620);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x170) + 0x610) + 0x4b) != '\0') {
    uVar2 = FUN_00bf2c10(*(undefined8 *)(param_2 + 0x170));
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x170) + 0x620);
    (**(code **)(*plVar1 + 0x50))(plVar1,uVar2);
  }
  return;
}

