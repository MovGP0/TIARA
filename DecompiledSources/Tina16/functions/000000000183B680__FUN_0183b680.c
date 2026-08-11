/* Ghidra address: 0183b680 */
/* Ghidra symbol: FUN_0183b680 */


void FUN_0183b680(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_01836fd0(param_1,local_20,param_2);
  lVar2 = FUN_0184f010(&PTR_FUN_01840cc0,1,param_3,*(undefined8 *)(param_1 + 0x50),local_20[0]);
  FUN_01847420(param_4,lVar2);
  uVar3 = FUN_0181e3c0(param_2,0);
  uVar3 = FUN_01838880(param_1,uVar3,param_3,0);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  iVar1 = FUN_0181e3e0(param_2);
  if (1 < iVar1) {
    uVar3 = FUN_0181e3c0(param_2,1);
    FUN_0181e5f0(uVar3,&local_28,L"text");
    FUN_00414ad0(lVar2 + 0x30,local_28);
    if (*(char *)(*(longlong *)(lVar2 + 0x28) + 0x19) != '\0') {
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_020034c8);
      FUN_004134c0(uVar3);
    }
  }
  FUN_01836fd0(param_1,&local_30,param_2);
  FUN_0184ee20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),local_30);
  FUN_00414560(&local_30,3);
  return;
}

