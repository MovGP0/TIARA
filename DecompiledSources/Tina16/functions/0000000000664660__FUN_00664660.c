/* Ghidra address: 00664660 */
/* Ghidra symbol: FUN_00664660 */


void FUN_00664660(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\x01') {
    uVar1 = FUN_00809cf0(*(undefined8 *)PTR_DAT_02005950);
    FUN_008077f0(uVar1);
  }
  else {
    uVar1 = FUN_00809cf0(*(undefined8 *)PTR_DAT_02005950);
    FUN_008077b0(uVar1);
  }
  return;
}

