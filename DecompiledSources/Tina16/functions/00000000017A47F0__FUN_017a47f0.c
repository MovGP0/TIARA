/* Ghidra address: 017a47f0 */
/* Ghidra symbol: FUN_017a47f0 */


void FUN_017a47f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  lVar1 = *(longlong *)(param_1 + 0x6f0);
  uVar2 = FUN_006df4b0(*(undefined8 *)(lVar1 + 0x550));
  FUN_006e2590(lVar1,uVar2);
  FUN_0064cf60(param_1,0x33);
  return;
}

