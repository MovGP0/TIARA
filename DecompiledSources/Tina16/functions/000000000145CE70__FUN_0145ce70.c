/* Ghidra address: 0145ce70 */
/* Ghidra symbol: FUN_0145ce70 */


void FUN_0145ce70(longlong param_1,undefined8 param_2)

{
  FUN_00efdf60(param_2,*(undefined8 *)(param_1 + 0x130));
  if ((*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x20) != 0)) {
    FUN_019b8560(*(undefined8 *)(param_1 + 0x130));
    *(uint *)(*(longlong *)(param_1 + 0x130) + 0x48) =
         (uint)*(byte *)(*(longlong *)(param_1 + 0x130) + 0x45);
    *(uint *)(*(longlong *)(param_1 + 0x130) + 0x4c) =
         (uint)*(byte *)(*(longlong *)(param_1 + 0x130) + 0x44);
    FUN_01448b70(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x18),
                 *(longlong *)(param_1 + 0x130) + 0x48,0x3eb0c6f7a0b5ed8d,
                 *(longlong *)(param_1 + 0x130) + 0x368,*(longlong *)(param_1 + 0x130) + 0x4b0,
                 *(undefined8 *)(param_1 + 0x130));
    FUN_01448b70(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x20),
                 *(longlong *)(param_1 + 0x130) + 0x4c,0x3eb0c6f7a0b5ed8d,
                 *(longlong *)(param_1 + 0x130) + 0xd8,*(longlong *)(param_1 + 0x130) + 0x220,
                 *(undefined8 *)(param_1 + 0x130));
  }
  FUN_0145c620(*(undefined1 *)(param_1 + 0xff),*(undefined8 *)(param_1 + 0xe8),
               *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
               *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xd0),
               *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 200),
               *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xb8),
               *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8),
               *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x130));
  return;
}

