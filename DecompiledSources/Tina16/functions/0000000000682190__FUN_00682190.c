/* Ghidra address: 00682190 */
/* Ghidra symbol: FUN_00682190 */


void FUN_00682190(longlong *param_1,ulonglong *param_2)

{
  char cVar1;
  code *pcVar2;
  char local_51;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30 [2];
  
  (**(code **)(*param_1 + 600))(param_1);
  if (param_1[0x1d] == 0) {
    local_30[0] = CONCAT44((int)*(short *)((longlong)param_2 + 0x12),(int)(short)param_2[2]);
    cVar1 = FUN_004983a0(local_30);
    if (cVar1 == '\0') {
      local_30[0] = FUN_0064d3a0(param_1,local_30);
    }
    local_51 = '\0';
    pcVar2 = (code *)FUN_00411550(param_1,0xffe6);
    (*pcVar2)(param_1,local_30,&local_51);
    param_2[3] = (longlong)local_51;
    if (local_51 == '\0') {
      local_50 = *param_2;
      local_48 = param_2[1];
      local_40 = param_2[2];
      local_38 = param_2[3];
      thunk_FUN_03a65bf1(param_1[0x8c],param_1[0x8d],local_50 & 0xffffffff,local_48,local_40);
    }
  }
  else {
    FUN_0065dd90(param_1,param_2);
  }
  return;
}

