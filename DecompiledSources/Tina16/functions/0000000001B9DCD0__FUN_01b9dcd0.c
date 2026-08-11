/* Ghidra address: 01b9dcd0 */
/* Ghidra symbol: FUN_01b9dcd0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b9dcd0(void)

{
  char cVar1;
  
  while( true ) {
    FUN_0040dfc0(&DAT_02110f78,&DAT_0211126a,0xff);
    FUN_0040e480(&DAT_02110f78);
    FUN_00409900();
    _DAT_0211136c = _DAT_0211136c + 1;
    if ((DAT_0211126a != '\0') && (DAT_0211126b != ';')) break;
    cVar1 = FUN_0040d1c0(&DAT_02110f78);
    FUN_00409900();
    if (cVar1 != '\0') {
      return;
    }
  }
  return;
}

