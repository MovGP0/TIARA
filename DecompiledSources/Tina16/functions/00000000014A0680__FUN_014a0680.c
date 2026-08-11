/* Ghidra address: 014a0680 */
/* Ghidra symbol: FUN_014a0680 */


void FUN_014a0680(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(param_1 + 0x770) == '\0') {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0xa8))(*(longlong **)(param_1 + 0x718));
    if (cVar3 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0x718),local_20);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x740) + 0x4e8);
      (**(code **)(*plVar2 + 0x100))(plVar2,local_20[0]);
    }
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2768);
    cVar3 = FUN_004113d0(uVar1,&PTR_FUN_01763148);
    if (cVar3 == '\0') {
      FUN_014a0130(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x4e8));
    }
    else {
      FUN_014a0090(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x4e8));
    }
    cVar3 = FUN_014a1f90(1,0,0,0);
    if (cVar3 != '\0') {
      FUN_00c0dad0(*(undefined8 *)(param_1 + 0x740),0);
    }
  }
  FUN_00414480(local_20);
  return;
}

