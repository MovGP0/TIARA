/* Ghidra address: 00a99c40 */
/* Ghidra symbol: FUN_00a99c40 */


void FUN_00a99c40(longlong *param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if (param_1[0x25] != 0) {
    (**(code **)(*param_1 + 0x120))(param_1);
  }
  lVar1 = param_1[3];
  if ((*(longlong *)(lVar1 + 0x138) != 0) && (param_1[0x24] != 0)) {
    (**(code **)(lVar1 + 0x138))
              (*(undefined8 *)(lVar1 + 0x140),*(undefined8 *)(lVar1 + 0xb8),param_1,param_1[0x24]);
  }
  (**(code **)(**(longlong **)(param_1[3] + 0xc0) + 0x180))(*(longlong **)(param_1[3] + 0xc0));
  return;
}

