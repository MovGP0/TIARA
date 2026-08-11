/* Ghidra address: 007e1ca0 */
/* Ghidra symbol: FUN_007e1ca0 */


void FUN_007e1ca0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
  ushort local_98;
  char local_83;
  undefined1 local_82;
  undefined1 local_81;
  bool local_6e;
  char local_6d;
  undefined1 local_5a;
  longlong local_58;
  longlong local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_58 = FUN_007e3880(param_1);
  local_50 = FUN_007e1f10(param_1);
  local_5a = (param_4 & 1) != 0;
  iVar2 = FUN_0044f080();
  if ((iVar2 < 5) && ((iVar2 = FUN_0044f080(), iVar2 != 4 || (iVar2 = FUN_0044f0a0(), iVar2 < 1))))
  {
    local_81 = 0;
  }
  else {
    local_81 = 1;
  }
  iVar2 = FUN_0044f080();
  if ((iVar2 < 5) || (iVar2 = FUN_0044f060(), iVar2 != 2)) {
    local_82 = 0;
  }
  else {
    local_82 = 1;
  }
  local_6d = FUN_0044f0c0(5,1);
  if (local_6d != '\0') {
    plVar4 = (longlong *)FUN_007810f0();
    cVar1 = (**(code **)(*plVar4 + 0x90))(plVar4);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)PTR_DAT_020023f8)(0,0x3e9);
      local_6e = iVar2 != 0;
      goto LAB_007e1da1;
    }
  }
  local_6e = false;
LAB_007e1da1:
  if (((local_58 != 0) && ((*(char *)(local_58 + 0x90) != '\0' || (local_50 != 0)))) &&
     ((param_1[0x26] != 0 || (param_1[0x24] != 0)))) {
    (**(code **)(*param_1 + 0x90))(param_1,param_2,&local_38,local_5a);
    if (param_1[0x26] == 0) {
      return;
    }
    local_98 = param_4;
    (*(code *)param_1[0x26])(param_1[0x27],param_1,param_2,&local_38);
    return;
  }
  local_83 = FUN_0044f0c0(6,0);
  if (local_83 != '\0') {
    plVar4 = (longlong *)FUN_007810f0();
    lVar5 = (**(code **)(*plVar4 + 0xa8))(plVar4,10);
    if (lVar5 != 0) {
      if ((local_58 == 0) || (uVar6 = FUN_007e6b10(local_58), (char)uVar6 == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      FUN_007de690(auStack_b8,uVar3);
      return;
    }
  }
  if ((local_58 != 0) && (cVar1 = FUN_007e6b10(local_58), cVar1 == '\0')) {
    FUN_007dfae0(auStack_b8);
    return;
  }
  FUN_007e0ba0(auStack_b8);
  return;
}

