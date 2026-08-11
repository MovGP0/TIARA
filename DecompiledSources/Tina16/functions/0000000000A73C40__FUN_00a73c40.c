/* Ghidra address: 00a73c40 */
/* Ghidra symbol: FUN_00a73c40 */


longlong FUN_00a73c40(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_00410e60(&DAT_00a6ab68,1);
  *(undefined4 *)(lVar2 + 0xc) = param_2;
  *(undefined4 *)(lVar2 + 0x10) = param_3;
  iVar1 = FUN_00a73ed0(param_1,param_2);
  *(int *)(lVar2 + 8) = iVar1 - param_4;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),lVar2);
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return lVar2;
}

