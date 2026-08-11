/* Ghidra address: 01782c60 */
/* Ghidra symbol: FUN_01782c60 */


void FUN_01782c60(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  lVar1 = *(longlong *)(param_1 + 0xd0);
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x18),
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_0064b380(lVar1,2,uVar2);
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  return;
}

