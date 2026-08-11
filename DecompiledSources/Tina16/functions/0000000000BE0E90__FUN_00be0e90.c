/* Ghidra address: 00be0e90 */
/* Ghidra symbol: FUN_00be0e90 */


void FUN_00be0e90(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  int local_3c;
  undefined1 local_38 [16];
  
  FUN_00be1ec0(local_38,param_2,param_4,param_3,param_5);
  cVar2 = FUN_00be4670(*(undefined8 *)(param_1 + 0x20),local_38,&local_3c);
  if (cVar2 == '\0') {
    FUN_0059a1a0(*(longlong *)(param_1 + 0x20) + 8,local_3c,local_38);
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar3 = (longlong)local_3c;
    if (*(char *)(*(longlong *)(lVar1 + 8) + 4 + lVar3 * 0x10) == (char)param_4) {
      bVar4 = *(int *)(*(longlong *)(lVar1 + 8) + 8 + lVar3 * 0x10) != param_3;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      bVar4 = true;
    }
    else {
      bVar4 = *(int *)(*(longlong *)(lVar1 + 8) + 0xc + lVar3 * 0x10) != param_5;
    }
    if (bVar4) {
      *(char *)(*(longlong *)(lVar1 + 8) + 4 + lVar3 * 0x10) = (char)param_4;
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 8 + (longlong)local_3c * 0x10) =
           param_3;
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 0xc + (longlong)local_3c * 0x10) =
           param_5;
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  return;
}

