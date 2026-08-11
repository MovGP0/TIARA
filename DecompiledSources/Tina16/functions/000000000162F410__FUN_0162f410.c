/* Ghidra address: 0162f410 */
/* Ghidra symbol: FUN_0162f410 */


void FUN_0162f410(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  
  local_1c = *(int *)(param_1 + 0xc);
  FUN_0040d200(*(undefined8 *)(param_1 + 0x698),(longlong)(local_1c * 4),0);
  local_1c = *(int *)(param_2 + 0xd8);
  iVar1 = 0;
  iVar3 = local_1c;
  if (-1 < local_1c + -1) {
    do {
      lVar2 = (longlong)iVar1;
      *(undefined4 *)(param_1 + 0xc0 + lVar2 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0xd0) + lVar2 * 4);
      *(undefined4 *)
       (*(longlong *)(param_1 + 0x698) + (longlong)*(int *)(param_1 + 0xc0 + lVar2 * 4) * 4) = 1;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  if (0 < local_1c) {
    do {
      lVar2 = *(longlong *)
               (*(longlong *)(param_1 + 0x6a0) +
               (longlong)*(int *)(param_1 + 0xc0 + (longlong)iVar3 * 4) * 0x10);
      if (lVar2 != 0) {
        FUN_0162f370(auStack_48,lVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_1c);
  }
  *(int *)(param_1 + 0x18) = local_1c;
  return;
}

