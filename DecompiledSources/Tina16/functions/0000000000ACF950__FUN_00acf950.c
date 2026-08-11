/* Ghidra address: 00acf950 */
/* Ghidra symbol: FUN_00acf950 */


void FUN_00acf950(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x260))(*(longlong **)(param_1 + 0x140));
  if ((cVar2 != *(char *)(param_1 + 0x148)) &&
     (lVar1 = *(longlong *)(param_1 + 0x18), *(longlong *)(lVar1 + 0x148) != 0)) {
    (**(code **)(lVar1 + 0x148))
              (*(undefined8 *)(lVar1 + 0x150),*(undefined8 *)(lVar1 + 0xb8),param_1,
               *(undefined8 *)(param_1 + 0x128));
  }
  return;
}

