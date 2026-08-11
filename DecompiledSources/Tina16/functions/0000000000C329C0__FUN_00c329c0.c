/* Ghidra address: 00c329c0 */
/* Ghidra symbol: FUN_00c329c0 */


void FUN_00c329c0(longlong param_1)

{
  undefined8 uVar1;
  code *local_28;
  longlong local_20;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_00c31cd0(param_1);
    uVar1 = FUN_00742bf0(&PTR_FUN_007334d8,1,0);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    FUN_00742eb0(uVar1,0);
    local_28 = FUN_00c31cf0;
    local_20 = param_1;
    FUN_00742ef0(*(undefined8 *)(param_1 + 0x88),&local_28);
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  return;
}

