/* Ghidra address: 006619b0 */
/* Ghidra symbol: FUN_006619b0 */


undefined8 FUN_006619b0(longlong param_1,longlong param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = FUN_00660730(param_2,1);
  iVar2 = FUN_00660730(param_2,2);
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar4 = uVar3;
    if (((iVar2 <= *param_3) && (*param_3 <= iVar2 + *(int *)(param_1 + 0x30))) &&
       (iVar1 <= param_3[1])) {
      iVar2 = FUN_006607d0(param_2,1);
      if (param_3[1] <= iVar1 + iVar2) {
        uVar4 = 1;
        if (param_3[1] < *(int *)(*(longlong *)(param_2 + 8) + 0x94) + 0xf) {
          *param_4 = 0x14;
        }
        else {
          *param_4 = 2;
        }
      }
    }
  }
  else if (((iVar1 <= param_3[1]) && (param_3[1] <= iVar1 + *(int *)(param_1 + 0x30))) &&
          (iVar2 <= *param_3)) {
    iVar1 = FUN_006607d0(param_2,2);
    uVar4 = uVar3;
    if (*param_3 <= iVar2 + iVar1) {
      uVar4 = 1;
      if (*(int *)(*(longlong *)(param_2 + 8) + 0x90) + *(int *)(*(longlong *)(param_2 + 8) + 0x98)
          + -0xf < *param_3) {
        *param_4 = 0x14;
      }
      else {
        *param_4 = 2;
      }
    }
  }
  return uVar4;
}

