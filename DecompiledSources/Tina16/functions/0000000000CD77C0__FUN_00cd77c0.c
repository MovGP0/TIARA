/* Ghidra address: 00cd77c0 */
/* Ghidra symbol: FUN_00cd77c0 */


void FUN_00cd77c0(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  if (DAT_01eaf040 == 0) {
    DAT_01eaf040 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  }
  if (param_2 < 0x80000000) {
    iVar4 = param_2 + 1;
    do {
      lVar3 = *param_1;
      if (lVar3 != 0) {
        iVar1 = (**(code **)(lVar3 + 0x18))(lVar3);
        if (iVar1 != -1) {
          uVar2 = (**(code **)(*param_1 + 0x18))(*param_1);
          lVar3 = FUN_00cd73f0(uVar2);
          if (lVar3 == 0) {
            FUN_004ae7e0(DAT_01eaf040,*param_1);
          }
          else {
            uVar2 = FUN_004aeba0(DAT_01eaf040,lVar3);
            FUN_004aedb0(DAT_01eaf040,uVar2,*param_1);
          }
        }
      }
      param_1 = param_1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

