/* Ghidra address: 00a3d170 */
/* Ghidra symbol: FUN_00a3d170 */


void FUN_00a3d170(longlong *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined7 uVar3;
  bool bVar4;
  
  if (-1 < param_2) {
    iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    if ((param_2 <= iVar1 + -1) && (-1 < param_3)) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
      if (param_3 <= iVar1 + -1) {
        lVar2 = FUN_00a39e90(param_1);
        uVar3 = (undefined7)((ulonglong)lVar2 >> 8);
        if (*(byte *)(lVar2 + 0x491) < 8) {
          bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)(lVar2 + 0x491) & 0x1f) & 9U) != 0;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          FUN_00a3c940(param_1,param_2,param_3,param_4);
        }
        else {
          if (*(byte *)(lVar2 + 0x491) < 8) {
            bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)(lVar2 + 0x491) & 0x1f) & 0x10U) != 0;
          }
          else {
            bVar4 = false;
          }
          if (bVar4) {
            FUN_00a3cba0(param_1,param_2,param_3,param_4);
          }
          else {
            FUN_00a3caf0(param_1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}

