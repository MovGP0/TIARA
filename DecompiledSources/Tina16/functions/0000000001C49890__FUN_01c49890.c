/* Ghidra address: 01c49890 */
/* Ghidra symbol: FUN_01c49890 */


void FUN_01c49890(longlong param_1)

{
  undefined1 uVar1;
  undefined2 local_2d;
  undefined1 local_2b;
  undefined2 local_2a;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = *(undefined8 *)(PTR_DAT_02004010 + 0x38d);
  local_28 = *(undefined8 *)(PTR_DAT_02004010 + 0x395);
  local_2a = *(undefined2 *)(PTR_DAT_02004010 + 0x38b);
  local_2b = PTR_DAT_02004010[0x39d];
  local_2d = *(undefined2 *)(PTR_DAT_02004010 + 0x39e);
  FUN_00f5d4a0(*(undefined8 *)(param_1 + 0x6d8));
  FUN_00f07e10(*(undefined8 *)(param_1 + 0x6f0),local_20,&local_28,&local_2a,&local_2b,&local_2d);
  FUN_010be740(*(undefined8 *)(param_1 + 0x6e8));
  FUN_0149cb90(*(undefined8 *)(param_1 + 0x6e0));
  if (*(char *)(*(longlong *)(param_1 + 0x6f0) + 0x540) == '\0') {
    *(undefined8 *)(PTR_DAT_02004010 + 0x38d) = local_20[0];
    *(undefined8 *)(PTR_DAT_02004010 + 0x395) = local_28;
    *(undefined2 *)(PTR_DAT_02004010 + 0x38b) = local_2a;
    PTR_DAT_02004010[0x39d] = local_2b;
    *(undefined2 *)(PTR_DAT_02004010 + 0x39e) = local_2d;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710));
  PTR_DAT_02004010[0x8bc] = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718));
  PTR_DAT_02004010[0x8bd] = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  PTR_DAT_02004010[0x8be] = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728));
  PTR_DAT_02004010[0x8bf] = uVar1;
  return;
}

