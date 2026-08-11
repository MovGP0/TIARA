/* Ghidra address: 013020a0 */
/* Ghidra symbol: FUN_013020a0 */


undefined8 FUN_013020a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (local_res18[0] == 0) {
    lVar1 = *(longlong *)(param_1 + 0x780);
    *(undefined4 *)(lVar1 + 0xd8) = 0x200;
    FUN_00414ad0(lVar1 + 0xe0,L"Comma-separated values.csv|*.csv");
    plVar2 = *(longlong **)(param_1 + 0x780);
    *(undefined4 *)(plVar2 + 0x1d) = 1;
    (**(code **)(*plVar2 + 0xa8))(plVar2);
    FUN_00724270(*(undefined8 *)(param_1 + 0x780),local_res18);
  }
  cVar3 = FUN_00440a20(local_res18[0],1);
  if (cVar3 != '\0') {
    FUN_012ddf90(*(undefined8 *)(param_1 + 0xac8),local_res18[0]);
  }
  FUN_00414ad0(param_2,local_res18[0]);
  FUN_00414480(local_res18);
  return param_2;
}

