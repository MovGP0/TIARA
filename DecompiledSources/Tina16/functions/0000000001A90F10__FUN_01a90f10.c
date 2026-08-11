/* Ghidra address: 01a90f10 */
/* Ghidra symbol: FUN_01a90f10 */


void FUN_01a90f10(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_a8;
  
  puVar2 = &local_a8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_01a92020(DAT_02110870);
  iVar3 = 0x10;
  puVar2 = &local_a8;
  do {
    FUN_01a91f00(DAT_02110870,*(undefined4 *)puVar2,*(undefined4 *)((longlong)puVar2 + 4));
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_01a91f00(DAT_02110870,0xc2c2c2,L"plication/x-msmoney");
  FUN_01a91f00(DAT_02110870,0x7932be,0x7932be);
  FUN_01a91f00(DAT_02110870,&DAT_00919b3b,&DAT_00919b3b);
  return;
}

