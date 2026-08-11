/* Ghidra address: 01165eb0 */
/* Ghidra symbol: FUN_01165eb0 */


void FUN_01165eb0(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 *local_40;
  int local_34;
  longlong local_30 [2];
  undefined4 local_1c;
  
  local_30[0] = 0;
  local_40 = param_1;
  lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  while( true ) {
    FUN_0043ea00(local_30,*local_40);
    if (local_30[0] == 0) break;
    uVar1 = FUN_01165e10(auStack_78,local_40);
    local_1c._2_2_ = (short)((uint)uVar1 >> 0x10);
    if (local_34 < local_1c._2_2_) {
      local_34 = (int)local_1c._2_2_;
    }
    local_1c = uVar1;
    uVar3 = FUN_00b95a80(uVar1);
    FUN_004ae7e0(lVar2,uVar3);
  }
  if (0 < *(int *)(lVar2 + 0x10)) {
    local_58 = 0;
    local_50 = 0;
    FUN_01992db0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),lVar2,0,0);
  }
  FUN_00410f20(lVar2);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

