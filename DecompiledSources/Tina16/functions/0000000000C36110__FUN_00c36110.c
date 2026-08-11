/* Ghidra address: 00c36110 */
/* Ghidra symbol: FUN_00c36110 */


undefined4 FUN_00c36110(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  longlong local_50;
  undefined1 *local_48;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 *local_30;
  undefined2 local_27;
  undefined1 local_25;
  undefined4 local_24;
  longlong *local_20;
  
  local_30 = auStack_78;
  if (*(int *)(param_1 + 0x8c) == 0x1fffffff) {
    local_30 = auStack_78;
    lVar2 = FUN_00c360e0(param_1);
    if (*(int *)(lVar2 + 0x10) < 1) {
      local_24 = FUN_005fbf20(0xff000005);
    }
    else {
      local_24 = FUN_00c32f20(param_1);
    }
  }
  else {
    local_24 = FUN_005fbf20(*(int *)(param_1 + 0x8c));
  }
  cVar1 = FUN_00c360f0(param_1);
  if (cVar1 != '\0') {
    local_20 = (longlong *)FUN_00c1c070(&PTR_FUN_00c19ba8,1,0);
    FUN_00c22dd0(&PTR_FUN_00c12858,&local_27,local_24);
    local_58 = &local_27;
    local_50 = (longlong)&local_27 + 1;
    local_48 = &local_25;
    (**(code **)(*local_20 + 8))(local_20,(undefined1)local_27,local_27._1_1_,local_25);
    local_38 = local_27;
    uStack_36 = local_25;
    local_24 = FUN_00c22e00(&PTR_FUN_00c12858,&local_38);
    FUN_00410f20(local_20);
  }
  return local_24;
}

