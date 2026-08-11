/* Ghidra address: 0078a190 */
/* Ghidra symbol: FUN_0078a190 */


void FUN_0078a190(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  thunk_FUN_03cc0d62(local_20);
  lVar2 = thunk_FUN_04129e10(local_20[0]);
  if (lVar2 != param_1[1]) {
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1,lVar2);
    if (cVar1 == '\0') {
      FUN_0078a130(param_1);
      *(undefined1 *)(param_1 + 0xc) = 0;
      (**(code **)(*param_1 + 0x80))(param_1);
    }
  }
  return;
}

