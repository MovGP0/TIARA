/* Ghidra address: 013faae0 */
/* Ghidra symbol: FUN_013faae0 */


void FUN_013faae0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  if (param_2 != (longlong *)0x0) {
    cVar2 = FUN_0198a580(param_2);
    if (cVar2 == '\x04') {
      cVar2 = FUN_013faa60(param_1,param_2);
      if (cVar2 != '\0') {
        (**(code **)(*param_2 + 0x288))(param_2,local_20);
        if (local_20[0] != 0) {
          plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x6b0) + 0x4a0);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
        }
      }
    }
  }
  FUN_00414480(local_20);
  return;
}

