/* Ghidra address: 006efc30 */
/* Ghidra symbol: FUN_006efc30 */


undefined8 FUN_006efc30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0065be20(*(undefined8 *)(param_1 + 8));
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_006efc90(param_1);
    uVar2 = thunk_FUN_041b2403(uVar2,0x1004,0,0);
  }
  return uVar2;
}

