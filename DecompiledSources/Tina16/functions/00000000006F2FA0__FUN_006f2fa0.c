/* Ghidra address: 006f2fa0 */
/* Ghidra symbol: FUN_006f2fa0 */


void FUN_006f2fa0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 local_29 [9];
  
  if (*(char *)(param_1 + 0x510) == '\0') {
    if (*(longlong *)(param_1 + 0x520) == 0) {
      uVar2 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
      *(undefined8 *)(param_1 + 0x520) = uVar2;
    }
    else {
      FUN_004b6e40(*(longlong *)(param_1 + 0x520),0);
    }
    iVar1 = FUN_006efc30();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar3);
        local_29[0] = FUN_006eee10(uVar2);
        FUN_004b89e0(*(undefined8 *)(param_1 + 0x520),local_29,1);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x520),0);
  }
  return;
}

