/* Ghidra address: 017a3ee0 */
/* Ghidra symbol: FUN_017a3ee0 */


void FUN_017a3ee0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                 byte param_5,byte param_6,char param_7,int *param_8)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_60 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_40[0] = 0;
  FUN_006df690(*(undefined8 *)(param_2 + 0x550));
  uVar5 = (uint)param_6;
  iVar4 = 0;
  if (-1 < (int)(uVar5 - 1)) {
    do {
      local_68 = param_3;
      if (param_7 != '\0') {
        FUN_0043f750(&local_58,*param_8 + iVar4);
        FUN_00416ba0(local_50,L"Group #",local_58);
        local_68 = FUN_006dee40(*(undefined8 *)(param_2 + 0x550),param_3,local_50[0]);
        FUN_006dcbd0(local_68,0xffffffff);
        FUN_006dc990(local_68,0x65);
      }
      uVar6 = (uint)param_5;
      iVar3 = 0;
      if (-1 < (int)(uVar6 - 1)) {
        do {
          if ((param_4 == (longlong *)0x0) ||
             (iVar1 = (**(code **)(*param_4 + 0x28))(param_4), iVar1 < 1)) {
            FUN_0043f750(&local_60,(*param_8 + iVar4) * (uint)param_5 + iVar3);
            FUN_00416ba0(local_40,L"Picture #",local_60);
          }
          else {
            (**(code **)(*param_4 + 0x18))
                      (param_4,local_40,(*param_8 + iVar4) * (uint)param_5 + iVar3);
          }
          uVar2 = FUN_006dee40(*(undefined8 *)(param_2 + 0x550),local_68,local_40[0]);
          FUN_006dcbd0(uVar2,(*param_8 + iVar4) * (uint)param_5 + iVar3);
          FUN_006dc990(uVar2,0x66);
          iVar3 = iVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *param_8 = *param_8 + (uint)param_6;
  FUN_006dd070(param_3,1);
  FUN_006df710(*(undefined8 *)(param_2 + 0x550));
  FUN_00414560(&local_60,3);
  FUN_00414480(local_40);
  return;
}

