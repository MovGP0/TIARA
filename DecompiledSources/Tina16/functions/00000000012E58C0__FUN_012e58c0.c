/* Ghidra address: 012e58c0 */
/* Ghidra symbol: FUN_012e58c0 */


/* WARNING: Type propagation algorithm not settling */

void FUN_012e58c0(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  uint local_30 [4];
  
  local_30[1] = 0;
  local_30[0] = 0;
  iVar1 = FUN_012e5a50(param_1,param_2);
  if (param_3 != iVar1) {
    FUN_012e5af0(param_1,param_2,local_30 + 1,local_30);
    iVar1 = FUN_012e5a50(param_1,param_2);
    if (param_3 < iVar1) {
      iVar1 = FUN_012e5a50(param_1,param_2);
      iVar1 = iVar1 - param_3;
      if (-1 < iVar1 + -1) {
        do {
          plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),local_30[0] - 1);
          (**(code **)(*plVar2 + -0x20))(plVar2,1);
          FUN_004ae870(*(undefined8 *)(param_1 + 0x38),local_30[0] - 1);
          local_30[0] = local_30[0] - 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    else {
      iVar1 = FUN_012e5a50(param_1,param_2);
      if (iVar1 < param_3) {
        iVar1 = FUN_012e5a50(param_1,param_2);
        param_3 = param_3 - iVar1;
        if (-1 < param_3 + -1) {
          do {
            FUN_012e5090(&DAT_012e2ef8,1,0,0,1,0,param_2,0,0x3ff0000000000000,0x4014000000000000,0,
                         0x3ff0000000000000);
            FUN_004aec30(*(undefined8 *)(param_1 + 0x38),local_30[0]);
            local_30[0] = local_30[0] + 1;
            param_3 = param_3 + -1;
          } while (param_3 != 0);
        }
      }
    }
  }
  return;
}

