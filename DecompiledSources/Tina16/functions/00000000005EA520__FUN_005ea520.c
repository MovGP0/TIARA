/* Ghidra address: 005ea520 */
/* Ghidra symbol: FUN_005ea520 */


void FUN_005ea520(void)

{
  DAT_02011f80 = DAT_02011f80 + -1;
  if (DAT_02011f80 == -1) {
    if (((((*(int *)PTR_DAT_02001bd8 < 6) && (*(int *)PTR_DAT_02001bd8 < 6)) &&
         ((*(int *)PTR_DAT_02001bd8 != 5 || (*(int *)PTR_DAT_02003a08 < 3)))) &&
        (((*(int *)PTR_DAT_02001bd8 != 5 || (*(int *)PTR_DAT_02003a08 != 2)) ||
         (*(int *)PTR_DAT_02004520 < 1)))) &&
       (((*(int *)PTR_DAT_02001bd8 < 6 &&
         ((*(int *)PTR_DAT_02001bd8 != 5 || (*(int *)PTR_DAT_02003a08 < 2)))) ||
        (*PTR_DAT_02004478 != '\x01')))) {
      DAT_02011f7c = 0;
    }
    else {
      DAT_02011f7c = 1;
    }
  }
  return;
}

