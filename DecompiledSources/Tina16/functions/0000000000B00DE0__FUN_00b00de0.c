/* Ghidra address: 00b00de0 */
/* Ghidra symbol: FUN_00b00de0 */


void FUN_00b00de0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00419500();
  iVar4 = 0;
  if (local_res10[0] != 0) {
    iVar4 = (int)*(undefined8 *)(local_res10[0] + -8);
  }
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar5 = (longlong)iVar3;
      uVar1 = FUN_006dee40(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x708) + 0x550),param_3,
                           **(undefined8 **)(local_res10[0] + lVar5 * 8));
      FUN_006dc990(uVar1,*(undefined8 *)(local_res10[0] + lVar5 * 8));
      lVar5 = *(longlong *)(*(longlong *)(local_res10[0] + lVar5 * 8) + 0x10);
      lVar2 = 0;
      if (lVar5 != 0) {
        lVar2 = *(longlong *)(lVar5 + -8);
      }
      if (0 < lVar2) {
        FUN_00b00de0(param_1,*(undefined8 *)
                              (*(longlong *)(local_res10[0] + (longlong)iVar3 * 8) + 0x10),uVar1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00419430(local_res10,&DAT_00b01c88);
  return;
}

