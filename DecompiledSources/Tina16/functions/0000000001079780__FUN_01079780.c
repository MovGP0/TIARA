/* Ghidra address: 01079780 */
/* Ghidra symbol: FUN_01079780 */


undefined1 FUN_01079780(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  int local_28;
  undefined1 local_21;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_21 = 0;
  local_20 = (longlong *)FUN_01b21480(*(undefined8 *)(param_1 + 0x98));
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_28 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_30,local_28);
      iVar2 = FUN_004170c0(local_30,local_res10[0],1);
      if (0 < iVar2) {
        local_21 = 1;
        FUN_01079860(0,local_40);
        goto LAB_0107983c;
      }
      local_28 = local_28 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
LAB_0107983c:
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return local_21;
}

