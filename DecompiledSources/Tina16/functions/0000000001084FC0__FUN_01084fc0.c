/* Ghidra address: 01084fc0 */
/* Ghidra symbol: FUN_01084fc0 */


void FUN_01084fc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_006decb0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x550),iVar4);
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x10),local_res10[0]);
      if (iVar2 == 0) {
        FUN_006dd110(lVar3,1);
        FUN_010792a0(param_1,lVar3);
        FUN_010792b0(param_1,lVar3);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_res10);
  return;
}

