/* Ghidra address: 004aa580 */
/* Ghidra symbol: FUN_004aa580 */


void FUN_004aa580(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  longlong local_90;
  longlong *local_88;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  int local_54;
  ulonglong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_a0 = auStack_c8;
  local_50 = 0xffffffffffffffff;
  local_20 = (longlong *)FUN_004ef840(*(undefined8 *)(param_1 + 8));
  while( true ) {
    cVar1 = thunk_FUN_004f00f3(local_20);
    if (cVar1 == '\0') break;
    FUN_004effa0(local_20,&local_48);
    if (*(ulonglong *)(local_40 + 8) < local_50) {
      local_50 = *(ulonglong *)(local_40 + 8);
    }
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  dVar3 = (double)(longlong)local_50;
  if ((longlong)local_50 < 0) {
    dVar3 = dVar3 + 1.8446744073709552e+19;
  }
  local_50 = FUN_0040c770(dVar3 * 1.1);
  uVar2 = FUN_0040c860((longlong)*(int *)(param_1 + 0x10),100000000,11000);
  local_54 = FUN_0040c780(uVar2);
  local_38 = FUN_004f0700(&PTR_FUN_004aaf60,1);
  local_28 = (longlong *)FUN_004ef840(*(undefined8 *)(param_1 + 8));
  do {
    do {
      cVar1 = thunk_FUN_004f00f3(local_28);
      if (cVar1 == '\0') goto code_r0x004aa704;
      FUN_004effa0(local_28,&local_48);
    } while (local_50 < *(ulonglong *)(local_40 + 8));
    local_68 = local_48;
    local_6c = FUN_00597e50(local_38 + 8,&local_68);
  } while (local_54 < *(int *)(*(longlong *)(param_1 + 8) + 0x10) - *(int *)(local_38 + 0x10));
code_r0x004aa704:
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + -0x20))(local_28,1);
  }
  local_30 = (longlong *)FUN_004f14e0(&PTR_FUN_004aacf8,1,local_38);
  while( true ) {
    local_88 = local_30;
    *(int *)(local_30 + 2) = (int)local_30[2] + 1;
    if (*(int *)(local_30[1] + 0x10) <= (int)local_30[2]) break;
    local_90 = local_30[1];
    local_60 = *(undefined8 *)(*(longlong *)(local_90 + 8) + (longlong)(int)local_30[2] * 8);
    FUN_004ef330(*(undefined8 *)(param_1 + 8),local_60);
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + -0x20))(local_30,1);
  }
  FUN_00410f20(local_38);
  return;
}

