/* Ghidra address: 00c87ef0 */
/* Ghidra symbol: FUN_00c87ef0 */


void FUN_00c87ef0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*(char *)(param_1 + 0x6f0) == '\0') {
    uVar1 = FUN_00603c90(*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x318));
    uVar2 = thunk_FUN_03ccce41(0,0x7f01);
    FUN_0060d3b0(uVar1,uVar2);
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(&local_38,PTR_PTR_02005208);
    FUN_00b8e650(uVar1,&local_30,L"Vcl.SMsgDlgError",local_38);
    FUN_0064de00(param_1,local_30);
  }
  else {
    uVar1 = FUN_00603c90(*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x318));
    uVar2 = thunk_FUN_03ccce41(0,0x7f03);
    FUN_0060d3b0(uVar1,uVar2);
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_020032d0);
    FUN_00b8e650(uVar1,local_20,L"Vcl.SMsgDlgWarning",local_28);
    FUN_0064de00(param_1,local_20[0]);
  }
  *PTR_DAT_02003f60 = 1;
  FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  FUN_00414560(&local_38,4);
  return;
}

