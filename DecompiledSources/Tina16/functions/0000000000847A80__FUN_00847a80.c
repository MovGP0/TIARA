/* Ghidra address: 00847a80 */
/* Ghidra symbol: FUN_00847a80 */


int FUN_00847a80(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2[1];
  iVar3 = param_2[7];
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0x4f0) + -1;
  if (iVar3 <= iVar4) {
    iVar4 = (iVar4 - iVar3) + 1;
    do {
      iVar1 = (**(code **)(param_2 + 10))(*(undefined8 *)(param_2 + 0xc),iVar3);
      iVar2 = iVar2 + iVar1 + *param_2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return *(int *)(*(longlong *)(param_1 + 0xf0) + 0x4f4) - iVar2;
}

