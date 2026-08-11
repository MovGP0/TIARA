/* Ghidra address: 005dc1d0 */
/* Ghidra symbol: FUN_005dc1d0 */


char FUN_005dc1d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  int local_28;
  char local_21;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_38 = 0;
  local_40 = 0;
  FUN_005dbea0(param_1,&local_38,param_2);
  local_21 = FUN_005e13b0(*(undefined8 *)(param_1 + 0x10),local_38,&local_28);
  if (local_21 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),local_28);
    FUN_005e11d0(*(undefined8 *)(param_1 + 0x10),local_38);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    if (local_28 < iVar2) {
      uVar3 = FUN_005e1680(*(undefined8 *)(param_1 + 0x10));
      local_20 = (longlong *)FUN_005e1aa0(uVar3);
      while( true ) {
        cVar1 = thunk_FUN_005e1c43(local_20);
        if (cVar1 == '\0') break;
        FUN_005e1af0(local_20,&local_40);
        FUN_005e13b0(*(undefined8 *)(param_1 + 0x10),local_40,&local_2c);
        if (local_28 < local_2c) {
          FUN_005e1410(*(undefined8 *)(param_1 + 0x10),local_40,local_2c + -1);
        }
      }
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + -0x20))(local_20,1);
      }
    }
  }
  FUN_00414560(&local_40,2);
  return local_21;
}

