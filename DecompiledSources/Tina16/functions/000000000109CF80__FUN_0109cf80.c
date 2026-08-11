/* Ghidra address: 0109cf80 */
/* Ghidra symbol: FUN_0109cf80 */


void FUN_0109cf80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414610(param_5);
  *(undefined8 *)(param_1 + 0x998) = param_3;
  *(undefined8 *)(param_1 + 0x9a0) = param_4;
  *(undefined8 *)(param_1 + 0x1648) = param_2;
  *(undefined1 *)(param_1 + 0x9e1) = param_7;
  FUN_00414ad0(param_1 + 0x9a8,param_5);
  *(undefined8 *)(param_1 + 0x9c0) = param_6;
  lVar2 = _Dbg_GetSourceFileName(param_6);
  if (lVar2 == 0) {
    FUN_015fcf20(L"No source file found",0,0,0);
  }
  uVar3 = FUN_00f8a4f0(&DAT_00f87d08,1,*(undefined8 *)(param_1 + 0x998),
                       *(undefined8 *)(param_1 + 0x9a8),*(undefined8 *)(param_1 + 0x9c0),
                       *(undefined8 *)(param_1 + 0x9a0));
  *(undefined8 *)(param_1 + 0x1660) = uVar3;
  FUN_004167d0(param_1 + 0x9c8,lVar2);
  cVar1 = FUN_00440a20(*(undefined8 *)(param_1 + 0x9c8),1);
  if (cVar1 == '\0') {
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02005798);
    FUN_00b8e650(uVar3,local_20,L"HDLStrings.Msg_FileNotFound",local_28);
    FUN_00416ad0(local_20,&LAB_0109d228);
    FUN_015fcf20(local_20[0],0,0,0);
  }
  FUN_00441a10(&local_30,*(undefined8 *)(param_1 + 0x9c8));
  uVar3 = FUN_01099960(*(undefined8 *)(param_1 + 0x1658),local_30);
  FUN_00c03380(*(undefined8 *)(param_1 + 0x980),uVar3);
  FUN_00414560(&local_30,3);
  FUN_00414480(&param_5);
  return;
}

