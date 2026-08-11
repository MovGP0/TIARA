/* Ghidra address: 0140f100 */
/* Ghidra symbol: FUN_0140f100 */


void FUN_0140f100(longlong param_1)

{
  ushort *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*PTR_DAT_020039a8 == '\0') {
    cVar2 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d0));
    *(char *)(param_1 + 0x780) = cVar2;
    if (cVar2 == '\0') {
      puVar1 = *(ushort **)(param_1 + 0x778);
      FUN_0140e810(*(undefined8 *)(param_1 + 2000),*(undefined8 *)(param_1 + 0x790),
                   *(undefined4 *)(param_1 + 0x7e0));
      FUN_00409a70(*(undefined8 *)(param_1 + 0x790),*(undefined8 *)(puVar1 + 4),(uint)*puVar1 * 2);
      FUN_0140ebd0(param_1,&local_50,&local_38);
      if (*(char *)(param_1 + 0x780) == '\0') {
        *(undefined8 *)(puVar1 + 0x14) = local_50;
        *(undefined8 *)(puVar1 + 0x18) = uStack_48;
        *(undefined8 *)(puVar1 + 0x1c) = uStack_40;
        *(undefined8 *)(puVar1 + 0xc) = local_38;
        *(undefined8 *)(puVar1 + 0x10) = uStack_30;
        *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8);
      }
      if (*(char *)(param_1 + 0x780) == '\0') {
        FUN_0140ae60(*(undefined8 *)(param_1 + 0x768));
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))
                          (*(longlong **)(param_1 + 0x750));
        *(undefined1 *)(puVar1 + 0x20) = uVar3;
      }
    }
  }
  else {
    FUN_00b0a960(*(undefined8 *)(param_1 + 0x6d0));
    if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x638) == 1) {
      *(undefined4 *)(param_1 + 0x508) = 1;
    }
  }
  return;
}

