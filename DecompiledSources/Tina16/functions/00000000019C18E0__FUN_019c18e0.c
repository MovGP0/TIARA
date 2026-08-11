/* Ghidra address: 019c18e0 */
/* Ghidra symbol: FUN_019c18e0 */


undefined8 FUN_019c18e0(undefined8 param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_44;
  undefined8 local_40 [2];
  int local_30;
  int local_2c;
  
  local_40[0] = 0;
  iVar4 = 0;
  if (param_3 != 0) {
    iVar4 = (int)*(undefined8 *)(param_3 + -8);
  }
  local_44 = 0;
  if (iVar4 - 1U < 0x80000000) {
    do {
      lVar1 = *(longlong *)(param_3 + (longlong)local_44 * 8);
      iVar5 = 0;
      if (lVar1 != 0) {
        iVar5 = (int)*(undefined8 *)(lVar1 + -8);
      }
      iVar3 = 0;
      if (iVar5 - 1U < 0x80000000) {
        do {
          plVar2 = *(longlong **)
                    (*(longlong *)(param_3 + (longlong)local_44 * 8) + (longlong)iVar3 * 0x18);
          (**(code **)(*plVar2 + 0x1f0))
                    (plVar2,*(undefined4 *)
                             (*(longlong *)(param_3 + (longlong)local_44 * 8) + 8 +
                             (longlong)iVar3 * 0x18),&local_2c,&local_30);
          local_2c = local_2c / 8;
          local_30 = local_30 / 8;
          if ((*param_2 == local_2c) && (param_2[1] == local_30)) {
            plVar2 = *(longlong **)
                      (*(longlong *)(param_3 + (longlong)local_44 * 8) + (longlong)iVar3 * 0x18);
            (**(code **)(*plVar2 + 0x288))(plVar2,local_40);
            FUN_00416cd0(param_1,4,local_40[0],&DAT_019c1ab4,
                         *(undefined8 *)
                          (*(longlong *)(param_3 + (longlong)local_44 * 8) + 0x10 +
                          (longlong)iVar3 * 0x18),&DAT_019c1ac4);
            goto LAB_019c1a72;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_44 = local_44 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(param_1,L"(unknown)");
LAB_019c1a72:
  FUN_00414480(local_40);
  return param_1;
}

