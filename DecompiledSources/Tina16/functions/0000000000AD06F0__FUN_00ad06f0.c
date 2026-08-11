/* Ghidra address: 00ad06f0 */
/* Ghidra symbol: FUN_00ad06f0 */


void FUN_00ad06f0(longlong param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined1 auStack_28 [32];
  
  sVar1 = FUN_00ad0550(auStack_28);
  *(short *)(*(longlong *)(param_1 + 0x50) + 0x20) = sVar1;
  if (sVar1 == 10) {
    if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x22) == '\x01') {
      uVar2 = FUN_00ad0550(auStack_28);
      *(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20) = uVar2;
    }
  }
  else if ((sVar1 == 0xd) && (*(char *)(*(longlong *)(param_1 + 0x50) + 0x22) == '\x02')) {
    uVar2 = FUN_00ad0550(auStack_28);
    *(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20) = uVar2;
  }
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x50) + 0x20);
  if (sVar1 == 9) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20) = 0x20;
  }
  else if (sVar1 == 10) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x22) = 2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20) = 0xd;
  }
  else if (sVar1 == 0xd) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x22) = 1;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x22) = 0;
    if (*(short *)(*(longlong *)(param_1 + 0x50) + 0x20) == 9) {
      *(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20) = 0x20;
    }
  }
  if ((*(short *)(*(longlong *)(param_1 + 0x50) + 0x20) == 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x50) + 0x80) != '\0')) {
    uVar3 = FUN_0044d490(&PTR_FUN_00a624c8,1,L"Open Comment at End of HTML File");
    FUN_004134c0(uVar3);
  }
  return;
}

