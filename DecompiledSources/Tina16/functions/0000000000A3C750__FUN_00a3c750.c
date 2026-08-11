/* Ghidra address: 00a3c750 */
/* Ghidra symbol: FUN_00a3c750 */


uint FUN_00a3c750(longlong param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte local_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte local_e;
  undefined1 local_d;
  uint local_c;
  
  lVar3 = FUN_00a39e90(param_1);
  local_e = *(byte *)(lVar3 + 0x490);
  if (8 < local_e) {
    local_e = 8;
  }
  lVar4 = FUN_00a3c240(param_1);
  bVar1 = *(byte *)(lVar4 + param_2 / (int)(8 / local_e)) >>
          (8 - (local_e + (char)(param_2 % (int)(8 / local_e)) * local_e) & 0x1f) &
          (byte)(0xff >> (8 - local_e & 0x1f));
  if (*(char *)(lVar3 + 0x491) == '\0') {
    if (*(char *)(lVar3 + 0x490) == '\x01') {
      local_d = *(undefined1 *)(param_1 + 0x169 + (ulonglong)(byte)-bVar1);
    }
    else {
      local_d = *(undefined1 *)
                 (param_1 + 0x169 +
                 (ulonglong)(byte)(bVar1 * ((char)(1 << (local_e & 0x1f)) + '\x01')));
    }
    local_c = (uint)CONCAT12(local_d,CONCAT11(local_d,local_d));
  }
  else if (*(char *)(lVar3 + 0x491) == '\x03') {
    uVar5 = FUN_00a33e30(*(undefined8 *)(param_1 + 0x160),&PTR_FUN_00a31730);
    uVar2 = FUN_00a38d30(uVar5,bVar1);
    bStack_1a = (byte)((uint)uVar2 >> 0x10);
    bStack_1b = (byte)((uint)uVar2 >> 8);
    local_1c = (byte)uVar2;
    local_c = (uint)CONCAT12(*(undefined1 *)(param_1 + 0x169 + (ulonglong)local_1c),
                             CONCAT11(*(undefined1 *)(param_1 + 0x169 + (ulonglong)bStack_1b),
                                      *(undefined1 *)(param_1 + 0x169 + (ulonglong)bStack_1a)));
  }
  else {
    local_c = 0;
  }
  return local_c;
}

