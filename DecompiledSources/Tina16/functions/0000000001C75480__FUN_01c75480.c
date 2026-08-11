/* Ghidra address: 01c75480 */
/* Ghidra symbol: FUN_01c75480 */


void FUN_01c75480(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00807f90(*(undefined8 *)PTR_DAT_02005950);
  iVar2 = FUN_00807f70(*(undefined8 *)PTR_DAT_02005950);
  FUN_01c74cf0(param_1,(longlong)iVar1 / 2 & 0xffffffff,(longlong)iVar2 / 2 & 0xffffffff);
  return;
}

