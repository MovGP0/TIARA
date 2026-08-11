/* Ghidra address: 00431d90 */
/* Ghidra symbol: FUN_00431d90 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431d90(void)

{
  undefined1 auStack_28 [32];
  
  PTR_DAT_0200c3d8 = (undefined *)FUN_0042bf50(auStack_28);
  PTR_DAT_0200c3e0 = (undefined *)((longlong)PTR_DAT_0200c3d8 + (longlong)*(int *)PTR_DAT_0200c3d8);
  PTR_DAT_0200c3e8 =
       (undefined *)
       ((longlong)PTR_DAT_0200c3d8 + (longlong)*(int *)((longlong)PTR_DAT_0200c3d8 + 4));
  PTR_DAT_0200c3f0 =
       (undefined *)
       ((longlong)PTR_DAT_0200c3d8 + (longlong)*(int *)((longlong)PTR_DAT_0200c3d8 + 8));
  PTR_DAT_0200c3f8 =
       (undefined *)
       ((longlong)PTR_DAT_0200c3d8 + (longlong)*(int *)((longlong)PTR_DAT_0200c3d8 + 0xc));
  _DAT_0200c400 = (longlong)PTR_DAT_0200c3d8 + (longlong)*(int *)((longlong)PTR_DAT_0200c3d8 + 0x10)
  ;
  PTR_DAT_0200c408 =
       (undefined *)
       ((longlong)PTR_DAT_0200c3d8 + (longlong)*(int *)((longlong)PTR_DAT_0200c3d8 + 0x14));
  PTR_DAT_0200c410 =
       (undefined *)
       ((longlong)PTR_DAT_0200c3d8 + (longlong)*(int *)((longlong)PTR_DAT_0200c3d8 + 0x18));
  return;
}

