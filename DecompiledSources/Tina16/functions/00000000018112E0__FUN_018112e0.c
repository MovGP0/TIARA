/* Ghidra address: 018112e0 */
/* Ghidra symbol: FUN_018112e0 */


void FUN_018112e0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_004b9ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28));
  FUN_0180d780(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28));
  FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28),0);
  FUN_004c23f0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x20),0);
  FUN_004a0d20(&PTR_FUN_0063d930);
  while( true ) {
    lVar2 = FUN_004bea20(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x20));
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x180) + 0x28);
    lVar3 = (**(code **)*puVar1)(puVar1);
    if (lVar3 <= lVar2) break;
    FUN_004c0960(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x20),
                 *(undefined8 *)(param_1 + 0x158));
  }
  return;
}

