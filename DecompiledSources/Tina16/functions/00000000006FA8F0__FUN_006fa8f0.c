/* Ghidra address: 006fa8f0 */
/* Ghidra symbol: FUN_006fa8f0 */


undefined8 FUN_006fa8f0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  
  if ((((*(ushort *)(param_1 + 0x34) & 0x10) == 0) &&
      (((*(longlong *)(param_1 + 0x330) != 0 &&
        (*(char *)(*(longlong *)(param_1 + 0x330) + 0xd1) != '\0')) ||
       (*(longlong *)(param_1 + 0x328) != 0)))) && (*(longlong *)(param_1 + 0x340) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x340);
    pcVar3 = (code *)FUN_00411550(uVar1,0xffab);
    cVar2 = (*pcVar3)(uVar1,param_1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

