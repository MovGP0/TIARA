/* Ghidra address: 00c8b100 */
/* Ghidra symbol: FUN_00c8b100 */


void FUN_00c8b100(longlong param_1,longlong *param_2,int param_3,char param_4,int param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  if (param_3 < 0) {
    local_res18[0] = *(int *)(param_1 + 0x30);
  }
  uVar1 = FUN_008764c0(param_5,0);
  if (0 < local_res18[0]) {
    FUN_00c8ab20(param_1,local_res18,uVar1);
    if (param_4 == '\0') {
      uVar3 = 0;
      lVar2 = 0;
      if (*param_2 != 0) {
        lVar2 = *(longlong *)(*param_2 + -8);
      }
      if (lVar2 < local_res18[0]) {
        FUN_00419260(param_2,&DAT_0086e978,1,(longlong)local_res18[0]);
      }
    }
    else {
      uVar3 = 0;
      if (*param_2 != 0) {
        uVar3 = *(ulonglong *)(*param_2 + -8);
      }
      FUN_00419260(param_2,&DAT_0086e978,1,(longlong)((int)uVar3 + local_res18[0]));
    }
    if (param_5 < 0) {
      FUN_00874e50(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),param_2,
                   uVar3 & 0xffffffff,local_res18[0]);
      FUN_00c8b3f0(param_1,local_res18[0]);
    }
    else {
      FUN_00874e50(*(undefined8 *)(param_1 + 8),param_5,param_2,uVar3 & 0xffffffff,local_res18[0]);
    }
  }
  return;
}

