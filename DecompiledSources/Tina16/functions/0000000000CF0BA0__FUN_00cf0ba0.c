/* Ghidra address: 00cf0ba0 */
/* Ghidra symbol: FUN_00cf0ba0 */


longlong FUN_00cf0ba0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                     longlong param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  if (param_5 == 0) {
    FUN_0041ddd0(local_20,PTR_PTR_020031e8);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00cf00c0,1,local_20[0]);
    FUN_004134c0(uVar1);
  }
  lVar2 = FUN_00cf1490(*(undefined8 *)(param_1 + 0x48));
  FUN_00414ad0(lVar2 + 0x38,param_2);
  FUN_00441920(&local_28,param_6);
  FUN_00414ad0(lVar2 + 0x18,local_28);
  *(longlong *)(lVar2 + 0x40) = param_5;
  if (param_3 == 0) {
    FUN_008a0460(&local_30,param_6);
    FUN_00414ad0(lVar2 + 0x28,local_30);
  }
  else {
    FUN_00cf25f0(lVar2,param_3);
  }
  if (param_4 != 0) {
    FUN_00414ad0(lVar2 + 0x20,param_4);
  }
  FUN_00414ad0(lVar2 + 0x30,L"binary");
  FUN_00414560(&local_30,3);
  return lVar2;
}

