/* Ghidra address: 00bb2320 */
/* Ghidra symbol: FUN_00bb2320 */


void FUN_00bb2320(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_004170c0(&LAB_00bb2380,param_2,1);
  if (0 < iVar1) {
    uVar2 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,0x32,&stack0x00000000,0xffffffff);
    FUN_004134c0(uVar2);
  }
  return;
}

