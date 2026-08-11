/* Ghidra address: 00a9b5d0 */
/* Ghidra symbol: FUN_00a9b5d0 */


void FUN_00a9b5d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_00a9b200(param_1);
  if ((cVar2 != *(char *)(param_1 + 0x150)) &&
     (lVar1 = *(longlong *)(param_1 + 0x18), *(longlong *)(lVar1 + 0x148) != 0)) {
    (**(code **)(lVar1 + 0x148))
              (*(undefined8 *)(lVar1 + 0x150),*(undefined8 *)(lVar1 + 0xb8),param_1,
               *(undefined8 *)(param_1 + 0x128));
  }
  return;
}

