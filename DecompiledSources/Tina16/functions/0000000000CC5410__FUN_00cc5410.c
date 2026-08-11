/* Ghidra address: 00cc5410 */
/* Ghidra symbol: FUN_00cc5410 */


undefined8 FUN_00cc5410(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  short sVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  longlong local_res18;
  longlong *local_res20;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_3c;
  undefined8 local_38;
  undefined2 *local_30;
  undefined8 local_28;
  int local_1c;
  
  local_50 = auStack_88;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_28 = 0;
  local_30 = (undefined2 *)0x0;
  local_38 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_0041b910(local_res20);
  FUN_00414480(param_2);
  FUN_00419430(&local_30,&DAT_0086e9b8);
  FUN_00419430(&local_38,&DAT_0086e978);
  FUN_0086f700(&local_res20,7);
  local_1c = 1;
  while( true ) {
    local_3c = 0;
    if (local_res18 != 0) {
      local_3c = *(int *)(local_res18 + -4);
    }
    if (local_3c < local_1c) break;
    sVar1 = *(short *)(local_res18 + -2 + (longlong)local_1c * 2);
    if (sVar1 == 0x25) {
      local_1c = local_1c + 1;
      cVar2 = FUN_008791b0(local_res18,local_1c,&PTR_DAT_00cc5770);
      if (cVar2 == '\0') {
        FUN_00416dc0(&local_28,local_res18,local_1c,2);
        local_1c = local_1c + 2;
        FUN_00416ba0(&local_58,&DAT_00cc5784,local_28);
        uVar4 = FUN_00877c50(local_58);
        FUN_00878df0(&local_38,uVar4);
      }
      else {
        FUN_00416dc0(&local_28,local_res18,local_1c + 1,4);
        local_1c = local_1c + 5;
        if (local_30 == (undefined2 *)0x0) {
          FUN_00419260(&local_30,&DAT_0086e9b8,1,1);
        }
        FUN_00416ba0(&local_60,&DAT_00cc5784,local_28);
        uVar3 = FUN_00877c50(local_60);
        *local_30 = uVar3;
        (**(code **)(*local_res20 + 0x40))(local_res20,&local_68,local_30);
        FUN_00878d40(&local_38,local_68,0,0xffffffff);
      }
    }
    else {
      FUN_00878df0(&local_38,sVar1);
      local_1c = local_1c + 1;
    }
  }
  (**(code **)(*local_res20 + 0xf0))(local_res20,param_2,local_38);
  FUN_00419430(&local_68,&DAT_0086e978);
  FUN_00414560(&local_60,2);
  FUN_00419430(&local_38,&DAT_0086e978);
  FUN_00419430(&local_30,&DAT_0086e9b8);
  FUN_00414480(&local_28);
  FUN_00414480(&local_res18);
  FUN_0041b800(&local_res20);
  return param_2;
}

