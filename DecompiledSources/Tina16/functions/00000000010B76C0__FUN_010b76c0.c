/* Ghidra address: 010b76c0 */
/* Ghidra symbol: FUN_010b76c0 */


ulonglong FUN_010b76c0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  
  *(undefined1 *)(param_1 + 0x182) = 0;
  FUN_010b9520(param_1);
  uVar3 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(param_1 + 0x198) = uVar3;
  FUN_00414480(param_1 + 0x1a0);
  uVar3 = thunk_FUN_040ef593(0);
  uVar1 = thunk_FUN_03e5bd07(uVar3,8);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  iVar2 = thunk_FUN_03e5bd07(uVar3,4);
  *(int *)(param_1 + 0x78) = iVar2 * 100;
  uVar1 = thunk_FUN_03e5bd07(uVar3,10);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  iVar2 = thunk_FUN_03e5bd07(uVar3,6);
  *(int *)(param_1 + 0x7c) = iVar2 * 100;
  thunk_FUN_041a9b5c(0,uVar3);
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1) & 0xffffffff;
}

