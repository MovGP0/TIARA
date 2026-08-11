/* Ghidra address: 00be07e0 */
/* Ghidra symbol: FUN_00be07e0 */


undefined8
FUN_00be07e0(longlong param_1,int param_2,char param_3,byte param_4,byte param_5,int *param_6)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar4 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + (longlong)iVar4 * 0x14);
      if ((((*piVar1 < param_2) || ((param_4 & *piVar1 <= param_2) != 0)) &&
          ((param_2 < piVar1[1] || ((param_5 & param_2 <= piVar1[1]) != 0)))) &&
         ((char)piVar1[4] == param_3)) {
        *param_6 = iVar4;
        uVar2 = 1;
      }
      if (param_2 < *piVar1) {
        return uVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar2;
}

