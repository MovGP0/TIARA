/* Ghidra address: 01d7a5f0 */
/* Ghidra symbol: FUN_01d7a5f0 */


void FUN_01d7a5f0(void)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR_DAT_02004440;
  *(undefined8 *)PTR_DAT_02004440 = 0;
  FUN_00410f20(uVar1);
  FUN_0173cad0();
  uVar1 = *(undefined8 *)PTR_DAT_02002c40;
  *(undefined8 *)PTR_DAT_02002c40 = 0;
  FUN_00410f20(uVar1);
  FUN_00eae050(*(undefined8 *)PTR_DAT_02004008);
  FUN_01710710();
  FUN_01710780();
  FUN_00410f20(*(undefined8 *)PTR_DAT_02002da8);
  FUN_00410f20(*(undefined8 *)PTR_DAT_02003a60);
  uVar1 = *(undefined8 *)PTR_DAT_02004110;
  *(undefined8 *)PTR_DAT_02004110 = 0;
  FUN_00410f20(uVar1);
  FUN_00410f20(*(undefined8 *)PTR_DAT_020016d0);
  if (DAT_02000030 != 0) {
    thunk_FUN_041c8c2f(DAT_02000030);
  }
  return;
}

