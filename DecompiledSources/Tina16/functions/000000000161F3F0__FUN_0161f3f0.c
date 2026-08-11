/* Ghidra address: 0161f3f0 */
/* Ghidra symbol: FUN_0161f3f0 */


void FUN_0161f3f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined1 local_20;
  
  local_40 = 0;
  local_28 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x528);
  lVar1 = *(longlong *)(*(longlong *)(local_28 + 0x1a8) + 0xd8);
  local_30 = lVar1;
  FUN_016e9f40(param_1,FUN_0161f300);
  if (0 < *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x78) + 0x58) + 0x10)) {
    FUN_0165dd60(*(undefined8 *)(param_2 + 0x110),FUN_0161f300);
  }
  FUN_0163cf70(*(undefined8 *)(lVar1 + 0x78),&local_40);
  FUN_00414ad0(param_2 + 0x1318,local_40);
  uVar2 = FUN_01643430(lVar1);
  local_20 = FUN_016ea1b0(param_1,uVar2);
  FUN_016ea050(param_1,&local_30,0x18);
  FUN_016ee260(param_1,&local_38,0x18,0);
  *(undefined8 *)(lVar1 + 0x98) = local_38;
  FUN_0163e740(lVar1,param_1);
  FUN_01649c10(lVar1,param_1,param_2);
  FUN_0163e760(lVar1,1);
  FUN_016e9f50(param_1,FUN_0161f2f0);
  FUN_016e9fe0(param_1,FUN_0161f3b0);
  FUN_00414480(&local_40);
  return;
}

