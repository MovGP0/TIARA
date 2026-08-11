/* Ghidra address: 01812860 */
/* Ghidra symbol: FUN_01812860 */


void FUN_01812860(longlong param_1)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_0058d710(&local_30,*(undefined8 *)(param_1 + 0xf0),
               *(undefined8 *)
                (*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0xac) * 8));
  cVar1 = FUN_018127a0(auStack_68);
  if ((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0xe0) + 0x30) != '\0')) {
    FUN_0046c3f0(&local_48,&local_30);
    FUN_01802f80(local_40,local_48);
    FUN_00414b50(param_1 + 0xb8,local_40[0]);
  }
  FUN_00414560(&local_48,2);
  FUN_00460ba0(&local_30);
  return;
}

