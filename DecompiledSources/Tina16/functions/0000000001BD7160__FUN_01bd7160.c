/* Ghidra address: 01bd7160 */
/* Ghidra symbol: FUN_01bd7160 */


ulonglong FUN_01bd7160(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  
  uVar5 = 0;
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x48) == *(longlong *)(param_2 + 800)) {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x70) + 0x4c3);
      if (cVar1 == '\0') {
        FUN_0064d000(param_2,local_38);
        uVar5 = (ulonglong)(*(int *)(param_1 + 0x38) <= local_30);
      }
      else if (cVar1 == '\x01') {
        uVar5 = (ulonglong)
                (*(int *)(param_2 + 0x90) <=
                *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38)));
      }
      else if (cVar1 == '\x02') {
        FUN_0064d000(param_2,local_38);
        uVar5 = (ulonglong)(*(int *)(param_1 + 0x3c) <= local_2c);
      }
      else if (cVar1 == '\x03') {
        uVar5 = (ulonglong)
                (*(int *)(param_2 + 0x94) <=
                *(int *)(param_1 + 0x3c) + (*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c)));
      }
      if (((char)uVar5 == '\0') || (*(char *)(*(longlong *)(param_2 + 800) + 0x58) == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 800) >> 8),1);
      }
    }
    else {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x70) + 0x4c3);
      if (cVar1 == '\0') {
        FUN_0064d000(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x80),local_38);
        iVar4 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x70));
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2b0))
                          (*(longlong **)(param_1 + 0x70),1);
        iVar3 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38);
        uVar5 = (ulonglong)
                CONCAT31((int3)((uint)iVar3 >> 8),
                         ((iVar4 - *(int *)(*(longlong *)(param_1 + 0x70) + 0x508)) - iVar2) - iVar3
                         < local_30 + *(int *)(*(longlong *)(param_1 + 0x70) + 0x4c4) +
                           *(int *)(param_2 + 0x98));
      }
      else if (cVar1 == '\x01') {
        iVar4 = *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
        uVar5 = (ulonglong)
                CONCAT31((int3)((uint)iVar4 >> 8),
                         (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x80) + 0x90) -
                         *(int *)(*(longlong *)(param_1 + 0x70) + 0x4c4)) - iVar4 <
                         *(int *)(param_2 + 0x98));
      }
      else if (cVar1 == '\x02') {
        FUN_0064d000(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x80),local_38);
        iVar4 = FUN_0064d120(*(undefined8 *)(param_1 + 0x70));
        iVar4 = ((iVar4 - *(int *)(*(longlong *)(param_1 + 0x70) + 0x4c4)) -
                *(int *)(*(longlong *)(param_1 + 0x70) + 0x504)) -
                (*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c));
        uVar5 = (ulonglong)
                CONCAT31((int3)((uint)iVar4 >> 8),iVar4 < local_2c + *(int *)(param_2 + 0x9c));
      }
      else if (cVar1 == '\x03') {
        iVar4 = *(int *)(param_1 + 0x3c) + (*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c));
        uVar5 = (ulonglong)
                CONCAT31((int3)((uint)iVar4 >> 8),
                         (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x80) + 0x94) -
                         *(int *)(*(longlong *)(param_1 + 0x70) + 0x4c4)) - iVar4 <
                         *(int *)(param_2 + 0x9c));
      }
    }
  }
  return uVar5;
}

