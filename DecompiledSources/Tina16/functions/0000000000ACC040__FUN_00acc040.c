/* Ghidra address: 00acc040 */
/* Ghidra symbol: FUN_00acc040 */


void FUN_00acc040(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x260))(*(longlong **)(param_1 + 0x158));
  if ((iVar2 != *(int *)(param_1 + 0x160)) &&
     (lVar1 = *(longlong *)(param_1 + 0x18), *(longlong *)(lVar1 + 0x148) != 0)) {
    (**(code **)(lVar1 + 0x148))
              (*(undefined8 *)(lVar1 + 0x150),*(undefined8 *)(lVar1 + 0xb8),param_1,
               *(undefined8 *)(param_1 + 0x128));
  }
  return;
}

