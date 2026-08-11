/* Ghidra address: 01c77280 */
/* Ghidra symbol: FUN_01c77280 */


void FUN_01c77280(void)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           FUN_014f15b0(&PTR_FUN_014ef868,1,*(undefined8 *)PTR_DAT_02004030,PTR_DAT_02004010);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_00417c40(PTR_DAT_02004010,plVar2 + 0x131,&DAT_01d0d0b8);
  }
  FUN_00410f20(plVar2);
  return;
}

