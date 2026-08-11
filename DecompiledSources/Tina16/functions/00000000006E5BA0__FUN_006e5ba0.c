/* Ghidra address: 006e5ba0 */
/* Ghidra symbol: FUN_006e5ba0 */


void FUN_006e5ba0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  if (*(int *)(param_2 + 0x10) == 0) {
    local_40 = auStack_68;
    (**(code **)(*param_1 + 0x2c0))(param_1,0);
  }
  else {
    local_28 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_2c = *(int *)(param_2 + 0x10) + -1;
    if (-1 < local_2c) {
      do {
        lVar2 = FUN_004aeac0(param_2,local_2c);
        if (*(char *)(lVar2 + 0x38) != '\0') {
          FUN_004ae870(param_2,local_2c);
        }
        local_2c = local_2c + -1;
      } while (local_2c != -1);
    }
    if (0 < *(int *)(param_2 + 0x10)) {
      lVar2 = FUN_006e2530(param_1);
      lVar3 = FUN_004aeac0(param_2,0);
      if (lVar2 != lVar3) {
        uVar4 = FUN_004aeac0(param_2,0);
        FUN_006e2590(param_1,uVar4);
      }
    }
    FUN_004af610(local_20,param_1[0xad],4,param_2);
    if ((0 < *(int *)(local_20 + 0x10)) &&
       (local_2c = *(int *)(param_1[0xad] + 0x10) + -1, -1 < local_2c)) {
      do {
        uVar4 = FUN_004aeac0(param_1[0xad],local_2c);
        iVar1 = FUN_004aeba0(local_20,uVar4);
        if (iVar1 != -1) {
          FUN_006e5480(param_1,local_2c);
        }
        local_2c = local_2c + -1;
      } while (local_2c != -1);
    }
    FUN_004af610(local_28,param_2,4,param_1[0xad]);
    iVar1 = *(int *)(local_28 + 0x10);
    local_2c = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar4 = FUN_004aeac0(local_28,local_2c);
        FUN_006e54c0(param_1,uVar4,0);
        local_2c = local_2c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_004af610(param_1[0xad],param_2,0,0);
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
  }
  FUN_006e5a00(param_1);
  return;
}

