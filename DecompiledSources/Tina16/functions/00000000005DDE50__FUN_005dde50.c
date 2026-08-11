/* Ghidra address: 005dde50 */
/* Ghidra symbol: FUN_005dde50 */


void FUN_005dde50(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_005dcf20(param_1,local_20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    (**(code **)(*local_20 + 0x108))
              (local_20,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
  }
  else {
    FUN_004b6dc0(*(longlong *)(param_1 + 0x10),0);
    (**(code **)(*local_20 + 0x118))
              (local_20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_004b6da0(uVar1);
    FUN_004b6e40(uVar1,uVar2);
  }
  FUN_00410f20(local_20);
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

