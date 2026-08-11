/* Ghidra address: 01598030 */
/* Ghidra symbol: FUN_01598030 */


undefined8 FUN_01598030(longlong *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong local_res10;
  uint local_res18;
  uint local_38;
  int local_30;
  
  if (((param_1 == (longlong *)0x0) || (param_1[5] == 0)) || (param_2 == 0)) {
    uVar6 = 0xfffffffe;
  }
  else {
    lVar2 = param_1[5];
    iVar1 = *(int *)(lVar2 + 0x24);
    if (((iVar1 == 2) || ((iVar1 == 1 && (*(int *)(lVar2 + 8) != 0x2a)))) ||
       (*(int *)(lVar2 + 0x8d) != 0)) {
      uVar6 = 0xfffffffe;
    }
    else {
      if (iVar1 == 1) {
        uVar5 = FUN_015a5730(*(undefined4 *)((longlong)param_1 + 0x4c),param_2,param_3);
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
      }
      *(undefined4 *)(lVar2 + 0x24) = 0;
      local_res10 = param_2;
      local_res18 = param_3;
      if (*(uint *)(lVar2 + 0x39) <= param_3) {
        if (iVar1 == 0) {
          *(undefined2 *)(*(longlong *)(lVar2 + 0x59) + (ulonglong)(*(int *)(lVar2 + 0x65) - 1) * 2)
               = 0;
          FUN_01596900(*(undefined8 *)(lVar2 + 0x59),0,(ulonglong)(*(int *)(lVar2 + 0x65) - 1) << 1)
          ;
          *(undefined4 *)(lVar2 + 0x85) = 0;
          *(undefined4 *)(lVar2 + 0x75) = 0;
          *(undefined4 *)(lVar2 + 0x16ea) = 0;
        }
        local_res10 = param_2 + (ulonglong)(param_3 - *(int *)(lVar2 + 0x39));
        local_res18 = *(uint *)(lVar2 + 0x39);
      }
      lVar4 = param_1[1];
      lVar3 = *param_1;
      *(uint *)(param_1 + 1) = local_res18;
      *param_1 = local_res10;
      FUN_01599370(lVar2);
      while (2 < *(uint *)(lVar2 + 0x8d)) {
        local_38 = *(uint *)(lVar2 + 0x85);
        local_30 = *(int *)(lVar2 + 0x8d) + -2;
        do {
          *(uint *)(lVar2 + 0x61) =
               (*(int *)(lVar2 + 0x61) << ((byte)*(undefined4 *)(lVar2 + 0x71) & 0x1f) ^
               (uint)*(byte *)(*(longlong *)(lVar2 + 0x45) + (ulonglong)(local_38 + 2))) &
               *(uint *)(lVar2 + 0x6d);
          *(undefined2 *)
           (*(longlong *)(lVar2 + 0x51) + (ulonglong)(local_38 & *(uint *)(lVar2 + 0x41)) * 2) =
               *(undefined2 *)(*(longlong *)(lVar2 + 0x59) + (ulonglong)*(uint *)(lVar2 + 0x61) * 2)
          ;
          *(undefined2 *)(*(longlong *)(lVar2 + 0x59) + (ulonglong)*(uint *)(lVar2 + 0x61) * 2) =
               (undefined2)local_38;
          local_38 = local_38 + 1;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
        *(uint *)(lVar2 + 0x85) = local_38;
        *(undefined4 *)(lVar2 + 0x8d) = 2;
        FUN_01599370(lVar2);
      }
      *(int *)(lVar2 + 0x85) = *(int *)(lVar2 + 0x85) + *(int *)(lVar2 + 0x8d);
      *(undefined4 *)(lVar2 + 0x75) = *(undefined4 *)(lVar2 + 0x85);
      *(undefined4 *)(lVar2 + 0x16ea) = *(undefined4 *)(lVar2 + 0x8d);
      *(undefined4 *)(lVar2 + 0x8d) = 0;
      *(undefined4 *)(lVar2 + 0x91) = 2;
      *(undefined4 *)(lVar2 + 0x79) = 2;
      *(undefined4 *)(lVar2 + 0x81) = 0;
      *param_1 = lVar3;
      *(int *)(param_1 + 1) = (int)lVar4;
      *(int *)(lVar2 + 0x24) = iVar1;
      uVar6 = 0;
    }
  }
  return uVar6;
}

