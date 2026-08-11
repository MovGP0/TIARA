/* Ghidra address: 0111c240 */
/* Ghidra symbol: FUN_0111c240 */


undefined1 FUN_0111c240(longlong *param_1,short *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  short *psVar6;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c [3];
  
  local_58 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_38 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_28 = 0;
  param_1[0x28] = (longlong)param_2;
  psVar6 = param_2;
  while( true ) {
    cVar2 = (**(code **)(*param_1 + 400))(param_1,*psVar6);
    if (cVar2 == '\0') break;
    psVar6 = psVar6 + 1;
  }
  uVar5 = ((longlong)psVar6 - param_1[0x28]) / 2;
  *(int *)((longlong)param_1 + 0x13c) = (int)uVar5;
  FUN_00414740(&local_28,param_1[0x28],uVar5 & 0xffffffff);
  cVar2 = (**(code **)(*(longlong *)param_1[0x2d] + 0x140))
                    ((longlong *)param_1[0x2d],local_28,local_1c);
  if (cVar2 == '\0') {
    local_1c[0] = -1;
  }
  else {
    (**(code **)(*(longlong *)param_1[0x2d] + 0x18))
              ((longlong *)param_1[0x2d],&local_30,local_1c[0]);
    iVar3 = FUN_00416db0(local_28,local_30);
    if (iVar3 != 0) {
      local_1c[0] = -1;
    }
  }
  if (local_1c[0] == -1) {
    iVar3 = *(int *)((longlong)param_1 + 0x13c);
    if ((((iVar3 < 5) || (*param_2 != 0x5f)) || (param_2[1] != 0x5f)) ||
       (((param_2[2] == 0x5f || (param_2[iVar3 + -1] != 0x5f)) ||
        ((param_2[iVar3 + -2] != 0x5f || (param_2[iVar3 + -3] == 0x5f)))))) {
      lVar1 = param_1[0x24];
      FUN_004167d0(&local_48,lVar1);
      iVar3 = FUN_00414d00(lVar1);
      iVar4 = FUN_00414d00(param_1[0x28]);
      FUN_00416dc0(&local_40,local_48,0,iVar3 - iVar4);
      FUN_0043ea00(&local_38,local_40);
      FUN_004168e0(&local_50,local_38);
      iVar3 = FUN_0043e8e0(local_50,&DAT_0111c5a8);
      if (iVar3 != 0) {
        lVar1 = param_1[0x24];
        FUN_004167d0(&local_68,lVar1);
        iVar3 = FUN_00414d00(lVar1);
        iVar4 = FUN_00414d00(param_1[0x28]);
        FUN_00416dc0(&local_60,local_68,0,iVar3 - iVar4);
        FUN_0043ea00(&local_58,local_60);
        FUN_004168e0(&local_70,local_58);
        iVar3 = FUN_0043e8e0(local_70,L"class");
        if (iVar3 != 0) {
          local_71 = 1;
          goto code_r0x0111c51a;
        }
      }
      local_71 = 10;
    }
    else {
      local_71 = 10;
    }
  }
  else {
    local_71 = (**(code **)(*(longlong *)param_1[0x2d] + 0x30))
                         ((longlong *)param_1[0x2d],local_1c[0]);
  }
code_r0x0111c51a:
  FUN_00414520(&local_70);
  FUN_00414560(&local_68,3);
  FUN_00414520(&local_50);
  FUN_00414560(&local_48,5);
  return local_71;
}

