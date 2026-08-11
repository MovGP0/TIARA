/* Ghidra address: 018c6690 */
/* Ghidra symbol: FUN_018c6690 */


void FUN_018c6690(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    iVar2 = FUN_0196f500();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_0196f4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x40),iVar4);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01934910);
        if (cVar1 != '\0') {
          uVar3 = FUN_0196f4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x40),iVar4);
          *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x128) = uVar3;
          cVar1 = FUN_0196bc20(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x128));
          if ((cVar1 == '\0') &&
             (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x128) + 0xc5) != '\0')) {
            FUN_018c9eb0(*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x128));
          }
          if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x288) != '\0') {
            return;
          }
          *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 200) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x128) = uVar3;
    FUN_018c9eb0(*(undefined8 *)(param_1 + 0x40),uVar3);
    *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 200) = 0;
  }
  return;
}

