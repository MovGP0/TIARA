/* Ghidra address: 0074a520 */
/* Ghidra symbol: FUN_0074a520 */


void FUN_0074a520(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    if (((param_2 != *(int *)(param_1 + 0x4a8)) && (-1 < param_2)) &&
       (param_2 < *(int *)(*(longlong *)(param_1 + 0x498) + 0x10))) {
      lVar3 = FUN_007f9b70(param_1,1);
      if (lVar3 != 0) {
        cVar2 = FUN_00654850(param_1,*(undefined8 *)(lVar3 + 0x4c0));
        if (cVar2 != '\0') {
          FUN_00801e40(lVar3,param_1);
        }
      }
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x498),param_2);
      FUN_0064e1d0(uVar4);
      FUN_0064dbe0(uVar4,1);
      FUN_0064c650(uVar4,5);
      iVar1 = *(int *)(param_1 + 0x4a8);
      if ((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(param_1 + 0x498) + 0x10))) {
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x498),iVar1);
        FUN_0064dbe0(uVar4,0);
      }
      *(int *)(param_1 + 0x4a8) = param_2;
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x4c0) == param_1)) {
        FUN_0065c230(param_1);
      }
      if (*(longlong *)(param_1 + 0x4b0) != 0) {
        (**(code **)(param_1 + 0x4b0))(*(undefined8 *)(param_1 + 0x4b8),param_1);
      }
    }
  }
  else {
    *(int *)(param_1 + 0x4a8) = param_2;
  }
  return;
}

