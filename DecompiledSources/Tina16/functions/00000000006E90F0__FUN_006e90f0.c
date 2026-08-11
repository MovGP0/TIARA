/* Ghidra address: 006e90f0 */
/* Ghidra symbol: FUN_006e90f0 */


undefined4 FUN_006e90f0(undefined8 *param_1,undefined8 param_2,int param_3,int *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int local_res18;
  undefined1 auStack_d8 [32];
  char *local_b8;
  undefined4 local_b0;
  int local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  char *local_78;
  char *local_70;
  undefined4 local_64;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  char *local_40;
  char *local_38;
  undefined4 local_2c;
  
  local_80 = auStack_d8;
  local_90 = 0;
  local_88 = 0;
  local_38 = (char *)0x0;
  local_40 = (char *)0x0;
  local_2c = 0;
  local_60 = (longlong *)*param_1;
  local_58 = param_1[1];
  local_50 = param_1[2];
  local_48 = param_1[3];
  FUN_00419260(&local_38,&DAT_00406578,1,(longlong)(param_3 + 1));
  local_res18 = param_3 / 2;
  if (0 < local_res18 % 2) {
    local_res18 = local_res18 + -1;
  }
  local_64 = 0;
  *param_4 = 0;
  if (local_60 != (longlong *)0x0) {
    iVar3 = (**(code **)(*local_60 + 8))(local_60,local_58,local_38,local_res18);
    *param_4 = iVar3;
  }
  lVar1 = local_48;
  if (0 < *param_4) {
    local_38[*param_4] = '\0';
    if (local_38[*param_4 + -1] == '\r') {
      local_38[*param_4 + -1] = '\0';
      *param_4 = *param_4 + -1;
    }
    if ((char)local_50 != '\0') {
      if (local_48 == 0) {
        uVar4 = FUN_00458d50();
        uVar5 = FUN_0045adf0();
        local_b8 = local_38;
        local_b0 = 0;
        local_a8 = *param_4;
        FUN_00458be0(&PTR_FUN_0043a338,&local_88,uVar4,uVar5);
        FUN_004194b0(&local_38,local_88,&DAT_00406578);
        local_70 = local_38;
        if (local_38 != (char *)0x0) {
          local_70 = *(char **)(local_38 + -8);
        }
        *param_4 = (int)local_70;
      }
      else {
        plVar6 = (longlong *)FUN_0045adf0();
        cVar2 = (**(code **)(*plVar6 + -0x70))(plVar6,lVar1);
        if (cVar2 == '\0') {
          uVar4 = FUN_0045adf0();
          local_b8 = local_38;
          local_b0 = 0;
          local_a8 = *param_4;
          FUN_00458be0(&PTR_FUN_0043a338,&local_90,lVar1,uVar4);
          FUN_004194b0(&local_38,local_90,&DAT_00406578);
          local_78 = local_38;
          if (local_38 != (char *)0x0) {
            local_78 = *(char **)(local_38 + -8);
          }
          *param_4 = (int)local_78;
        }
        plVar6 = (longlong *)FUN_0045adf0();
        (**(code **)(*plVar6 + 0x50))(plVar6,&local_40);
        if (((1 < *param_4) && (*local_38 == *local_40)) && (local_38[1] == local_40[1])) {
          local_64 = 2;
        }
      }
    }
    iVar3 = FUN_006e8d10(param_2,local_38,local_64,*param_4);
    *param_4 = iVar3;
  }
  FUN_00417840(&local_90,&DAT_00406578,2);
  FUN_00417840(&local_40,&DAT_00406578,2);
  return local_2c;
}

