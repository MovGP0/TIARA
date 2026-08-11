/* Ghidra address: 00665b50 */
/* Ghidra symbol: FUN_00665b50 */


void FUN_00665b50(longlong param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  int local_48;
  undefined1 *local_30;
  longlong local_28;
  
  local_30 = auStack_68;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    if (param_6 != '\0') {
      *(undefined1 *)(lVar2 + 0x2d0) = 1;
      *(uint *)(lVar2 + 0xa4) = *(uint *)(lVar2 + 0xa4) | 0x4000;
    }
    local_28 = *(longlong *)(param_1 + 8);
    if (((*(uint *)(local_28 + 0xa0) & 0x100000) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) == 0)) {
      local_48 = param_5;
      (**(code **)(**(longlong **)(param_1 + 8) + 400))
                (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
    }
    else {
      local_48 = param_5 - (*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c));
      local_30 = auStack_68;
      (**(code **)(**(longlong **)(param_1 + 8) + 400))
                (*(longlong **)(param_1 + 8),param_2 + *(int *)(param_1 + 0x10),
                 param_3 + *(int *)(param_1 + 0x14),
                 param_4 - (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18)));
    }
    if (param_6 != '\0') {
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar2 + 0x2d0) = 0;
      puVar1 = (uint *)(lVar2 + 0xa4);
      *puVar1 = *puVar1 & 0xffffbfff;
    }
  }
  return;
}

