/* Ghidra address: 00c54210 */
/* Ghidra symbol: FUN_00c54210 */


void FUN_00c54210(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00b89270();
  FUN_00b8d260(uVar2,param_1,0xffffffff);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b8),*(undefined1 *)(param_1 + 0x6c1));
  if (*(char *)(param_1 + 0x6c1) == '\0') {
    FUN_0064cc50(param_1,*(int *)(param_1 + 0x9c) - *(int *)(*(longlong *)(param_1 + 0x6b8) + 0x9c))
    ;
  }
  uVar2 = thunk_FUN_04128719();
  *(undefined8 *)(param_1 + 0x6e0) = uVar2;
  cVar1 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
  if (cVar1 == '\0') {
    uVar2 = FUN_0065b870(param_1);
    uVar2 = FUN_007f94c0(uVar2);
    *(undefined8 *)(param_1 + 0x6d8) = uVar2;
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6e8));
  return;
}

