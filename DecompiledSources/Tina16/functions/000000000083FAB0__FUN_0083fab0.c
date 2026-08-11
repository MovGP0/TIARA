/* Ghidra address: 0083fab0 */
/* Ghidra symbol: FUN_0083fab0 */


void FUN_0083fab0(longlong param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  code *local_38;
  longlong local_30;
  code *local_28;
  longlong local_20;
  
  FUN_006556b0(param_1,param_2);
  if (*(char *)(param_1 + 0x551) != '\0') {
    local_28 = FUN_0083f850;
    local_38 = FUN_0083f930;
    local_30 = param_1;
    local_20 = param_1;
    local_48 = FUN_0083fa10(auStack_68);
    (**(code **)(*param_2 + 8))(param_2,L"ColWidths",&local_28,&local_38);
    local_28 = FUN_0083f8c0;
    local_38 = FUN_0083f9a0;
    local_30 = param_1;
    local_20 = param_1;
    local_48 = FUN_0083fa60(auStack_68);
    (**(code **)(*param_2 + 8))(param_2,L"RowHeights",&local_28,&local_38);
  }
  return;
}

