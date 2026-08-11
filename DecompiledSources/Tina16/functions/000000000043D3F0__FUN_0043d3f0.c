/* Ghidra address: 0043d3f0 */
/* Ghidra symbol: FUN_0043d3f0 */


undefined8 FUN_0043d3f0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined2 local_68;
  undefined2 local_60;
  undefined2 local_58;
  undefined2 local_50;
  undefined8 *local_48;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined1 local_30 [16];
  undefined8 local_20 [3];
  
  local_20[0] = *param_1;
  uVar2 = 0;
  local_48 = local_20;
  thunk_FUN_040b8d9a(local_48,local_30);
  iVar1 = thunk_FUN_03ccba5f(0,local_30,&local_40);
  if (iVar1 != 0) {
    local_68 = local_38;
    local_60 = local_36;
    local_58 = local_34;
    local_50 = local_32;
    uVar2 = FUN_0043d350(auStack_88,local_40,local_3e,local_3a);
  }
  return uVar2;
}

