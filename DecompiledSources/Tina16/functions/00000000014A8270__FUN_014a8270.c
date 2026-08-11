/* Ghidra address: 014a8270 */
/* Ghidra symbol: FUN_014a8270 */


void FUN_014a8270(longlong *param_1,undefined2 param_2,ushort param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [32];
  ushort local_38;
  undefined4 local_30;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_58;
  local_10 = 0;
  if ((*(char *)(*param_1 + 0x79) == '\0') && (0x14 < param_3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(*param_1 + 0x79) = uVar2;
  local_38 = param_3;
  local_30 = param_4;
  local_10 = FUN_01cf0560(0,&PTR_FUN_010b6978,param_1,param_2);
  if (local_10 != 0) {
    plVar1 = *(longlong **)(*param_1 + 0x48);
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*DAT_0210eae0 + 0x20))(DAT_0210eae0,local_10);
    }
    else {
      (**(code **)(*plVar1 + 0x20))(plVar1,local_10);
    }
  }
  if (local_10 == 0) {
    FUN_01d31a60(*param_1);
  }
  return;
}

