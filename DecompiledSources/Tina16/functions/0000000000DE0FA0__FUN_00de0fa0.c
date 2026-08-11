/* Ghidra address: 00de0fa0 */
/* Ghidra symbol: FUN_00de0fa0 */


void FUN_00de0fa0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_0065a330(param_1,param_2);
  if (((*(uint *)(*(longlong *)(param_1 + 0x490) + 0x38) & 6) != 0) &&
     (*(char *)(param_1 + 0x50a) == '\0')) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x50a) = 1;
      if ((*(uint *)(*(longlong *)(param_1 + 0x490) + 0x38) & 2) != 0) {
        FUN_00ddfe60(param_1,0xfffffdff,*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x28));
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x490) + 0x38) & 4) != 0) {
        FUN_00ddc4e0(&local_38,*(undefined8 *)(param_1 + 0xb8));
        FUN_00de0620(param_1,0xfffffe00,&local_38);
      }
      *(undefined1 *)(param_1 + 0x50a) = 0;
    }
  }
  FUN_00460ba0(&local_38);
  return;
}

