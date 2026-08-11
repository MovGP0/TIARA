/* Ghidra address: 01646130 */
/* Ghidra symbol: FUN_01646130 */


undefined8 FUN_01646130(undefined8 param_1,undefined4 param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  lVar3 = FUN_01645fb0(*(undefined8 *)(param_3 + 0x100),param_1,&local_20);
  if ((*(longlong *)(lVar3 + 0x38) == 0) || (*(int *)(*(longlong *)(lVar3 + 0x38) + 0x10) == 0)) {
    FUN_01613110(L"GetVoltageProc: p.FVABoxCode is missing");
  }
  lVar3 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x38),param_2);
  uVar1 = FUN_0164a440(local_20,*(undefined4 *)(lVar3 + 0x70));
  uVar2 = FUN_0164a440(local_20,*(undefined4 *)(lVar3 + 0x78));
  uVar4 = FUN_016ee780(uVar1,uVar2,*(undefined8 *)(local_20 + 0x38));
  *param_4 = 1;
  if (*(char *)(local_20 + 0x139e9) != '\0') {
    FUN_00b8fd60(&local_38,uVar4,3,0,1);
    FUN_0043f750(&local_40,*(undefined4 *)(lVar3 + 0x70));
    FUN_0043f750(&local_48,*(undefined4 *)(lVar3 + 0x78));
    uVar5 = FUN_016290e0(local_20);
    FUN_00b8fd60(&local_50,uVar5,*(undefined1 *)(local_20 + 0x94),0,1);
    FUN_00416cd0(local_30,8,L"GetVoltageProc: value: ",local_38,L"  G1: ",local_40,L", G2: ",
                 local_48,L", time: ",local_50);
    FUN_0163d050(local_20,local_30[0]);
  }
  FUN_00414560(&local_50,5);
  return uVar4;
}

