/* Ghidra address: 01129f90 */
/* Ghidra symbol: FUN_01129f90 */


void FUN_01129f90(longlong param_1,undefined2 *param_2,longlong param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_4 != '\0') && (cVar1 = FUN_0046e810(param_1,param_3), cVar1 != '\0')) {
    FUN_0046e7d0(param_1,param_2,param_3);
    return;
  }
  *param_2 = *(undefined2 *)(param_1 + 8);
  uVar2 = FUN_0112cdb0(&PTR_FUN_01129488,1,*(undefined8 *)(param_3 + 8));
  *(undefined8 *)(param_2 + 4) = uVar2;
  return;
}

