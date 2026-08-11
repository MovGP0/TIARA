/* Ghidra address: 0197e2e0 */
/* Ghidra symbol: FUN_0197e2e0 */


undefined8 FUN_0197e2e0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  if ((param_2 == 0) ||
     ((((*(byte *)(param_2 + 0xc4) & 1) != 0 || (*(char *)(param_3 + 0xb) != '\x01')) &&
      (*(char *)(param_3 + 0x1e) == '\0')))) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
        uVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,param_2,param_3,param_4);
        if ((char)uVar2 != '\0') {
          return uVar2;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return uVar2;
}

