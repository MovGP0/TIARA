/* Ghidra address: 01179050 */
/* Ghidra symbol: FUN_01179050 */


void FUN_01179050(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x828) + 0xa8))(*(longlong **)(param_1 + 0x828));
  if (cVar1 != '\0') {
    uVar2 = FUN_005fce60(*(undefined8 *)(*(longlong *)(param_1 + 0x828) + 0xd0));
    FUN_005fce70(*(undefined8 *)(*(longlong *)(param_1 + 0x7c8) + 0xb8),uVar2);
    uVar2 = FUN_005fce00(*(undefined8 *)(*(longlong *)(param_1 + 0x828) + 0xd0));
    FUN_005fce30(*(undefined8 *)(*(longlong *)(param_1 + 0x7c8) + 0xb8),uVar2);
    FUN_005fccd0(*(undefined8 *)(*(longlong *)(param_1 + 0x828) + 0xd0),&local_10);
    FUN_005fcd80(*(undefined8 *)(*(longlong *)(param_1 + 0x7c8) + 0xb8),local_10);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x7c8) + 0xb8),
                 *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x828) + 0xd0) + 0x28));
  }
  FUN_00414480(&local_10);
  return;
}

