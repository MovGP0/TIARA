/* Ghidra address: 006642b0 */
/* Ghidra symbol: FUN_006642b0 */


void FUN_006642b0(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffffb8;
  char local_35;
  int local_34;
  undefined8 local_30 [2];
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  local_35 = '\0';
  iVar4 = *param_2;
  if (iVar4 < 0x205) {
    if (iVar4 == 0x204) {
      uVar3 = FUN_007f9920((short)param_2[2]);
      (**(code **)(*param_1 + 0x28))
                (param_1,1,uVar3,(longlong)(short)param_2[4],
                 CONCAT44(uVar1,(int)*(short *)((longlong)param_2 + 0x12)),&local_35);
    }
    else if (iVar4 < 0x202) {
      if (iVar4 == 0x201) {
        uVar3 = FUN_007f9920((short)param_2[2]);
        (**(code **)(*param_1 + 0x28))
                  (param_1,0,uVar3,(longlong)(short)param_2[4],
                   CONCAT44(uVar1,(int)*(short *)((longlong)param_2 + 0x12)),&local_35);
      }
      else if (iVar4 == 0x20) {
        thunk_FUN_03cc0d62(local_30);
        local_30[0] = FUN_0064d3a0(param_1[5],local_30);
        if ((short)param_2[4] == 1) {
          lVar5 = FUN_0065b870(param_1[5]);
          if (*(longlong *)(param_2 + 2) == lVar5) {
            iVar4 = FUN_006591f0(param_1[5]);
            if (0 < iVar4) {
              lVar5 = FUN_00661cc0(param_1,local_30,&local_34);
              if ((lVar5 != 0) && (local_34 == 0x12)) {
                uVar6 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,
                                     (longlong)
                                     *(short *)(&DAT_01df89c4 +
                                               (ulonglong)
                                               *(byte *)(*(longlong *)(lVar5 + 0x28) + 0x20) * 2));
                thunk_FUN_04176eb1(uVar6);
                param_2[6] = 1;
                param_2[7] = 0;
                local_35 = '\x01';
              }
            }
          }
        }
      }
      else if (iVar4 == 0x200) {
        uVar1 = FUN_007f9920((short)param_2[2]);
        (**(code **)(*param_1 + 0x30))
                  (param_1,uVar1,(longlong)(short)param_2[4],
                   (longlong)*(short *)((longlong)param_2 + 0x12),&local_35);
      }
    }
    else if (iVar4 == 0x202) {
      uVar3 = FUN_007f9920((short)param_2[2]);
      (**(code **)(*param_1 + 0x38))
                (param_1,0,uVar3,(longlong)(short)param_2[4],
                 CONCAT44(uVar1,(int)*(short *)((longlong)param_2 + 0x12)),&local_35);
    }
    else if (iVar4 == 0x203) {
      uVar2 = FUN_007f9920((short)param_2[2]);
      (**(code **)(*param_1 + 0x28))
                (param_1,0,uVar2 | 0x40,(longlong)(short)param_2[4],
                 CONCAT44(uVar1,(int)*(short *)((longlong)param_2 + 0x12)),&local_35);
    }
  }
  else if (iVar4 == 0x205) {
    uVar3 = FUN_007f9920((short)param_2[2]);
    (**(code **)(*param_1 + 0x38))
              (param_1,1,uVar3,(longlong)(short)param_2[4],
               CONCAT44(uVar1,(int)*(short *)((longlong)param_2 + 0x12)),&local_35);
  }
  else if (iVar4 == 0x206) {
    uVar2 = FUN_007f9920((short)param_2[2]);
    (**(code **)(*param_1 + 0x28))
              (param_1,1,uVar2 | 0x40,(longlong)(short)param_2[4],
               CONCAT44(uVar1,(int)*(short *)((longlong)param_2 + 0x12)),&local_35);
  }
  else if (iVar4 == 0xb030) {
    (*(code *)param_1[9])(param_1[10],param_2);
    if (*(longlong *)(param_2 + 6) == 0) {
      lVar5 = *(longlong *)(param_2 + 4);
      (**(code **)(*param_1 + 0x68))(param_1,lVar5 + 0x30,lVar5 + 0x20,lVar5 + 0x40);
    }
    local_35 = '\x01';
  }
  else if ((iVar4 == 0xb042) && (**(int **)(param_2 + 4) == 0xb00b)) {
    FUN_006641f0(param_1,*(undefined8 *)(param_2 + 2),(char)(*(int **)(param_2 + 4))[2]);
  }
  if ((local_35 == '\0') && (param_1[9] != 0)) {
    (*(code *)param_1[9])(param_1[10],param_2);
  }
  return;
}

