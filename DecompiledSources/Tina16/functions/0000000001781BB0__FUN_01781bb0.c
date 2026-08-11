/* Ghidra address: 01781bb0 */
/* Ghidra symbol: FUN_01781bb0 */


void FUN_01781bb0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  uVar1 = *(undefined8 *)(param_1 + 0x6d0);
  uVar2 = FUN_0068bbb0(uVar1);
  uVar2 = thunk_FUN_03f3ed25(uVar2,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_0068bc30(uVar1,uVar2);
  return;
}

