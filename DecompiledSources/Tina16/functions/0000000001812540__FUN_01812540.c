/* Ghidra address: 01812540 */
/* Ghidra symbol: FUN_01812540 */


void FUN_01812540(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = FUN_0058d490(*(undefined8 *)(param_1 + 0xf0),
                          *(undefined8 *)
                           (*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0xac) * 8))
  ;
  cVar1 = FUN_018124c0(auStack_48);
  if ((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0xe0) + 0x30) != '\0')) {
    FUN_00448430(local_20,local_10);
    FUN_00414b50(param_1 + 0xb8,local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

