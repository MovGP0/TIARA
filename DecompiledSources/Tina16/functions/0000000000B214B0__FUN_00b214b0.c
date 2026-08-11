/* Ghidra address: 00b214b0 */
/* Ghidra symbol: FUN_00b214b0 */


undefined1 FUN_00b214b0(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_29;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_28 = 0;
  iVar2 = FUN_00417250(&LAB_00b21604,param_1,1);
  if (iVar2 < 1) {
    cVar1 = FUN_00b211f0(param_1,&local_1c);
    if (cVar1 == '\0') {
      local_29 = 0;
      goto LAB_00b215c4;
    }
    local_20 = local_1c;
  }
  else {
    FUN_00415ad0(&local_28,param_1,1,iVar2 + -1);
    cVar1 = FUN_00b211f0(local_28,&local_1c);
    if (cVar1 == '\0') {
      local_29 = 0;
      goto LAB_00b215c4;
    }
    uVar3 = 0;
    if (param_1 != 0) {
      uVar3 = *(undefined4 *)(param_1 + -4);
    }
    FUN_00415ad0(&local_28,param_1,iVar2 + 1,uVar3);
    cVar1 = FUN_00b211f0(local_28,&local_20);
    if (cVar1 == '\0') {
      local_29 = 0;
      goto LAB_00b215c4;
    }
  }
  *param_2 = (undefined2)local_1c;
  param_2[1] = (undefined2)local_20;
  *(undefined1 *)(param_2 + 2) = local_1c._2_1_;
  *(undefined1 *)((longlong)param_2 + 5) = local_20._2_1_;
  *(byte *)(param_2 + 3) = local_1c._3_1_ | local_20._3_1_ * '\x04';
  local_29 = 1;
LAB_00b215c4:
  FUN_004144d0(&local_28);
  return local_29;
}

