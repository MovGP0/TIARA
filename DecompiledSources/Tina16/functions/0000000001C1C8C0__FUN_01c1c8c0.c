/* Ghidra address: 01c1c8c0 */
/* Ghidra symbol: FUN_01c1c8c0 */


undefined4 FUN_01c1c8c0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  if (param_3 == 0) {
    local_3c = FUN_0043e420(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
  }
  else if (param_3 == 2) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
              (*(longlong **)(param_1 + 0x10),&local_20,1);
    iVar1 = FUN_0043fc00(local_20);
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x18))
              (*(longlong **)(param_2 + 0x10),&local_28,1);
    iVar2 = FUN_0043fc00(local_28);
    if (iVar2 < iVar1) {
      local_3c = 1;
    }
    else {
      local_3c = 0xffffffff;
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
              (*(longlong **)(param_1 + 0x10),&local_30,param_3 + -1);
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x18))
              (*(longlong **)(param_2 + 0x10),&local_38,param_3 + -1);
    local_3c = FUN_0043e420(local_30,local_38);
  }
  FUN_00414560(&local_38,4);
  return local_3c;
}

