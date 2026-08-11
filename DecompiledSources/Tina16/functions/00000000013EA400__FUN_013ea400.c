/* Ghidra address: 013ea400 */
/* Ghidra symbol: FUN_013ea400 */


void FUN_013ea400(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_2c;
  
  if (*(int *)(*(longlong *)(param_1 + 0x8b8) + 0x10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))(*(longlong **)(param_1 + 0x6c8),0);
    FUN_013ea360(param_1,param_2);
  }
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x8b8) + 0x10);
  local_2c = 0;
  if (-1 < iVar9 + -1) {
    do {
      pbVar3 = (byte *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x8b8),local_2c);
      *(byte **)(param_1 + 0x8c0) = pbVar3;
      iVar7 = *pbVar3 - 1;
      FUN_00821790(*(undefined8 *)(param_1 + 0x6c8),iVar7,1);
      if (local_2c == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))
                  (*(longlong **)(param_1 + 0x6c8),iVar7);
        FUN_013ea360(param_1,param_2);
      }
      iVar8 = 1;
      FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),iVar7);
      iVar2 = FUN_00654c00();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar4 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),iVar7);
          uVar4 = FUN_00654bc0(uVar4,iVar6);
          cVar1 = FUN_004113d0(uVar4,&PTR_FUN_00b8ea58);
          if (cVar1 != '\0') {
            uVar4 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),iVar7);
            uVar4 = FUN_00654bc0(uVar4,iVar6);
            FUN_00b90440(uVar4,*(undefined8 *)
                                (*(longlong *)(param_1 + 0x8c0) + -7 + (longlong)iVar8 * 8));
            iVar8 = iVar8 + 1;
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = 0;
      while( true ) {
        uVar4 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),iVar7);
        uVar4 = FUN_00654bc0(uVar4,iVar2);
        cVar1 = FUN_004113d0(uVar4,&PTR_FUN_006757e8);
        if (cVar1 != '\0') break;
        iVar2 = iVar2 + 1;
      }
      cVar1 = FUN_0040c840(*(undefined8 *)
                            (*(longlong *)(param_1 + 0x8c0) + -7 + (longlong)iVar8 * 8));
      if (cVar1 == '\0') {
        uVar4 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),iVar7);
        plVar5 = (longlong *)FUN_00654bc0(uVar4,iVar2);
        (**(code **)(*plVar5 + 0x268))(plVar5,1);
      }
      else {
        uVar4 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),iVar7);
        plVar5 = (longlong *)FUN_00654bc0(uVar4,iVar2 + 1);
        (**(code **)(*plVar5 + 0x268))(plVar5,1);
      }
      local_2c = local_2c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_0064cf60(param_1,0x47f);
  return;
}

