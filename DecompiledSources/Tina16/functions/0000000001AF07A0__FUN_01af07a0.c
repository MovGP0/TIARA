/* Ghidra address: 01af07a0 */
/* Ghidra symbol: FUN_01af07a0 */


void FUN_01af07a0(longlong param_1,int param_2,undefined2 *param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x6b8);
  if (*(char *)(lVar1 + 0xa9) != '\0') {
    if (param_2 == 1) {
      FUN_006d8180(lVar1,1);
      local_4c = *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x94);
    }
    else {
      FUN_006d8180(lVar1,0);
      param_4 = param_4 + 1;
      if (0 < param_4) {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,local_20,*param_3);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x700),local_20[0]);
        local_4c = *(int *)(param_1 + 0x7ac) + *(int *)(*(longlong *)(param_1 + 0x6f8) + 0x94) + -1;
      }
      if (1 < param_4) {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_28,param_3[1]);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_28);
        local_4c = *(int *)(param_1 + 0x7ac) + *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x94) + -1;
      }
      if (2 < param_4) {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_30,param_3[2]);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_30);
        local_4c = *(int *)(param_1 + 0x7ac) + *(int *)(*(longlong *)(param_1 + 0x6e8) + 0x94) + -1;
      }
      if (3 < param_4) {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_38,param_3[3]);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_38);
        local_4c = *(int *)(param_1 + 0x7ac) + *(int *)(*(longlong *)(param_1 + 0x6d8) + 0x94) + -1;
      }
      if (4 < param_4) {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_40,param_3[4]);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_40);
        local_4c = *(int *)(param_1 + 0x7ac) + *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x94) + -1;
      }
      if (5 < param_4) {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_48,param_3[5]);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_48);
        local_4c = *(int *)(param_1 + 0x7ac) + *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x94) +
                   *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x9c) + 1;
      }
    }
    if (*(char *)(param_1 + 0x790) == '\0') {
      FUN_0064cc50(*(undefined8 *)(param_1 + 0x6b8),local_4c);
      FUN_007fdf10(param_1,*(int *)(param_1 + 0x7a4) + *(int *)(param_1 + 0x7a8) + local_4c);
    }
    else if (*(char *)(param_1 + 0x790) == '\x03') {
      FUN_007fdf10(param_1,*(int *)(param_1 + 0x7a4) + local_4c);
    }
  }
  FUN_00414560(&local_48,6);
  return;
}

