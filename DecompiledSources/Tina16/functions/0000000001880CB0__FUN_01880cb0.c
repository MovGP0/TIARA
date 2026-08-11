/* Ghidra address: 01880cb0 */
/* Ghidra symbol: FUN_01880cb0 */


void FUN_01880cb0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  longlong local_20;
  
  local_20 = 0;
  FUN_00414b50(&local_20,param_2);
  if (local_20 == 0) {
    FUN_00414b50(&local_20,&LAB_01880d74);
  }
  iVar2 = 0;
  ppuVar3 = &PTR_u_mrNone_01fb0cc8;
  do {
    iVar1 = FUN_0043e420(*ppuVar3,local_20);
    if (iVar1 == 0) {
      FUN_0187fee0(param_1,(longlong)iVar2);
      goto LAB_01880d31;
    }
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
  } while (iVar2 != 0xf);
  FUN_01880350(param_1,local_20);
LAB_01880d31:
  FUN_00414480(&local_20);
  return;
}

