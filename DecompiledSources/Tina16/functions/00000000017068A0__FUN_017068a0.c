/* Ghidra address: 017068a0 */
/* Ghidra symbol: FUN_017068a0 */


void FUN_017068a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))(*(longlong **)(param_1 + 0x6b0),0);
  if (*(char *)(param_1 + 0x6e8) == '\0') {
    uVar2 = FUN_01705790(*(undefined8 *)(param_1 + 0x720));
    *(undefined8 *)(param_1 + 0x6f8) = uVar2;
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02003598);
    FUN_00b8e650(uVar2,local_20,L"HDLStrings.Msg_CategoryAll",local_28);
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x78))
              (*(longlong **)(param_1 + 0x700),local_20[0]);
    FUN_017057a0(*(undefined8 *)(param_1 + 0x720),*(undefined8 *)(param_1 + 0x700));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4f0);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x700));
    (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),0);
    FUN_01706ab0(param_1,0);
  }
  FUN_00414560(&local_28,2);
  return;
}

