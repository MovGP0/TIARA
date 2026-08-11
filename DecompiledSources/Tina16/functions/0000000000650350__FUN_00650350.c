/* Ghidra address: 00650350 */
/* Ghidra symbol: FUN_00650350 */


undefined8 FUN_00650350(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
    if (((lVar2 == 0) ||
        (iVar1 = *(int *)(lVar2 + 0x2f0), iVar1 == *(int *)(*(longlong *)(param_1 + 0x70) + 0x2f0)))
       && ((*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) != 0 ||
           (((*(char *)(*(longlong *)(param_1 + 0x70) + 0xad) == '\0' &&
             ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xb3) & 1) != 0)) ||
            (iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x2f0),
            iVar1 == *(int *)(*(longlong *)(param_1 + 0x70) + 0x90))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  else if (param_2 == '\x01') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
    if (((lVar2 == 0) ||
        (iVar1 = *(int *)(lVar2 + 0x2f4), iVar1 == *(int *)(*(longlong *)(param_1 + 0x70) + 0x2f4)))
       && (((*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) != 0 ||
            ((*(char *)(*(longlong *)(param_1 + 0x70) + 0xad) == '\0' &&
             ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xb3) & 2) != 0)))) ||
           (iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x2f4),
           iVar1 == *(int *)(*(longlong *)(param_1 + 0x70) + 0x94))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  else if (param_2 == '\x02') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
    if (((lVar2 == 0) ||
        (iVar1 = *(int *)(lVar2 + 0x2f8), iVar1 == *(int *)(*(longlong *)(param_1 + 0x70) + 0x2f8)))
       && ((*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) != 0 ||
           (((*(char *)(*(longlong *)(param_1 + 0x70) + 0xad) == '\0' &&
             ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xb3) & 5) != 5)) ||
            (iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x2f8),
            iVar1 == *(int *)(*(longlong *)(param_1 + 0x70) + 0x98))))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  else if (param_2 == '\x03') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
    if (((lVar2 == 0) ||
        (iVar1 = *(int *)(lVar2 + 0x2fc), iVar1 == *(int *)(*(longlong *)(param_1 + 0x70) + 0x2fc)))
       && (((*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40) != 0 ||
            ((*(char *)(*(longlong *)(param_1 + 0x70) + 0xad) == '\0' &&
             ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xb3) & 10) != 10)))) ||
           (iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x2fc),
           iVar1 == *(int *)(*(longlong *)(param_1 + 0x70) + 0x9c))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

