/* Ghidra address: 01116080 */
/* Ghidra symbol: FUN_01116080 */


undefined8 FUN_01116080(undefined8 param_1,undefined2 *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar4 = 0;
  if (local_res10[0] != (undefined2 *)0x0) {
    iVar4 = *(int *)(local_res10[0] + -2);
  }
  if (0 < iVar4) {
    cVar1 = FUN_00c53600(*local_res10[0]);
    if (cVar1 != '\0') {
      FUN_00416ba0(local_res10,&LAB_01116174,local_res10[0]);
    }
  }
  iVar3 = 1;
  iVar4 = 0;
  if (local_res10[0] != (undefined2 *)0x0) {
    iVar4 = *(int *)(local_res10[0] + -2);
  }
  if (0 < iVar4) {
    do {
      lVar5 = (longlong)iVar3;
      cVar1 = FUN_00c535d0(local_res10[0][lVar5 + -1]);
      if (cVar1 == '\0') {
        cVar1 = FUN_00c53600(local_res10[0][lVar5 + -1]);
        if (cVar1 == '\0') {
          lVar2 = FUN_00414de0(local_res10);
          *(undefined2 *)(lVar2 + -2 + lVar5 * 2) = 0x5f;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar4);
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

