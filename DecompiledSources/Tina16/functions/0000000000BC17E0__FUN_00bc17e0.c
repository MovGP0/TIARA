/* Ghidra address: 00bc17e0 */
/* Ghidra symbol: FUN_00bc17e0 */


byte FUN_00bc17e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res18 [2];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_28;
  byte local_21;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_20 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_20,param_2);
  cVar1 = FUN_005eaa60(local_20,local_res18[0]);
  if (cVar1 == '\0') {
    local_21 = 0;
  }
  else {
    local_21 = 1;
    iVar3 = (**(code **)(*param_1 + 0x88))();
    local_28 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = (**(code **)(*param_1 + 0x90))(param_1,local_28);
        bVar2 = FUN_00bc0c20(uVar4,local_20);
        local_21 = local_21 & bVar2;
        local_28 = local_28 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00410f20(local_20);
  FUN_00414480(local_res18);
  return local_21;
}

