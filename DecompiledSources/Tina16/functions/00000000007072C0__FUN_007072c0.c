/* Ghidra address: 007072c0 */
/* Ghidra symbol: FUN_007072c0 */


void FUN_007072c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),local_res10[0]);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x18,local_res10[0]);
    lVar2 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
    if ((*(ushort *)(lVar2 + 0x34) & 1) == 0) {
      uVar3 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
      FUN_006f7580(uVar3);
    }
  }
  FUN_00414480(local_res10);
  return;
}

