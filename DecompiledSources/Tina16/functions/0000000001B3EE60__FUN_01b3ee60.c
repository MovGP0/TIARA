/* Ghidra address: 01b3ee60 */
/* Ghidra symbol: FUN_01b3ee60 */


void FUN_01b3ee60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  if (param_2 == 0) {
    *(double *)(param_1 + 0x548) = (double)*(int *)(param_1 + 0xc);
    *(double *)(param_1 + 0x550) = (double)*(int *)(param_1 + 0x10);
  }
  else {
    FUN_01cfc7b0(param_2,param_3,*PTR_DAT_02002480,0,local_48);
    iVar1 = FUN_00b95910(&local_38);
    iVar2 = FUN_00b95910(local_48);
    if ((double)iVar1 / (double)iVar2 <= 1.0) {
      *(double *)(param_1 + 0x548) =
           (double)(*(int *)(param_1 + 0xc) - (int)local_38) + *(double *)(param_2 + 0x548);
    }
    else {
      iVar1 = FUN_00b95910(&local_38);
      iVar2 = FUN_00b95910(local_48);
      *(double *)(param_1 + 0x548) =
           (double)(*(int *)(param_1 + 0xc) - (int)local_38) / ((double)iVar1 / (double)iVar2) +
           *(double *)(param_2 + 0x548);
    }
    iVar1 = FUN_00b95930(&local_38);
    iVar2 = FUN_00b95930(local_48);
    if ((double)iVar1 / (double)iVar2 <= 1.0) {
      *(double *)(param_1 + 0x550) =
           (double)(*(int *)(param_1 + 0x10) - local_38._4_4_) + *(double *)(param_2 + 0x550);
    }
    else {
      iVar1 = FUN_00b95930(&local_38);
      iVar2 = FUN_00b95930(local_48);
      *(double *)(param_1 + 0x550) =
           (double)(*(int *)(param_1 + 0x10) - local_38._4_4_) / ((double)iVar1 / (double)iVar2) +
           *(double *)(param_2 + 0x550);
    }
  }
  return;
}

