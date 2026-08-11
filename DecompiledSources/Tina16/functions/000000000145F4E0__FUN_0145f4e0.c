/* Ghidra address: 0145f4e0 */
/* Ghidra symbol: FUN_0145f4e0 */


void FUN_0145f4e0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  FUN_019b5af0(*(undefined8 *)PTR_DAT_02002dd8);
  lVar1 = *(longlong *)PTR_DAT_02002dd8;
  *(undefined8 *)(lVar1 + 0xe78) = param_1;
  FUN_00ef4850(lVar1);
  *(undefined1 *)(lVar1 + 0xb4) = 3;
  FUN_019b9b30(lVar1);
  cVar2 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
  if (cVar2 == '\0') {
    uVar3 = FUN_0145e720();
    *(undefined8 *)PTR_DAT_020052f8 = uVar3;
  }
  FUN_0145e3a0(lVar1,0);
  cVar2 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
  if (cVar2 == '\0') {
    FUN_00410f20(*(undefined8 *)PTR_DAT_020052f8);
    *(undefined8 *)PTR_DAT_020052f8 = 0;
  }
  FUN_019b9b60(lVar1);
  if (*(char *)(lVar1 + 0x92) == '\0') {
    FUN_013e0a40();
  }
  FUN_00ef4280(lVar1);
  return;
}

