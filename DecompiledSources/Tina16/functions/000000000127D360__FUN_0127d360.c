/* Ghidra address: 0127d360 */
/* Ghidra symbol: FUN_0127d360 */


void FUN_0127d360(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                 longlong *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30 [16];
  
  local_40 = 0;
  local_38 = 0;
  FUN_0041b910(param_5);
  uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  lVar2 = 0;
  (**(code **)(*param_5 + 0xb8))(param_5,&local_40);
  FUN_0043ea00(&local_38,local_40);
  if (local_38 != 0) {
    FUN_00c7b9b0(local_38,uVar1);
    FUN_004b6dc0(uVar1,0);
    lVar2 = FUN_01d30b30(&DAT_01d2e8e8,1,uVar1,0,0);
    FUN_01d30e90(lVar2,local_30);
    FUN_01d31aa0(lVar2,param_1);
    *(longlong *)(lVar2 + 0x48) = param_2;
    FUN_00414ad0(lVar2 + 0x60,*(undefined8 *)(param_2 + 0x360));
    FUN_01cf5c20(param_3,lVar2,param_4,0x47);
  }
  FUN_00410f20(lVar2);
  FUN_00410f20(uVar1);
  FUN_00414560(&local_40,2);
  FUN_0041b800(&param_5);
  return;
}

