/* Ghidra address: 00835d70 */
/* Ghidra symbol: FUN_00835d70 */


char FUN_00835d70(longlong *param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  int local_50;
  undefined4 local_48;
  undefined8 local_28;
  int local_20;
  int local_1c [3];
  
  local_60 = 0;
  local_68 = 0;
  local_28 = 0;
  local_69 = '\0';
  if (*param_2 == 0x1b) {
    (**(code **)(*param_1 + 0x2b0))(param_1);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x2a8))(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_00680640(param_1);
      if ((cVar1 == '\0') && (*param_2 != 8)) {
        if (*param_2 == 0xd) {
          (**(code **)(*param_1 + 0x2c8))(param_1);
        }
        else {
          FUN_00835860(param_1,local_1c,&local_20);
          if (1 < local_20 - local_1c[0]) {
            FUN_008364a0(param_1,0x2e);
            local_1c[0] = FUN_00836330(param_1,local_1c[0]);
            FUN_008358c0(param_1,local_1c[0]);
          }
          if ((0xd7ff < *param_2) && (*param_2 < 0xe000)) {
            uVar3 = FUN_0065b870(param_1);
            iVar2 = thunk_FUN_04166556(local_58,uVar3,0x102,0x102,1);
            if ((iVar2 != 0) && (local_50 == 0x12)) {
              thunk_FUN_03fcecfa(local_48);
            }
          }
          local_69 = FUN_00836e40(param_1,param_2,local_1c[0]);
          if (local_69 != '\0') {
            if ((*param_2 < 0xd800) || (0xdfff < *param_2)) {
              FUN_00416780(&local_28,*param_2);
            }
            else {
              FUN_00416780(&local_60,*param_2);
              FUN_00416780(&local_68,(undefined2)local_48);
              FUN_00416ba0(&local_28,local_60,local_68);
              FUN_00835890(param_1,local_1c[0],local_1c[0] + 2);
            }
            uVar3 = FUN_0065b870(param_1);
            FUN_00470120(uVar3,0xc2,0,local_28);
            FUN_00835860(param_1,local_1c,&local_20);
            FUN_008362b0(param_1,local_1c[0],0);
          }
        }
      }
    }
  }
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_28);
  return local_69;
}

