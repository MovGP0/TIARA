/* Ghidra address: 00c8fbe0 */
/* Ghidra symbol: FUN_00c8fbe0 */


undefined1 FUN_00c8fbe0(longlong param_1,undefined2 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_68;
  local_48 = *(undefined1 *)(param_1 + 0x55);
  (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x18))
            (*(longlong **)PTR_DAT_020050b0,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x30),param_2);
  local_19 = 1;
  FUN_00c8fb10(param_1);
  return local_19;
}

