/* Ghidra address: 006f91e0 */
/* Ghidra symbol: FUN_006f91e0 */


void FUN_006f91e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  FUN_006efe50(*(undefined8 *)(param_1 + 0x4e0));
  local_1c = FUN_006efc30(*(undefined8 *)(param_1 + 0x4e0));
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    do {
      uVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),local_1c);
      cVar1 = FUN_006ef240(uVar2,3);
      if (cVar1 != '\0') {
        uVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),local_1c);
        pcVar3 = (code *)FUN_00411550(param_1,0xffa7);
        (*pcVar3)(param_1,uVar2);
      }
      local_1c = local_1c + -1;
    } while (local_1c != -1);
  }
  FUN_006f0150(*(undefined8 *)(param_1 + 0x4e0));
  return;
}

