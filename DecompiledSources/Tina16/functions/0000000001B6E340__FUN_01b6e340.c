/* Ghidra address: 01b6e340 */
/* Ghidra symbol: FUN_01b6e340 */


void FUN_01b6e340(longlong param_1,byte param_2)

{
  char cVar1;
  undefined8 in_RAX;
  bool bVar2;
  byte local_res10 [24];
  undefined4 local_38 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  if ((byte)(param_2 - 8) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_2 - 8 & 0x1f) & 0x38U) != 0;
  }
  else {
    bVar2 = false;
  }
  local_res10[0] = param_2;
  if (bVar2) {
    FUN_010e3150();
    if (*(longlong *)
         (*(longlong *)(param_1 + 0x8c0) + 0x3c8 + (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20) !=
        0) {
      FUN_00805200(*(undefined8 *)
                    (*(longlong *)(param_1 + 0x8c0) + 0x3c8 +
                    (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20));
    }
    if (*(longlong *)
         (*(longlong *)(param_1 + 0x8c0) + 0x88 + (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20) != 0
       ) {
      FUN_00805200(*(undefined8 *)
                    (*(longlong *)(param_1 + 0x8c0) + 0x88 +
                    (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20));
    }
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x98))
                    (*(longlong **)(param_1 + 0x9d8),local_res10);
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 0x9ca) = local_res10[0];
    FUN_01b6bcd0(param_1,local_res10[0]);
  }
  else {
    local_38[0] = 0x537;
    local_30 = 0;
    local_28 = (ulonglong)local_res10[0];
    FUN_01b6d8c0(param_1,local_38);
  }
  return;
}

