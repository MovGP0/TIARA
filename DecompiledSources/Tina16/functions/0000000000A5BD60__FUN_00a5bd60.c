/* Ghidra address: 00a5bd60 */
/* Ghidra symbol: FUN_00a5bd60 */


void FUN_00a5bd60(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10);
  uVar1 = FUN_00a52510(&PTR_FUN_00a4ffc0,1,uVar2,
                       *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x30));
  FUN_004aec30(uVar2,param_2,uVar1);
  uVar2 = FUN_00a5eab0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10),param_2);
  uVar1 = FUN_00a5eab0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10),param_2 + -1);
  FUN_00a52a80(uVar2,0,uVar1);
  uVar2 = FUN_00a5eab0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10),param_2);
  FUN_00a5adf0(uVar2,*(undefined8 *)(param_1 + 0x48),
               *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x31),
               *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38),
               *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x40),
               *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48),param_3,
               *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x58),
               *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x60),0,param_2 + -1);
  return;
}

