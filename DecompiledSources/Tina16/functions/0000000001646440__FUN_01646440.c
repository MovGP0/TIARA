/* Ghidra address: 01646440 */
/* Ghidra symbol: FUN_01646440 */


bool FUN_01646440(undefined8 param_1,undefined4 param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  longlong local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  lVar3 = FUN_01645fb0(*(undefined8 *)(param_3 + 0x100),param_1,&local_20);
  if ((*(longlong *)(lVar3 + 0x38) == 0) || (*(int *)(*(longlong *)(lVar3 + 0x38) + 0x10) == 0)) {
    FUN_01613110(L"GetVoltageProc: p.FVABoxCode is missing");
  }
  uVar4 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x38),param_2);
  iVar2 = FUN_01614590(uVar4);
  lVar1 = *(longlong *)(lVar3 + 0x60);
  *(longlong *)(lVar3 + 0x5b0) = lVar1;
  *(longlong *)(lVar1 + 0xc0) = lVar3;
  *(undefined8 *)(lVar1 + 0x138) = param_1;
  if (iVar2 == 0x3ef) {
    FUN_01630560(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0xb0),uVar4,&local_28);
  }
  else if (iVar2 == 0x3ee) {
    FUN_01630e80(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0xb0),uVar4,&local_28);
  }
  else {
    FUN_01613110(L"Invalid fn in CallFnProc");
  }
  if (*(char *)(local_20 + 0x139e9) != '\0') {
    FUN_00b8fd60(&local_38,local_28,3,0,1);
    uVar4 = FUN_016290e0(local_20);
    FUN_00b8fd60(&local_40,uVar4,*(undefined1 *)(local_20 + 0x94),0,1);
    FUN_00416cd0(&local_30,4,L"CallFnProc: value: ",local_38,L", time: ",local_40);
    FUN_0163d050(local_20,local_30);
  }
  *param_4 = 1;
  FUN_00414560(&local_40,3);
  return local_28 != 0.0;
}

