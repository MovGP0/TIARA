/* Ghidra address: 00aa5a30 */
/* Ghidra symbol: FUN_00aa5a30 */


int FUN_00aa5a30(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iStack0000000000000028;
  
  iVar1 = *(int *)(param_1 + 0x74);
  iVar2 = *(int *)(param_1 + 0x88);
  iStack0000000000000028 =
       *(int *)(param_4 + 8) + *(int *)(param_1 + 0x484) + *(int *)(param_1 + 0x4a4) +
       *(int *)(param_1 + 0x494);
  uVar3 = *(undefined8 *)(param_4 + 0x28);
  *(longlong *)(param_4 + 0x28) = param_1;
  FUN_00aa17f0();
  *(undefined8 *)(param_4 + 0x28) = uVar3;
  *(int *)(param_1 + 0x94) = iVar1;
  *(int *)(param_1 + 0x90) = iStack0000000000000028;
  *(int *)(param_1 + 0x98) = iStack0000000000000028 + *(int *)(param_1 + 0x514);
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x8c);
  return iVar1 + iVar2;
}

