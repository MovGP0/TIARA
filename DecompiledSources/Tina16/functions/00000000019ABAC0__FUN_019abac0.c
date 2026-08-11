/* Ghidra address: 019abac0 */
/* Ghidra symbol: FUN_019abac0 */


void FUN_019abac0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (param_1 != (longlong *)0x0) {
    if (DAT_01fbf7d8 == (longlong *)0x0) {
      DAT_01fbf7d8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_004b67b0(DAT_01fbf7d8,1);
      *(undefined1 *)((longlong)DAT_01fbf7d8 + 0x49) = 0;
    }
    (**(code **)(*param_1 + 0x1b0))(param_1,local_20);
    iVar1 = (**(code **)(*DAT_01fbf7d8 + 0xb0))(DAT_01fbf7d8,local_20[0]);
    if (iVar1 == -1) {
      (**(code **)(*param_1 + 0x1b0))(param_1,&local_28);
      uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
      (**(code **)(*DAT_01fbf7d8 + 0x80))(DAT_01fbf7d8,local_28,uVar2);
    }
    else {
      uVar2 = (**(code **)(*DAT_01fbf7d8 + 0x30))(DAT_01fbf7d8,iVar1);
      (**(code **)(*param_1 + 0x48))(param_1,uVar2);
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

