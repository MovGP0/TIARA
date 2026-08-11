/* Ghidra address: 01c0c9a0 */
/* Ghidra symbol: FUN_01c0c9a0 */


void FUN_01c0c9a0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
    if (cVar1 == '\0') {
      if (((*(char *)((longlong)param_1 + 0x363) == '\0') &&
          (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')) &&
         ((char)param_1[0x6d] == '\0')) {
        return;
      }
      if (param_1[100] != 0) {
        FUN_005fdcb0(*(undefined8 *)(param_1[0x62] + 0x80),1);
        uVar4 = FUN_01c07120(param_1);
        lVar5 = FUN_01c03e40(uVar4);
        FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar5 + 0x84));
        iVar2 = (**(code **)(*param_1 + 0x280))(param_1);
        local_30._0_4_ = (int)local_30 - iVar2;
        FUN_005fdf50(param_1[0x62],&local_38);
        local_38 = CONCAT44(local_38._4_4_,(int)local_30 + -1);
        iVar2 = (**(code **)(*param_1 + 0x280))(param_1);
        local_30 = CONCAT44(local_30._4_4_,(int)local_30 + iVar2);
        FUN_005fdf50(param_1[0x62],&local_38);
      }
    }
  }
  return;
}

