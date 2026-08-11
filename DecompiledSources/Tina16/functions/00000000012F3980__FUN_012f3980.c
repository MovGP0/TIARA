/* Ghidra address: 012f3980 */
/* Ghidra symbol: FUN_012f3980 */


void FUN_012f3980(longlong *param_1)

{
  int iVar1;
  longlong local_40;
  longlong local_38;
  longlong local_30 [2];
  longlong local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  (**(code **)(*(longlong *)param_1[0x153] + 0x10))
            ((longlong *)param_1[0x153],local_20,L"ModelTest Settings",L"TestBench",0);
  if (local_20[0] == 0) {
    FUN_00414b50(local_20,L"Noname");
  }
  if ((local_20[0] != 0) && (*(char *)((longlong)param_1 + 0xab9) == '\0')) {
    FUN_012fa2c0(param_1);
    FUN_012fb520(param_1,local_20[0]);
    FUN_0064dd90(param_1[0xf4],local_30);
    (**(code **)(*(longlong *)param_1[0xf5] + 0x128))((longlong *)param_1[0xf5],local_30[0] != 0);
    FUN_0064dd90(param_1[0xf4],&local_38);
    (**(code **)(*(longlong *)param_1[0xf7] + 0x128))((longlong *)param_1[0xf7],local_38 != 0);
    FUN_0064dd90(param_1[0xf8],&local_40);
    (**(code **)(*(longlong *)param_1[0xf9] + 0x128))((longlong *)param_1[0xf9],local_40 != 0);
    *(undefined1 *)((longlong)param_1 + 0xab9) = 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,1);
  FUN_0064cc50(param_1,iVar1 + -200);
  FUN_0068e980(param_1[0x140],0);
  FUN_0064cb90(param_1[0xdd],0);
  FUN_00806b40(param_1,0);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return;
}

