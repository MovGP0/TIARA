/* Ghidra address: 007d7cd0 */
/* Ghidra symbol: FUN_007d7cd0 */


undefined1 FUN_007d7cd0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  if (param_2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x90))(param_1);
    iVar2 = (**(code **)(*param_2 + 0x90))(param_2);
    if (iVar1 == iVar2) {
      iVar1 = (**(code **)(*param_1 + 0x90))(param_1);
      if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_2 + 0x90))(param_2), iVar1 == 0)) {
        return 1;
      }
      local_28 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
      (**(code **)(*param_1 + 0xb8))(param_1,local_28);
      local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
      (**(code **)(*param_2 + 0xb8))(param_2,local_20);
      local_29 = FUN_007d7c80(auStack_68,local_28,local_20);
      FUN_00410f20(local_20);
      FUN_00410f20(local_28);
      return local_29;
    }
  }
  return 0;
}

