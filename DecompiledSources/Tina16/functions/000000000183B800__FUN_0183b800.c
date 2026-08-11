/* Ghidra address: 0183b800 */
/* Ghidra symbol: FUN_0183b800 */


void FUN_0183b800(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_01836fd0(param_1,local_40,param_2);
  lVar3 = FUN_0184f960(&PTR_FUN_01840f50,1,param_3,*(undefined8 *)(param_1 + 0x50),local_40[0]);
  FUN_01847420(param_4,lVar3);
  uVar4 = FUN_0181e3c0(param_2,0);
  uVar4 = FUN_0183a030(param_1,uVar4,param_3);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  iVar1 = FUN_0181e3e0(param_2);
  iVar1 = iVar1 + -1;
  iVar6 = 1;
  if (0 < iVar1) {
    do {
      lVar5 = FUN_0181e3c0(param_2,iVar6);
      FUN_0043e1a0(local_30,*(undefined8 *)(lVar5 + 0x18));
      iVar2 = FUN_00416db0(local_30[0],L"thenstmt");
      if (iVar2 == 0) {
        uVar4 = FUN_0181e3c0(param_2,1);
        FUN_0183d140(param_1,uVar4,param_3,lVar3);
      }
      else {
        iVar2 = FUN_00416db0(local_30[0],L"elsestmt");
        if (iVar2 == 0) {
          uVar4 = FUN_0181e3c0(param_2,2);
          FUN_0183d140(param_1,uVar4,param_3,*(undefined8 *)(lVar3 + 0x30));
        }
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_01836fd0(param_1,&local_48,param_2);
  FUN_0184ee20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),local_48);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return;
}

