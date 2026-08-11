/* Ghidra address: 010b5120 */
/* Ghidra symbol: FUN_010b5120 */


void FUN_010b5120(undefined8 param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_30;
  int local_2c;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  uVar4 = FUN_00a39860(&PTR_FUN_00a2f148,1);
  *param_3 = uVar4;
  uVar4 = FUN_00609f90(param_1);
  if ((byte)uVar4 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0xc0U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,param_1);
  }
  else {
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    (**(code **)(*local_20 + 0x10))(local_20,param_1);
    FUN_0060bbf0(local_20,6);
    (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,local_20);
    FUN_00410f20(local_20);
  }
  FUN_00a3c4c0(*param_3);
  iVar1 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  local_30 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_28 = FUN_00a3c1b0(*param_3,local_30);
      iVar2 = (**(code **)(*(longlong *)*param_3 + 0x60))();
      local_2c = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar4 = FUN_00609e10(param_1);
          uVar4 = FUN_005ffa40(uVar4);
          iVar3 = thunk_FUN_0415e770(uVar4,local_2c,local_30);
          *(char *)(local_28 + local_2c) = -(iVar3 != param_2);
          local_2c = local_2c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_30 = local_30 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

