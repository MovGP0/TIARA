/* Ghidra address: 01b979d0 */
/* Ghidra symbol: FUN_01b979d0 */


void FUN_01b979d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x810),0);
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
  uVar4 = FUN_00c85d40(*(undefined8 *)PTR_DAT_02002c40,*PTR_DAT_02002480,0);
  *(undefined8 *)(param_1 + 0x8a0) = uVar4;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x768) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  if (*(longlong **)(param_1 + 0x8a0) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x90))();
    local_1c = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_0043f750(&local_38,local_1c);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x768) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
        local_1c = local_1c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (*(char *)(param_1 + 0x8a8) != '\0') {
    FUN_01b951f0(param_1);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x28))(*(longlong **)(param_1 + 0x880));
  if (0 < iVar2) {
    uVar3 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x30))
                      (*(longlong **)(param_1 + 0x880),uVar3);
    FUN_01b95260(param_1,uVar4);
  }
  FUN_01b97960(param_1,0);
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
  FUN_00414480(&local_38);
  return;
}

