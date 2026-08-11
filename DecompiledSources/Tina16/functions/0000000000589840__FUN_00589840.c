/* Ghidra address: 00589840 */
/* Ghidra symbol: FUN_00589840 */


longlong * FUN_00589840(longlong param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  plVar5 = (longlong *)0x0;
  uVar1 = FUN_00589810(param_1);
  uVar6 = (ulonglong)uVar1;
  iVar2 = 0;
  do {
    lVar3 = 0;
    if (*(longlong *)(&DAT_020116c8 + (uVar6 & 0xff) * 8) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(&DAT_020116c8 + (uVar6 & 0xff) * 8) + -8);
    }
    if (lVar3 <= iVar2) {
      if (param_2 == '\0') {
        plVar5 = (longlong *)0x0;
      }
      else {
        if (plVar5 == (longlong *)0x0) {
          uVar4 = uVar6 & 0xff;
          lVar3 = 0;
          if (*(longlong *)(&DAT_020116c8 + uVar4 * 8) != 0) {
            lVar3 = *(longlong *)(*(longlong *)(&DAT_020116c8 + uVar4 * 8) + -8);
          }
          FUN_00419260(&DAT_020116c8 + uVar4 * 8,&DAT_005897b8,1,lVar3 + 1);
          lVar3 = 0;
          if (*(longlong *)(&DAT_020116c8 + uVar4 * 8) != 0) {
            lVar3 = *(longlong *)(*(longlong *)(&DAT_020116c8 + uVar4 * 8) + -8);
          }
          plVar5 = (longlong *)
                   (*(longlong *)(&DAT_020116c8 + (uVar6 & 0xff) * 8) + (lVar3 + -1) * 0x10);
        }
        *plVar5 = param_1;
      }
      return plVar5;
    }
    if ((*(longlong *)(*(longlong *)(&DAT_020116c8 + (uVar6 & 0xff) * 8) + (longlong)iVar2 * 0x10)
         == param_1) ||
       ((param_2 != '\0' &&
        (*(longlong *)(*(longlong *)(&DAT_020116c8 + (uVar6 & 0xff) * 8) + (longlong)iVar2 * 0x10)
         == 0)))) {
      plVar5 = (longlong *)
               (*(longlong *)(&DAT_020116c8 + (uVar6 & 0xff) * 8) + (longlong)iVar2 * 0x10);
      if (param_2 == '\0') {
        return plVar5;
      }
      if (*plVar5 != 0) {
        return plVar5;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

