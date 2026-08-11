/* Ghidra address: 0197a470 */
/* Ghidra symbol: FUN_0197a470 */


undefined8 FUN_0197a470(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  
  uVar1 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0xe0) + 0x74) != 0) {
    local_9 = 0;
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      uVar1 = FUN_0197a3e0(auStack_38,*(undefined8 *)(param_1 + 0xe0));
    }
    else {
      uVar1 = FUN_0197a470(*(longlong *)(param_1 + 0xd8));
    }
  }
  return uVar1;
}

