/* Ghidra address: 0094ebc0 */
/* Ghidra symbol: FUN_0094ebc0 */


undefined8 FUN_0094ebc0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  int local_38;
  int local_34;
  longlong *local_30;
  char local_21;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  uVar2 = (**(code **)(*param_1 + 0x168))(param_1);
  uVar2 = uVar2 & 0xff;
  if (uVar2 < 6) {
    if ((uVar2 == 5) || (uVar2 == 1)) {
LAB_0094ec43:
      local_20 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x110))(param_1);
      iVar1 = (**(code **)*puVar3)(puVar3);
      local_38 = iVar1 + -1;
      local_34 = 0;
      if (-1 < local_38) {
        do {
          plVar4 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1);
          local_30 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_34);
          local_21 = (**(code **)(*local_30 + 0x168))(local_30);
          if ((local_21 != '\a') && (local_21 != '\x06')) {
            (**(code **)(*local_30 + 400))(local_30,&local_58);
            (**(code **)(*local_20 + 0x28))(local_20,local_58);
          }
          local_34 = local_34 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      (**(code **)(*local_20 + 0x48))(local_20,param_2);
      FUN_00410f20(local_20);
      goto code_r0x0094ed55;
    }
    if (2 < uVar2 - 2) {
LAB_0094ed48:
      FUN_00414520(param_2);
      goto code_r0x0094ed55;
    }
  }
  else if (1 < uVar2 - 6) {
    if (uVar2 - 6 != 3) goto LAB_0094ed48;
    goto LAB_0094ec43;
  }
  (**(code **)(*param_1 + 0x160))(param_1,param_2);
code_r0x0094ed55:
  FUN_00414520(&local_58);
  return param_2;
}

