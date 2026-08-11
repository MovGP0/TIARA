/* Ghidra address: 00bf1d60 */
/* Ghidra symbol: FUN_00bf1d60 */


void FUN_00bf1d60(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  char local_9;
  
  local_20 = auStack_48;
  local_18 = 0;
  cVar1 = FUN_00bf2c80(param_1);
  if (cVar1 == '\0') goto code_r0x00bf1df8;
  if (*(char *)(param_1 + 0x5f5) == '\x02') {
    uVar2 = FUN_00c09df0(param_1);
    if ((uVar2 & 0x4000000) == 0) goto LAB_00bf1da4;
    local_9 = '\x01';
  }
  else {
LAB_00bf1da4:
    local_9 = '\0';
  }
  if (local_9 != '\0') {
    *(uint *)(param_1 + 0x63a) = *(uint *)(param_1 + 0x63a) & 0xfbffffff;
  }
  FUN_00bf2ed0(param_1,&local_18);
  if (local_9 != '\0') {
    *(uint *)(param_1 + 0x63a) = *(uint *)(param_1 + 0x63a) | 0x4000000;
  }
  FUN_00bf1bf0(param_1,local_18);
code_r0x00bf1df8:
  FUN_00414480(&local_18);
  return;
}

