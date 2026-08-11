/* Ghidra address: 01be4600 */
/* Ghidra symbol: FUN_01be4600 */


void FUN_01be4600(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 0x14) {
    if ((*(char *)(param_1 + 0x478) != '\0') &&
       (*(longlong *)(param_2 + 2) != *(longlong *)(param_2 + 4))) {
      param_2[6] = 1;
      param_2[7] = 0;
      return;
    }
  }
  else if (iVar1 == 0x3d) {
    if ((*(longlong *)(param_2 + 4) == 0xfffffffc) && (*(longlong *)(param_1 + 0x498) != 0)) {
      if (*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x60) != 0) {
        uVar2 = thunk_FUN_04196f30(PTR_DAT_02004e68,*(undefined8 *)(param_2 + 2),
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x60));
        *(undefined8 *)(param_2 + 6) = uVar2;
        return;
      }
      lVar3 = FUN_01bd9c90(&LAB_01bd95e0,1,0,*(longlong *)(param_1 + 0x498));
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar3 + 0x10;
      }
      uVar2 = thunk_FUN_04196f30(PTR_DAT_02004e68,*(undefined8 *)(param_2 + 2),lVar3);
      *(undefined8 *)(param_2 + 6) = uVar2;
      return;
    }
  }
  else if (iVar1 == 0x84) {
    param_2[6] = 1;
    param_2[7] = 0;
  }
  FUN_00656570(param_1,param_2);
  return;
}

