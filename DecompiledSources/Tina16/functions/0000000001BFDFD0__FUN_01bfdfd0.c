/* Ghidra address: 01bfdfd0 */
/* Ghidra symbol: FUN_01bfdfd0 */


void FUN_01bfdfd0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x40),param_2);
  if (iVar2 != 0) {
    FUN_00414ad0(param_1 + 0x40,param_2);
    lVar3 = FUN_01bfd980(param_1);
    if ((lVar3 == 0) &&
       ((iVar2 = FUN_00416db0(param_2,&DAT_01bfe07c), iVar2 == 0 ||
        (iVar2 = FUN_00416db0(param_2,&DAT_01bfe08c), iVar2 == 0)))) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    *(char *)(param_1 + 0x94) = cVar1;
    if (cVar1 != '\0') {
      FUN_01bfde30(param_1,0);
      FUN_01bfe3e0(param_1,0);
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_0064de00(*(longlong *)(param_1 + 0x80),param_2);
    }
    return;
  }
  return;
}

