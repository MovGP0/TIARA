/* Ghidra address: 0055ba50 */
/* Ghidra symbol: FUN_0055ba50 */


void FUN_0055ba50(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_48 [32];
  undefined8 local_28;
  int local_1c;
  
  local_50 = auStack_78;
  local_28 = 0;
  FUN_00417580(local_48,&DAT_00527bf8);
  FUN_0055ac40(*(undefined8 *)(param_1 + 0x20),&local_28,param_2);
  local_1c = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_00417740(local_48,&DAT_00527bf8);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),local_28,uVar1);
  }
  FUN_0055ad40(*(undefined8 *)(param_1 + 0x20),param_2,local_28,local_48);
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x38) == '\x04') {
    *(longlong *)(param_2 + 0x30) = (longlong)local_1c;
  }
  FUN_00417740(local_48,&DAT_00527bf8);
  FUN_00419430(&local_28,&DAT_00492e48);
  return;
}

