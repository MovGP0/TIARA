/* Ghidra address: 0196ee90 */
/* Ghidra symbol: FUN_0196ee90 */


void FUN_0196ee90(longlong param_1,longlong *param_2)

{
  char cVar1;
  code *local_48;
  longlong local_40;
  code *local_38;
  longlong local_30;
  
  FUN_004d2e60(param_1,param_2);
  if (((*(ushort *)(param_1 + 0x34) & 4) == 0) || (*(char *)(param_1 + 0x271) != '\0')) {
    local_38 = FUN_0196f270;
    local_48 = FUN_0196f480;
    local_40 = param_1;
    local_30 = param_1;
    (**(code **)(*param_2 + 8))(param_2,L"Datasets",&local_38,&local_48,1);
    local_38 = FUN_0196f2b0;
    local_48 = FUN_0196f4c0;
    local_40 = param_1;
    local_30 = param_1;
    (**(code **)(*param_2 + 8))(param_2,L"Variables",&local_38,&local_48,1);
    local_38 = FUN_0196f290;
    local_48 = FUN_0196f4a0;
    local_40 = param_1;
    local_30 = param_1;
    (**(code **)(*param_2 + 8))(param_2,L"Style",&local_38,&local_48,1);
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_0047f878);
    if (cVar1 != '\0') {
      param_2[0x17] = param_1;
      param_2[0x16] = (longlong)FUN_0196ee60;
    }
  }
  return;
}

