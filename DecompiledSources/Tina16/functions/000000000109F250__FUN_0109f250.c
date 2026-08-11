/* Ghidra address: 0109f250 */
/* Ghidra symbol: FUN_0109f250 */


void FUN_0109f250(longlong param_1)

{
  char cVar1;
  
  cVar1 = _Dbg_IsStopped(*(undefined8 *)(param_1 + 0x9c0));
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x9e1) == '\0')) {
    _Dbg_SetNodeChanged(*(undefined8 *)(param_1 + 0x9c0),0);
    _Dbg_TraceInto(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548) + 0x38),1
                  );
  }
  return;
}

