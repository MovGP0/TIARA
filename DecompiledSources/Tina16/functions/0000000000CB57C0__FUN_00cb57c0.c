/* Ghidra address: 00cb57c0 */
/* Ghidra symbol: FUN_00cb57c0 */


void FUN_00cb57c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
                 undefined1 param_5,longlong *param_6,int *param_7)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_40 = auStack_78;
  local_20 = 0;
  *(undefined1 *)*param_6 = 5;
  *(undefined1 *)(*param_6 + 1) = param_5;
  *(undefined1 *)(*param_6 + 2) = 0;
  local_18 = FUN_0089df10(&PTR_FUN_0089d600,param_3);
  if (local_18 == 0) {
    FUN_00877e10(&local_20,param_3,0);
    *(undefined1 *)(*param_6 + 3) = 3;
    local_38 = local_20;
    if (local_20 != 0) {
      local_38 = *(longlong *)(local_20 + -8);
    }
    bVar2 = FUN_008764e0(local_38,0xff);
    *(byte *)(*param_6 + 4) = bVar2;
    if (bVar2 != 0) {
      local_58 = (uint)bVar2;
      FUN_00874e50(local_20,0,param_6,5);
    }
    *param_7 = *(byte *)(*param_6 + 4) + 5;
  }
  else {
    if (*(char *)(local_18 + 0xc) == '\x01') {
      *(undefined1 *)(*param_6 + 3) = 4;
    }
    else {
      *(undefined1 *)(*param_6 + 3) = 1;
    }
    FUN_0089dbf0(local_18,&local_20);
    local_28 = local_20;
    if (local_20 != 0) {
      local_28 = *(longlong *)(local_20 + -8);
    }
    local_58 = (uint)local_28;
    FUN_00874e50(local_20,0,param_6,4);
    lVar1 = local_18;
    local_30 = local_20;
    if (local_20 != 0) {
      local_30 = *(longlong *)(local_20 + -8);
    }
    *param_7 = (int)local_30 + 4;
    local_10 = local_18;
    local_18 = 0;
    FUN_00410f20(lVar1);
  }
  uVar3 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x58))
                    (*(longlong **)PTR_DAT_020050b0,param_4);
  FUN_00874e80(uVar3,param_6,*param_7);
  *param_7 = *param_7 + 2;
  FUN_00419430(&local_20,&DAT_0086e978);
  return;
}

