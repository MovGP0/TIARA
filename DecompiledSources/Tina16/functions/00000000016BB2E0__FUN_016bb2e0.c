/* Ghidra address: 016bb2e0 */
/* Ghidra symbol: FUN_016bb2e0 */


void FUN_016bb2e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + 0x18);
  uVar3 = (**(code **)*puVar1)(puVar1);
  if (((longlong)uVar3 < 0) ||
     (uVar3 <= (ulonglong)
               (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x9b0) -
               *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 8)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  **(undefined1 **)(param_1 + 0x70) = uVar2;
  return;
}

