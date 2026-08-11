/* Ghidra address: 01152490 */
/* Ghidra symbol: FUN_01152490 */


void FUN_01152490(int *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  
  puVar4 = PTR_DAT_02004b98;
  lVar1 = (longlong)param_2 * 0x28;
  cVar2 = PTR_DAT_02004b98[lVar1 + -0x25];
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      iVar3 = *param_1;
      lVar5 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02004b98 + lVar1 + -0x18));
      if (lVar5 <= iVar3) {
        FUN_0040c770(*(undefined8 *)(puVar4 + lVar1 + -0x10));
      }
    }
    else if ((cVar2 == '\x02') &&
            (iVar3 = *param_1,
            lVar5 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02004b98 + lVar1 + -0x18)), lVar5 <= iVar3)
            ) {
      FUN_0040c770(*(undefined8 *)(puVar4 + lVar1 + -0x10));
    }
  }
  return;
}

