/* Ghidra address: 00ddfa50 */
/* Ghidra symbol: FUN_00ddfa50 */


undefined8 FUN_00ddfa50(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_18 [16];
  
  if (((*(longlong *)(param_1 + 0x4d0) != 0) &&
      (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x20))
                         (*(longlong **)(param_1 + 0x4d0),param_2,local_18), iVar2 == 1)) &&
     (cVar1 = thunk_FUN_041c9697(local_18,PTR_DAT_02003140), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

