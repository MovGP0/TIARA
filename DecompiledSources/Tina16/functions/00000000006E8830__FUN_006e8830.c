/* Ghidra address: 006e8830 */
/* Ghidra symbol: FUN_006e8830 */


int FUN_006e8830(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = FUN_004170c0(&LAB_006e8888,param_2,1); iVar1 != 0;
      iVar1 = FUN_004170c0(&LAB_006e8888,param_2,iVar1 + 2)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

