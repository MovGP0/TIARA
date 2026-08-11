/* Ghidra address: 00650200 */
/* Ghidra symbol: FUN_00650200 */


void FUN_00650200(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 0xc) {
    uVar2 = FUN_00442bd0(*(undefined8 *)(param_2 + 4));
    FUN_00442c30(*(undefined8 *)(param_1 + 0x2c0));
    *(undefined8 *)(param_1 + 0x2c0) = uVar2;
    FUN_0064d420(param_1,*param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else if (iVar1 == 0xd) {
    puVar3 = *(undefined1 **)(param_1 + 0x2c0);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &LAB_006502c4;
    }
    uVar2 = FUN_00442580(*(undefined8 *)(param_2 + 4),puVar3,param_2[2] + -1);
    iVar1 = FUN_00414d00(uVar2);
    *(longlong *)(param_2 + 6) = (longlong)iVar1;
  }
  else if (iVar1 == 0xe) {
    if (*(longlong *)(param_1 + 0x2c0) == 0) {
      param_2[6] = 0;
      param_2[7] = 0;
    }
    else {
      iVar1 = FUN_00414d00(*(longlong *)(param_1 + 0x2c0));
      *(longlong *)(param_2 + 6) = (longlong)iVar1;
    }
  }
  return;
}

