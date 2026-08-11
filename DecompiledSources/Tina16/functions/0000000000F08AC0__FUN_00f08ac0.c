/* Ghidra address: 00f08ac0 */
/* Ghidra symbol: FUN_00f08ac0 */


void FUN_00f08ac0(longlong param_1)

{
  longlong lVar1;
  undefined2 local_2d;
  undefined1 local_2b;
  undefined2 local_2a;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x965);
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x96d);
  local_2a = *(undefined2 *)(*(longlong *)(param_1 + 0x6d0) + 0x963);
  local_2b = *(undefined1 *)(*(longlong *)(param_1 + 0x6d0) + 0x975);
  local_2d = *(undefined2 *)(*(longlong *)(param_1 + 0x6d0) + 0x976);
  FUN_00f07e10(*(undefined8 *)(param_1 + 0x6b0),local_20,&local_28,&local_2a,&local_2b,&local_2d);
  if (*(char *)(*(longlong *)(param_1 + 0x6b0) + 0x540) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x6d0);
    *(undefined8 *)(lVar1 + 0x965) = local_20[0];
    *(undefined8 *)(lVar1 + 0x96d) = local_28;
    *(undefined2 *)(lVar1 + 0x963) = local_2a;
    *(undefined1 *)(lVar1 + 0x975) = local_2b;
    *(undefined2 *)(lVar1 + 0x976) = local_2d;
  }
  return;
}

