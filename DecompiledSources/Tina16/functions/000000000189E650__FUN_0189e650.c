/* Ghidra address: 0189e650 */
/* Ghidra symbol: FUN_0189e650 */


void FUN_0189e650(void)

{
  undefined8 uVar1;
  
  DAT_02110660 = DAT_02110660 + -1;
  if (DAT_02110660 == -1) {
    if (*(longlong *)PTR_PTR_02003650 == 0) {
      *(undefined ***)PTR_PTR_02003650 = &PTR_FUN_0189d888;
    }
    if (DAT_01fb34e8 == 0) {
      DAT_01fb34e8 = FUN_01979e40(*(undefined8 *)PTR_PTR_02003650,1);
      uVar1 = FUN_0189d480();
      FUN_0189d6c0(uVar1,DAT_01fb34e8);
    }
  }
  return;
}

