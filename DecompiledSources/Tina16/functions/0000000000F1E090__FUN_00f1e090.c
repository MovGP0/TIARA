/* Ghidra address: 00f1e090 */
/* Ghidra symbol: FUN_00f1e090 */


void FUN_00f1e090(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (DAT_0202eb40 != 0) {
    cVar1 = FUN_01cc6030(DAT_0202eb40);
    if (cVar1 != '\0') {
      DAT_0202eb40 = 0;
    }
  }
  lVar2 = FUN_019a4600();
  if ((((lVar2 == 0) || (*(longlong *)(lVar2 + 0x488) == 0)) ||
      (*(longlong *)(*(longlong *)(lVar2 + 0x488) + 0xf10) == 0)) ||
     (*(longlong *)PTR_DAT_020027c0 == 0)) {
    DAT_0202eb40 = *(longlong *)PTR_DAT_020027c0;
  }
  else {
    DAT_0202eb40 = FUN_01cc3a00(&PTR_FUN_01cb5bc0,1,*(undefined8 *)PTR_DAT_020027c0);
  }
  if (DAT_0202eb40 != 0) {
    FUN_01cc6020(DAT_0202eb40);
  }
  if (DAT_0202eb48 != 0) {
    cVar1 = FUN_01cc6030(DAT_0202eb48);
    if (cVar1 != '\0') {
      DAT_0202eb48 = 0;
    }
  }
  if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x488) == 0)) ||
     ((*(longlong *)(*(longlong *)(lVar2 + 0x488) + 0xf10) == 0 ||
      (*(longlong *)PTR_DAT_020037b0 == 0)))) {
    DAT_0202eb48 = *(longlong *)PTR_DAT_020037b0;
  }
  else {
    DAT_0202eb48 = FUN_01cc3a00(&PTR_FUN_01cb5bc0,1,*(undefined8 *)PTR_DAT_020037b0);
  }
  if (DAT_0202eb48 != 0) {
    FUN_01cc6020(DAT_0202eb48);
  }
  FUN_00f1df90(*(undefined8 *)PTR_DAT_02001288,param_1);
  FUN_00f1df90(*(undefined8 *)PTR_DAT_02005188,param_1);
  if (*(longlong *)PTR_DAT_02001288 == 0) {
    FUN_00f1df90(DAT_0202eb40,param_1);
    FUN_00f1df90(DAT_0202eb48,param_1);
    FUN_00f1df90(*(undefined8 *)PTR_DAT_02004fb8,param_1);
    FUN_00f1df90(*(undefined8 *)PTR_DAT_02003118,param_1);
    FUN_00f1df90(*(undefined8 *)PTR_DAT_02001d00,param_1);
    FUN_00f1df90(*(undefined8 *)PTR_DAT_02005118,param_1);
    FUN_00f1df90(*(undefined8 *)PTR_DAT_02001630,param_1);
  }
  return;
}

