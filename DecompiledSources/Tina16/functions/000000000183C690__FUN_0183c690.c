/* Ghidra address: 0183c690 */
/* Ghidra symbol: FUN_0183c690 */


void FUN_0183c690(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  FUN_01836fd0(param_1,local_30,param_2);
  lVar3 = FUN_01850840(&PTR_FUN_01842588,1,param_3,*(undefined8 *)(param_1 + 0x50),local_30[0]);
  FUN_01847420(param_4,lVar3);
  iVar1 = FUN_0181e3e0();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_0181e3c0(param_2,iVar6);
      iVar2 = FUN_0043e420(*(undefined8 *)(lVar4 + 0x18),L"exceptstmt");
      if (iVar2 == 0) {
        *(undefined1 *)(lVar3 + 0x28) = 1;
        uVar5 = FUN_0181e3c0(param_2,iVar6);
        FUN_0183d140(param_1,uVar5,param_3,*(undefined8 *)(lVar3 + 0x30));
      }
      else {
        lVar4 = FUN_0181e3c0(param_2,iVar6);
        iVar2 = FUN_0043e420(*(undefined8 *)(lVar4 + 0x18),L"finallystmt");
        if (iVar2 == 0) {
          uVar5 = FUN_0181e3c0(param_2,iVar6);
          FUN_0183d140(param_1,uVar5,param_3,*(undefined8 *)(lVar3 + 0x30));
        }
        else {
          uVar5 = FUN_0181e3c0(param_2,iVar6);
          FUN_0183d1c0(param_1,uVar5,param_3,lVar3);
        }
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_01836fd0(param_1,&local_38,param_2);
  FUN_0184ee20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),local_38);
  FUN_00414560(&local_38,2);
  return;
}

