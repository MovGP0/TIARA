/* Ghidra address: 0184e330 */
/* Ghidra symbol: FUN_0184e330 */


undefined8 FUN_0184e330(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  int local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  int local_30;
  undefined4 local_2c;
  
  local_40 = auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (param_3 == (longlong *)0x0) {
    FUN_0046f180(param_2);
  }
  else {
    local_2c = 0xffffffff;
    local_40 = auStack_88;
    if ((char)param_3[0x11] != '\0') {
      local_40 = auStack_88;
      local_2c = FUN_01848540(param_3);
    }
    cVar1 = FUN_0046ca60(param_4);
    if (cVar1 != '\0') {
      iVar2 = FUN_0046c9e0(param_4,1);
      local_30 = 0;
      if (-1 < iVar2) {
        iVar2 = iVar2 + 1;
        do {
          plVar3 = (longlong *)FUN_01847630(param_3,local_30);
          local_60[0] = local_30;
          FUN_0046cb70(&local_58,param_4,1,local_60);
          (**(code **)(*plVar3 + 8))(plVar3,&local_58);
          local_30 = local_30 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    (**(code **)(*param_3 + 0x10))(param_3,param_2);
    FUN_01848710(param_3,local_2c,1,0);
  }
  FUN_00460ba0(&local_58);
  return param_2;
}

