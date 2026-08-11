/* Ghidra address: 00ea6db0 */
/* Ghidra symbol: FUN_00ea6db0 */


longlong *
FUN_00ea6db0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,char param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_0041b840(param_1 + 1,param_2);
  if (param_6 != '\0') {
    lVar3 = FUN_00411460(param_1[1],&DAT_00ea69f0);
    lVar3 = *(longlong *)(lVar3 + 0x18);
    if (*(int *)(lVar3 + 0x504) < 1) {
      uVar4 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02001290);
      FUN_004134c0(uVar4);
    }
    FUN_00419260(param_1,&DAT_00ea6820,1,(longlong)*(int *)(lVar3 + 0x504));
    FUN_00ea6ca0(&local_40,param_3,param_4,param_5,param_6);
    FUN_00417c40(*param_1,&local_40,&DAT_00ea56e0);
    iVar6 = 0;
    if (*param_1 != 0) {
      iVar6 = (int)*(undefined8 *)(*param_1 + -8);
    }
    iVar6 = iVar6 + -1;
    iVar5 = 1;
    if (0 < iVar6) {
      do {
        uVar1 = FUN_00ea4500(lVar3,iVar5);
        uVar2 = FUN_00ea4460(lVar3,iVar5);
        FUN_00ea6ca0(&local_58,param_3,uVar1,uVar2,param_6);
        FUN_00417c40(*param_1 + (longlong)iVar5 * 0x18,&local_58,&DAT_00ea56e0);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00417840(&local_58,&DAT_00ea56e0,2);
  return param_1;
}

