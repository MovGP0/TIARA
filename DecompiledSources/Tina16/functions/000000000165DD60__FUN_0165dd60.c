/* Ghidra address: 0165dd60 */
/* Ghidra symbol: FUN_0165dd60 */


void FUN_0165dd60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_0165dd10(param_1,param_2);
  if (cVar1 == '\0') {
    lVar2 = 0;
    if (*(longlong *)(param_1 + 0x220) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x220) + -8);
    }
    if (lVar2 <= *(int *)(param_1 + 0x228)) {
      FUN_00419260(param_1 + 0x220,&DAT_0165ba18,1,(longlong)(*(int *)(param_1 + 0x228) * 2 + 100));
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x220) + (longlong)*(int *)(param_1 + 0x228) * 8) =
         param_2;
    *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
  }
  return;
}

