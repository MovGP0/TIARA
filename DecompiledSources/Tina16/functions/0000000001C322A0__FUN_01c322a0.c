/* Ghidra address: 01c322a0 */
/* Ghidra symbol: FUN_01c322a0 */


void FUN_01c322a0(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0x710) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))
            (*(longlong **)(param_1 + 0x6d0),
             *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x718) + 8) + 8));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6d8),
               *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x718) + 8) + 0xc) + -1);
  FUN_00416880(local_20,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x718) + 8) + 0x18));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_20[0]);
  FUN_00416880(&local_28,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x718) + 8) + 0x10));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_28);
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
            (*(longlong **)(param_1 + 0x708),*(undefined1 *)(*(longlong *)(param_1 + 0x718) + 0x10))
  ;
  FUN_00414560(&local_28,2);
  return;
}

