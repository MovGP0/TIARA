/* Ghidra address: 019a4ec0 */
/* Ghidra symbol: FUN_019a4ec0 */


void FUN_019a4ec0(longlong param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined2 local_1a;
  
  local_40 = auStack_68;
  local_1a = *(undefined2 *)(*(longlong *)PTR_DAT_02005950 + 0x9c);
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
  bVar1 = FUN_019a4e30(param_1);
  if ((param_2 & bVar1) == 0) {
    cVar2 = FUN_019a4e70(param_1);
    if ((cVar2 == '\0') || (param_2 != 0)) goto LAB_019a4f89;
  }
  if (param_2 == 0) {
    *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + 1;
    plVar3 = (longlong *)
             FUN_004aeac0(*(undefined8 *)(param_1 + 0x3d8),*(undefined4 *)(param_1 + 0x400));
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  else {
    plVar3 = (longlong *)
             FUN_004aeac0(*(undefined8 *)(param_1 + 0x3d8),*(undefined4 *)(param_1 + 0x400));
    (**(code **)(*plVar3 + 0x18))(plVar3);
    *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + -1;
  }
LAB_019a4f89:
  FUN_019a4c90(param_1);
  FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,local_1a);
  return;
}

