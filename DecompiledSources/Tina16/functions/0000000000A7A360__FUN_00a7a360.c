/* Ghidra address: 00a7a360 */
/* Ghidra symbol: FUN_00a7a360 */


void FUN_00a7a360(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_48 [39];
  char local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_21 = param_2;
  if (param_2 != *(char *)(param_1 + 0xb5)) {
    cVar2 = '\0';
    if (param_2 == '\0') {
      FUN_00a799b0(param_1,0);
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_005ffb10(*(longlong *)(param_1 + 0xa8),0);
      }
      thunk_FUN_041a2fd8(*(undefined8 *)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    else if (param_2 == '\x01') {
      if (*(char *)(param_1 + 0xb5) == '\x02') goto LAB_00a7a4ac;
      cVar2 = '\x01';
    }
    else if (param_2 == '\x02') {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_005ffb10(*(longlong *)(param_1 + 0xa8),0);
      }
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        thunk_FUN_041a2fd8(*(longlong *)(param_1 + 0xb8));
      }
      cVar2 = '\x02';
    }
    if (cVar2 != '\0') {
      uVar1 = FUN_00a7a250(auStack_48,cVar2);
      *(undefined8 *)(param_1 + 0xb8) = uVar1;
      if (*(longlong *)(param_1 + 0xb8) == 0) {
        FUN_0041ddd0(local_20,PTR_PTR_020049c0);
        FUN_00a794d0(local_20[0]);
      }
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_005ffb10(*(longlong *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb8));
      }
    }
    *(char *)(param_1 + 0xb5) = local_21;
  }
LAB_00a7a4ac:
  FUN_00414480(local_20);
  return;
}

