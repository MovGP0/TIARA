/* Ghidra address: 01812370 */
/* Ghidra symbol: FUN_01812370 */


void FUN_01812370(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  ulonglong local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = FUN_0058ada0(*(undefined8 *)(param_1 + 0xf0),
                          *(undefined8 *)
                           (*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0xac) * 8))
  ;
  cVar2 = FUN_018122f0(auStack_58);
  if ((cVar2 == '\0') || (*(char *)(*(longlong *)(param_1 + 0xe0) + 0x30) != '\0')) {
    pcVar1 = *(char **)**(undefined8 **)
                         (*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0xac) * 8);
    cVar2 = *pcVar1;
    if (cVar2 == '\x10') {
      FUN_0043f780(local_20,local_10);
      FUN_00414b50(param_1 + 0xb8,local_20[0]);
    }
    else if (cVar2 == '\x03') {
      FUN_005894c0(&local_28,pcVar1,local_10 & 0xffffffff);
      FUN_00414b50(param_1 + 0xb8,local_28);
    }
    else {
      FUN_0043f750(&local_30,local_10 & 0xffffffff);
      FUN_00414b50(param_1 + 0xb8,local_30);
    }
  }
  FUN_00414560(&local_30,3);
  return;
}

