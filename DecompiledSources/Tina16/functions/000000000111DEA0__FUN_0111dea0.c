/* Ghidra address: 0111dea0 */
/* Ghidra symbol: FUN_0111dea0 */


void FUN_0111dea0(longlong param_1)

{
  char cVar1;
  undefined1 auStack_38 [45];
  byte local_b;
  undefined2 local_a;
  
  local_b = 0;
  *(undefined1 *)(param_1 + 0x163) = 4;
  local_a = *(undefined2 *)
             (*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2);
  *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
  cVar1 = FUN_0111d2a0(auStack_38);
  if (cVar1 == '\0') {
    return;
  }
  do {
    local_a = *(undefined2 *)
               (*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2);
    if (local_b < 4) {
      if (local_b == 3) {
        cVar1 = FUN_0111dab0(auStack_38);
      }
      else if (local_b == 0) {
        cVar1 = FUN_0111d6e0(auStack_38);
      }
      else if (local_b == 1) {
        cVar1 = FUN_0111d820(auStack_38);
      }
      else {
        if (local_b != 2) goto LAB_0111dfa8;
        cVar1 = FUN_0111d980(auStack_38);
      }
joined_r0x0111dfa6:
      if (cVar1 == '\0') {
        return;
      }
    }
    else {
      if (local_b == 4) {
        cVar1 = FUN_0111dbb0(auStack_38);
        goto joined_r0x0111dfa6;
      }
      if (local_b == 5) {
        cVar1 = FUN_0111dda0(auStack_38);
        goto joined_r0x0111dfa6;
      }
    }
LAB_0111dfa8:
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
  } while( true );
}

