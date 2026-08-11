/* Ghidra address: 0046c970 */
/* Ghidra symbol: FUN_0046c970 */


undefined2 FUN_0046c970(undefined8 param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 *local_18;
  undefined1 local_a [2];
  
  cVar1 = FUN_0046c6f0(param_1,local_a,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *local_18;
  }
  return uVar2;
}

