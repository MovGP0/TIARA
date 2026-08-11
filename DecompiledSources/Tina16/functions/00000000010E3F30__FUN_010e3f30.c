/* Ghidra address: 010e3f30 */
/* Ghidra symbol: FUN_010e3f30 */


void FUN_010e3f30(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1[0xf9] + 0x328) == '\0') {
    if (*(longlong *)PTR_DAT_02004e40 != 0) {
      FUN_01c6cf20(*(undefined8 *)PTR_DAT_02004e40);
    }
    (**(code **)(*param_1 + 0x420))(param_1,param_2);
  }
  else {
    if (*(longlong *)PTR_DAT_02004e40 != 0) {
      FUN_01c6cf20(*(undefined8 *)PTR_DAT_02004e40);
      uVar1 = FUN_0136bdf0(&PTR_FUN_01363488,1,*(undefined8 *)PTR_DAT_02004e40,param_1);
      FUN_01c6cee0(*(undefined8 *)PTR_DAT_02004e40,uVar1);
    }
    (**(code **)(*param_1 + 0x418))(param_1,param_2);
  }
  return;
}

