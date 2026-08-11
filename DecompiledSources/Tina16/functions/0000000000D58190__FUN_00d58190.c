/* Ghidra address: 00d58190 */
/* Ghidra symbol: FUN_00d58190 */


longlong FUN_00d58190(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int local_4c;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar6 = 0;
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar2 * iVar3 != 0) {
      local_4c = 0;
      iVar2 = (**(code **)(*param_1 + 0x48))();
      local_40 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar6 = FUN_0060a050(param_1,local_40);
          local_3c = -1;
          while (iVar7 = local_3c, iVar3 = (**(code **)(*param_1 + 0x60))(param_1), iVar7 < iVar3) {
            do {
              iVar7 = iVar7 + 1;
              iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
              if (iVar3 <= iVar7) break;
            } while (*(int *)(lVar6 + (longlong)iVar7 * 4) == 0x7f007f);
            iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
            local_3c = iVar7;
            if (iVar3 <= iVar7) break;
            do {
              local_3c = local_3c + 1;
              iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
              if (iVar3 <= local_3c) break;
            } while (*(int *)(lVar6 + (longlong)local_3c * 4) != 0x7f007f);
            if (iVar7 != local_3c) {
              FUN_004238d0(&local_38,param_3 + iVar7,param_4 + local_40,param_3 + local_3c,
                           param_4 + local_40 + 1);
              *(undefined8 *)(&DAT_0201a198 + (longlong)local_4c * 0x10) = local_38;
              *(undefined8 *)(&DAT_0201a1a0 + (longlong)local_4c * 0x10) = uStack_30;
              local_4c = local_4c + 1;
            }
          }
          local_40 = local_40 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = local_4c * 0x10;
      lVar6 = FUN_004095c0((longlong)iVar2 + 0x20);
      *param_2 = lVar6;
      *(undefined4 *)*param_2 = 0x20;
      *(undefined4 *)(*param_2 + 4) = 1;
      *(int *)(*param_2 + 8) = local_4c;
      *(undefined4 *)(*param_2 + 0xc) = 0;
      uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
      uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004238d0(&local_38,0,0,uVar4,uVar5);
      lVar6 = *param_2;
      *(undefined8 *)(lVar6 + 0x10) = local_38;
      *(undefined8 *)(lVar6 + 0x18) = uStack_30;
      FUN_00409a70(&DAT_0201a198,*param_2 + 0x20,(longlong)iVar2);
      lVar6 = (longlong)(iVar2 + 0x20);
    }
  }
  return lVar6;
}

