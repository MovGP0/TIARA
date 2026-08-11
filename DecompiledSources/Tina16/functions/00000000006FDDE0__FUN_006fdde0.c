/* Ghidra address: 006fdde0 */
/* Ghidra symbol: FUN_006fdde0 */


void FUN_006fdde0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  
  if ((char)param_4 == '\0') {
    iVar2 = FUN_00654c00();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar4 = FUN_00654bc0(param_1,iVar6);
        cVar1 = FUN_004113d0(uVar4,&PTR_FUN_006cb0d0);
        if (cVar1 == '\0') {
          uVar4 = FUN_00654bc0(param_1,iVar6);
          pcVar5 = (code *)FUN_00411550(uVar4,0xffec);
          (*pcVar5)(uVar4,param_2,param_3);
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x4a4),param_2,param_3);
  *(undefined4 *)(param_1 + 0x4a4) = uVar3;
  uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x4a8),param_2,param_3);
  *(undefined4 *)(param_1 + 0x4a8) = uVar3;
  FUN_006fd640();
  FUN_0065aec0(param_1,param_2,param_3,param_4);
  return;
}

