/* Ghidra address: 00c8c8f0 */
/* Ghidra symbol: FUN_00c8c8f0 */


void FUN_00c8c8f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00882a80(param_1);
  cVar2 = FUN_00882a90(param_1);
  lVar1 = DAT_01ea9398;
  if ((cVar2 == '\0') && (lVar1 = param_1, DAT_01ea9398 != 0)) {
    FUN_0041ddd0(&local_10,PTR_PTR_02001d48);
    uVar3 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_10);
    FUN_004134c0(uVar3);
    lVar1 = param_1;
  }
  DAT_01ea9398 = lVar1;
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 0xfa;
  *(undefined1 *)(param_1 + 0x80) = 1;
  FUN_00414480(&local_10);
  return;
}

