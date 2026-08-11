/* Ghidra address: 016640b0 */
/* Ghidra symbol: FUN_016640b0 */


void FUN_016640b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 0x13ac4) & 1) == 0) {
    *(int *)(param_1 + 0x13ac4) = *(int *)(param_1 + 0x13ac4) + 1;
  }
  *(int *)(param_1 + 0x13ac4) = *(int *)(param_1 + 0x13ac4) * 8;
  FUN_0165dfb0(param_1,0xf2);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0xf);
  FUN_0165dfb0(param_1,0x10);
  FUN_0165dfb0(param_1,0x84);
  FUN_0165dfb0(param_1,0x24);
  FUN_0165e0c0(param_1,(*(int *)(param_1 + 0x13ac0) + -1) * 8);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0x81);
  FUN_0165dfb0(param_1,0xc4);
  FUN_0165e0c0(param_1,*(undefined4 *)(param_1 + 0x13ac4));
  FUN_0165dfb0(param_1,0x5b);
  FUN_0165dfb0(param_1,0x5d);
  FUN_0165dfb0(param_1,0xc3);
  FUN_00409a70(param_1 + 0x13ac4,
               **(longlong **)(param_1 + 0x13ae0) + (longlong)*(int *)(param_1 + 0x13ac8),4);
  *(int *)(param_1 + 0x100) =
       *(int *)(param_1 + 0x100) + (0x10 - *(int *)(param_1 + 0x100) % 0x10) % 0x10;
  lVar1 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x100) + 4));
  *(longlong *)(param_2 + 200) = lVar1;
  FUN_00409a70(param_1 + 0x100,lVar1,4);
  FUN_00409a70(*(undefined8 *)(param_1 + 0xf8),lVar1 + 4,(longlong)*(int *)(param_1 + 0x100));
  return;
}

