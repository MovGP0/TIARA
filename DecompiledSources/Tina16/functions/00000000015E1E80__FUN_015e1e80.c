/* Ghidra address: 015e1e80 */
/* Ghidra symbol: FUN_015e1e80 */


undefined1 FUN_015e1e80(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  undefined1 *local_50;
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined1 local_22;
  undefined8 local_20;
  
  local_50 = auStack_88;
  local_22 = 1;
  local_40 = 0;
  local_20 = FUN_004095c0(0x100000);
  if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x101) != '\0') {
    local_68 = local_68 & 0xffffffffffffff00;
    local_60 = *(longlong *)(param_1 + 0x70) + 0x100;
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0xa0))
              (*(longlong **)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),0,10);
    local_68 = *(longlong *)(param_1 + 0x70) + 0x100;
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x98))(*(longlong **)(param_1 + 0x70),0,10,0);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x120) = param_4;
  do {
    *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x118) = local_40;
    if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x101) != '\0') {
      local_68 = CONCAT71(local_68._1_7_,1);
      local_60 = *(longlong *)(param_1 + 0x70) + 0x100;
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0xa0))
                (*(longlong **)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                 ((double)*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x118) /
                 (double)*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x120)) * 100.0,10);
      if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x100) != '\0') break;
      local_68 = *(longlong *)(param_1 + 0x70) + 0x100;
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x98))
                (*(longlong **)(param_1 + 0x70),
                 ((double)*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x118) /
                 (double)*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x120)) * 100.0,10,1);
      if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x100) != '\0') break;
    }
    if (param_4 - local_40 < 0x100001) {
      local_48 = param_4 - local_40;
    }
    else {
      local_48 = 0x100000;
    }
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,local_20,local_48 & 0xffffffff);
    local_30 = (longlong)iVar1;
    local_40 = local_40 + local_30;
    if ((local_30 != 0x100000) && (local_40 < param_4)) {
      local_22 = 0;
      break;
    }
    iVar1 = (**(code **)(*param_3 + 0x20))(param_3,local_20,iVar1);
    local_38 = (longlong)iVar1;
    if (local_30 != local_38) {
      local_22 = 0;
      break;
    }
  } while (local_40 < param_4);
  FUN_004095f0(local_20);
  return local_22;
}

