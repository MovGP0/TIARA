/* Ghidra address: 019c52f0 */
/* Ghidra symbol: FUN_019c52f0 */


void FUN_019c52f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong local_res18 [2];
  undefined8 local_38;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  iVar4 = 0;
  FUN_00419260(local_30,&DAT_019c52b0,1,1);
  iVar5 = 0;
  if (local_res18[0] != 0) {
    iVar5 = (int)*(undefined8 *)(local_res18[0] + -8);
  }
  iVar3 = 0;
  if (iVar5 - 1U < 0x80000000) {
    do {
      FUN_00419260(local_30,&DAT_019c52b0,1,(longlong)(iVar4 + 1));
      uVar2 = *(undefined8 *)(local_res18[0] + (longlong)iVar3 * 8);
      local_38._0_4_ = (int)uVar2;
      local_38._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
      local_38 = CONCAT44(local_38._4_4_ * 8,(int)local_38 * 8);
      *(undefined8 *)(local_30[0] + (longlong)iVar4 * 8) = local_38;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (1 < iVar4) {
    lVar1 = 0;
    if (local_30[0] != 0) {
      lVar1 = *(longlong *)(local_30[0] + -8);
    }
    uVar2 = FUN_019bbfe0(param_2,local_30[0],lVar1 + -1,iVar4);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 8),uVar2);
  }
  FUN_00419430(local_30,&DAT_019c52b0);
  FUN_00419430(local_res18,&DAT_0147b748);
  return;
}

