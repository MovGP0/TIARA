/* Ghidra address: 00ccf890 */
/* Ghidra symbol: FUN_00ccf890 */


int FUN_00ccf890(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    iVar1 = FUN_00cd1040(*(undefined8 *)(param_1 + 0x1d0),param_2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else if (iVar1 == 5) {
      iVar1 = FUN_00cb9e10(param_1,0xffffffff);
    }
    else {
      FUN_00c994a0(&PTR_FUN_00c97b70,iVar1,param_2,0);
    }
  }
  else {
    iVar1 = FUN_00cb9e10(param_1,param_2);
  }
  return iVar1;
}

