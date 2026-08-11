/* Ghidra address: 010f7d70 */
/* Ghidra symbol: FUN_010f7d70 */


void FUN_010f7d70(longlong param_1)

{
  longlong lVar1;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = 0;
  local_38[0] = 0x53a;
  lVar1 = *(longlong *)(param_1 + 0x9b0);
  if (*(char *)(lVar1 + 0xc0) != '\0') {
    *(undefined1 *)(lVar1 + 0xc0) = 0;
    FUN_010e7ec0(lVar1,1);
  }
  if (*(char *)(lVar1 + 0xc1) != '\0') {
    *(undefined1 *)(lVar1 + 0xc1) = 0;
    FUN_010e7ec0(lVar1,0);
  }
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x970),0);
  FUN_010f6de0(param_1,local_38);
  return;
}

