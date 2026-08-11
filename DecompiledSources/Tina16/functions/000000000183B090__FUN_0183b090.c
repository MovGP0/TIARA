/* Ghidra address: 0183b090 */
/* Ghidra symbol: FUN_0183b090 */


void FUN_0183b090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  FUN_00414480(&local_28);
  iVar3 = FUN_0181e3e0();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_0181e3c0(param_2,iVar5);
      FUN_0043e1a0(&local_20,*(undefined8 *)(lVar1 + 0x18));
      iVar4 = FUN_00416db0(local_20,L"name");
      if (iVar4 == 0) {
        uVar2 = FUN_0181e3c0(param_2,iVar5);
        FUN_0181e5f0(uVar2,&local_28,L"text");
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  lVar1 = FUN_01837350(param_1,param_3,local_28);
  FUN_0183da20(param_1,param_2,*(undefined8 *)(lVar1 + 0x90));
  FUN_00414560(&local_28,2);
  return;
}

