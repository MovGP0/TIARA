/* Ghidra address: 0084f850 */
/* Ghidra symbol: FUN_0084f850 */


void FUN_0084f850(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  if ((*(char *)(param_1 + 0x539) != '\0') &&
     (FUN_00850300(param_1,param_3,param_4), *(char *)(param_1 + 0x538) != '\0')) {
    local_48 = param_3;
    local_44 = param_4;
    local_60[0] = FUN_0064d1f0(param_1,&local_48);
    local_30 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0x528),local_60);
    (**(code **)(**(longlong **)(param_1 + 0x528) + 0xe0))(*(longlong **)(param_1 + 0x528),local_40)
    ;
    cVar2 = FUN_00423210(local_40,&local_30);
    if (cVar2 != '\0') {
      FUN_008502c0(param_1);
      uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x528));
      local_50 = local_30;
      uVar1 = local_50;
      local_50._0_4_ = (uint)local_30;
      uVar5 = (uint)local_50 & 0xffff;
      local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
      uVar3 = local_50._4_4_ << 0x10;
      local_50 = uVar1;
      thunk_FUN_041b2403(uVar4,0x201,0,(longlong)(int)(uVar5 | uVar3));
      return;
    }
  }
  FUN_00650d70(param_1,param_2,param_3,param_4);
  return;
}

