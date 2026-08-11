/* Ghidra address: 018046f0 */
/* Ghidra symbol: FUN_018046f0 */


void FUN_018046f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (((*(longlong *)(param_1 + 0x30) != 0) && (*(char *)(param_2 + 0x18) == '\0')) &&
     (*(char *)(param_2 + 0x38) != '\0')) {
    local_10 = FUN_01804b60(&DAT_01802850,1,*(longlong *)(param_1 + 0x30));
    uVar1 = FUN_01803c40(param_2);
    FUN_01804cc0(local_10,uVar1);
    FUN_01805470(local_10,param_2,1);
    *(undefined1 *)(param_2 + 0x18) = 1;
    FUN_00410f20(local_10);
  }
  return;
}

