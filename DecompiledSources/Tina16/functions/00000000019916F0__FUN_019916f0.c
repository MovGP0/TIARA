/* Ghidra address: 019916f0 */
/* Ghidra symbol: FUN_019916f0 */


void FUN_019916f0(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  int local_58;
  longlong local_40;
  char local_29;
  
  cVar1 = FUN_019921c0(param_1,param_2,param_3);
  if ((cVar1 == '\0') && (*PTR_DAT_02003020 != '\0')) {
    local_40 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_29 = '\0';
    for (iVar4 = 0; iVar4 <= (int)param_1[2] + -1; iVar4 = iVar4 + 1) {
      uVar3 = FUN_0198d420(param_1,iVar4);
      FUN_01991320(auStack_78,uVar3);
    }
    iVar2 = 0;
    iVar4 = *(int *)(local_40 + 0x10);
    if (-1 < iVar4 + -1) {
      do {
        uVar3 = FUN_004aeac0(local_40,iVar2);
        (**(code **)(*param_1 + 0x20))(param_1,uVar3);
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(local_40);
    if ((local_29 != '\0') && (param_1[0x42] != 0)) {
      local_58 = param_3 + 3;
      (**(code **)(*(longlong *)param_1[0x42] + 0x30))
                ((longlong *)param_1[0x42],param_2 + -3,param_3 + -3,param_2 + 3);
    }
  }
  return;
}

