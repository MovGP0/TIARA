/* Ghidra address: 007e4e40 */
/* Ghidra symbol: FUN_007e4e40 */


undefined8 FUN_007e4e40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_30 = 0;
  FUN_007e8d80(&local_20,local_res10[0]);
  FUN_00414b50(local_res10,local_20);
  iVar1 = FUN_007e2ef0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_007e2f10(param_1,iVar4);
      FUN_007e8d80(&local_28,*(undefined8 *)(lVar3 + 0x78));
      iVar2 = FUN_0043e6d0(local_res10[0],local_28);
      if (iVar2 == 0) {
        local_30 = FUN_007e2f10(param_1,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return local_30;
}

