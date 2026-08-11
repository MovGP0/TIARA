/* Ghidra address: 0184b380 */
/* Ghidra symbol: FUN_0184b380 */


longlong FUN_0184b380(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  
  lVar2 = FUN_0184b2f0(auStack_48,param_2);
  if (lVar2 == 0) {
    lVar3 = FUN_0184eb50(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x88));
    if (lVar3 != 0) {
      lVar2 = FUN_0184b380(lVar3,param_2,1);
    }
  }
  if (param_3 == '\0') {
    cVar1 = FUN_004113d0(lVar2,&PTR_FUN_018453c0);
    if (cVar1 != '\0') {
      lVar2 = 0;
    }
  }
  return lVar2;
}

