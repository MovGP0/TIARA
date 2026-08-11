/* Ghidra address: 0183c4a0 */
/* Ghidra symbol: FUN_0183c4a0 */


void FUN_0183c4a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_48 = param_2;
  local_40 = param_4;
  FUN_01836fd0(param_1,local_30,param_2);
  local_58 = local_30[0];
  local_20 = FUN_01850600(&PTR_FUN_01841478,1,param_3,*(undefined8 *)(param_1 + 0x50));
  FUN_01847420(local_40,local_20);
  uVar2 = FUN_0181e3c0(local_48,0);
  uVar2 = FUN_0183a030(param_1,uVar2,param_3);
  *(undefined8 *)(local_20 + 0x28) = uVar2;
  iVar1 = FUN_0181e3e0(local_48);
  iVar1 = iVar1 + -1;
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_0181e3c0(local_48,iVar4);
      FUN_0183c340(auStack_78,uVar2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_0181e3e0(local_48);
  lVar3 = FUN_0181e3c0(local_48,iVar1 + -1);
  iVar1 = FUN_0043e420(*(undefined8 *)(lVar3 + 0x18),L"caseselector");
  if (iVar1 != 0) {
    iVar1 = FUN_0181e3e0(local_48);
    uVar2 = FUN_0181e3c0(local_48,iVar1 + -1);
    FUN_0183d1c0(param_1,uVar2,param_3,*(undefined8 *)(local_20 + 0x30));
  }
  FUN_01836fd0(param_1,&local_38,local_48);
  FUN_0184ee20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),local_38);
  FUN_00414560(&local_38,2);
  return;
}

