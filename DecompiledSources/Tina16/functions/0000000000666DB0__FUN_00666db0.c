/* Ghidra address: 00666db0 */
/* Ghidra symbol: FUN_00666db0 */


void FUN_00666db0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  *(undefined1 *)(param_1 + 0xa4) = 1;
  lVar1 = FUN_00666020(&PTR_FUN_00646c40,1,0);
  *(longlong *)(lVar1 + 0x498) = param_1;
  FUN_0065b830(lVar1);
  FUN_00414ad0(lVar1 + 0x4a8,*(undefined8 *)(param_1 + 0x78));
  FUN_00414ad0(lVar1 + 0x4b0,*(undefined8 *)(param_1 + 0x80));
  *(undefined4 *)(lVar1 + 0x4b8) = *(undefined4 *)(param_1 + 0x90);
  FUN_00666280(lVar1,&local_38);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0x98) == 0) {
    uVar2 = FUN_00666f00(&PTR_FUN_00647378,1,lVar1,param_1);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
  }
  else {
    FUN_00667a00(*(longlong *)(param_1 + 0x98),lVar1);
    FUN_00667a20(*(undefined8 *)(param_1 + 0x98));
  }
  return;
}

