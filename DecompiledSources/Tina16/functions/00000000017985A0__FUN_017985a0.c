/* Ghidra address: 017985a0 */
/* Ghidra symbol: FUN_017985a0 */


undefined1 FUN_017985a0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined8 uVar4;
  
  sVar3 = FUN_00c3f0d0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xca8));
  uVar2 = 0;
  if (sVar3 != -1) {
    uVar4 = FUN_004aeac0(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xca8) + 0x38),(int)sVar3);
    cVar1 = FUN_00c3cb20(uVar4);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

