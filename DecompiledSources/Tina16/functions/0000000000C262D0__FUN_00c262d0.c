/* Ghidra address: 00c262d0 */
/* Ghidra symbol: FUN_00c262d0 */


uint FUN_00c262d0(longlong param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x120) <= param_2) {
    if (*(char *)(param_1 + 300) != '\0') {
      FUN_0041ddd0(&local_10,PTR_PTR_02002458);
      FUN_00c262b0(param_1,param_1,1,local_10);
      local_1c = 0xffffffff;
      goto LAB_00c264f9;
    }
    *(undefined1 *)(param_1 + 0x20) =
         *(undefined1 *)(param_1 + 0x20 + (longlong)(*(int *)(param_1 + 0x128) + -2));
    *(undefined1 *)(param_1 + 0x21) =
         *(undefined1 *)(param_1 + 0x20 + (longlong)(*(int *)(param_1 + 0x128) + -1));
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                      (*(longlong **)(param_1 + 0x18),param_1 + 0x22,0xfe);
    *(int *)(param_1 + 0x128) = iVar2 + 2;
    *(int *)(param_1 + 0x120) = (*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x124)) + 0x10;
    iVar2 = *(int *)(param_1 + 0x128) * 8;
    *(int *)(param_1 + 0x124) = iVar2;
    if (iVar2 - *(int *)(param_1 + 0x120) <= param_2) {
      FUN_0041ddd0(&local_18,PTR_PTR_02002458);
      FUN_00c262b0(param_1,param_1,1,local_18);
      local_1c = 0xffffffff;
      goto LAB_00c264f9;
    }
    uVar1 = FUN_00c25570(*(undefined8 *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 300) = uVar1;
  }
  iVar2 = *(int *)(param_1 + 0x120);
  iVar5 = (iVar2 + param_2) / 8;
  iVar3 = iVar2 / 8;
  if (iVar3 == iVar5) {
    uVar4 = (uint)*(byte *)(param_1 + 0x20 + (longlong)iVar3);
  }
  else {
    iVar6 = iVar3 + 1;
    if (iVar6 == iVar5) {
      uVar4 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x20 + (longlong)iVar6),
                             *(undefined1 *)(param_1 + 0x20 + (longlong)iVar3));
    }
    else {
      uVar4 = (uint)CONCAT12(*(undefined1 *)(param_1 + 0x20 + (longlong)(iVar3 + 2)),
                             CONCAT11(*(undefined1 *)(param_1 + 0x20 + (longlong)iVar6),
                                      *(undefined1 *)(param_1 + 0x20 + (longlong)iVar3)));
    }
  }
  local_1c = uVar4 >> ((byte)iVar2 & 7) & *(uint *)(&DAT_01ea0630 + (longlong)param_2 * 4);
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + param_2;
LAB_00c264f9:
  FUN_00414560(&local_18,2);
  return local_1c;
}

