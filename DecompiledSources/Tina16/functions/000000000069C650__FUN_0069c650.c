/* Ghidra address: 0069c650 */
/* Ghidra symbol: FUN_0069c650 */


void FUN_0069c650(int *param_1,longlong param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_38 [44];
  int local_c;
  
  local_c = 0;
  if (0 < param_3) {
    do {
      cVar1 = *(char *)(param_2 + local_c);
      if (cVar1 == '\t') {
        FUN_0069c5c0(auStack_38);
        uVar2 = FUN_0069c610(auStack_38);
        iVar3 = (uVar2 & 0x1fff) * 8;
        *param_1 = *param_1 + (iVar3 - (*param_1 + iVar3 + 1) % iVar3) + 1;
        if (param_1[2] < *param_1) {
          FUN_0069c460(param_1);
        }
      }
      else if (cVar1 == '\n') {
        FUN_0069c5c0(auStack_38);
        FUN_0069c460(param_1);
      }
      else if (cVar1 == '\f') {
        FUN_0069c5c0(auStack_38);
        FUN_0069c3f0(param_1);
      }
      else if (cVar1 == '\r') {
        FUN_0069c5c0(auStack_38);
      }
      else {
        local_c = local_c + 1;
      }
    } while (local_c < param_3);
  }
  FUN_0069c5c0(auStack_38);
  return;
}

