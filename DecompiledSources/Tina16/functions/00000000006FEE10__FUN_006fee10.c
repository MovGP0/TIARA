/* Ghidra address: 006fee10 */
/* Ghidra symbol: FUN_006fee10 */


undefined8 FUN_006fee10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_007f9b70(*(undefined8 *)(param_1 + 0x50),0);
  if ((lVar2 == 0) || (*(longlong *)(*(longlong *)PTR_DAT_02005950 + 200) == 0)) {
    uVar3 = 0;
  }
  else {
    if ((lVar2 != *(longlong *)(*(longlong *)PTR_DAT_02005950 + 200)) &&
       (cVar1 = FUN_00654850(lVar2,*(longlong *)(*(longlong *)PTR_DAT_02005950 + 200)),
       cVar1 == '\0')) {
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}

