/* Ghidra address: 0146f670 */
/* Ghidra symbol: FUN_0146f670 */


void FUN_0146f670(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 *local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0x10))(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x738) + 0x4e8));
  if (*(char *)(param_1 + 0x80a) == '\0') {
    uVar2 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x738));
    FUN_01c9c910(*(undefined8 *)PTR_DAT_02004e40,local_20,uVar2,7);
  }
  else {
    if (*(char *)(param_1 + 0x809) != '\0') {
      plVar1 = *(longlong **)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x28) + 0x90) + 0xa0);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x738) + 0x4e8));
      uVar2 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x738));
      plVar1 = *(longlong **)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x28) + 0x90) + 0x80);
      (**(code **)(*plVar1 + 0x10))(plVar1,uVar2);
    }
    *(undefined1 *)(param_1 + 0x809) = 1;
    FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,1,1);
    (**(code **)(**(longlong **)(param_1 + 0x810) + 0x50))
              (*(longlong **)(param_1 + 0x810),
               *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210),
               &local_30);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210);
    local_58 = local_24;
    (**(code **)(*plVar1 + 0x30))(plVar1,local_30,local_2c,local_28);
  }
  FUN_00805200(param_1);
  FUN_00410f20(local_20);
  return;
}

