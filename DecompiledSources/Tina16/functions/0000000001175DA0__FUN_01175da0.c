/* Ghidra address: 01175da0 */
/* Ghidra symbol: FUN_01175da0 */


void FUN_01175da0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_011762d0(PTR_DAT_020013e8);
  *(undefined4 *)PTR_DAT_02001520 = uVar1;
  if (*(int *)PTR_DAT_02001520 < 1) {
    FUN_0115f5b0(PTR_DAT_020019a0,PTR_DAT_020013e8);
    FUN_0115fb90(PTR_DAT_020013e8);
  }
  return;
}

