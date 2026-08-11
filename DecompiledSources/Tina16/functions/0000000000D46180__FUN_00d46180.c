/* Ghidra address: 00d46180 */
/* Ghidra symbol: FUN_00d46180 */


void FUN_00d46180(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = *param_2;
  if (iVar1 != 1) {
    if (iVar1 == 0x14) {
      (**(code **)(*param_1 + 0x48))(param_1);
      FUN_00d46020(param_1,0xffffffff);
      uVar2 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 6) = uVar2;
      return;
    }
    if (iVar1 == 0x4e) {
      if (param_1[0x19] == 0) {
        lVar3 = FUN_00611df0(param_1[1]);
        param_1[0x18] = lVar3;
        if (param_1[0x18] != 0) {
          lVar3 = FUN_00d46280(&PTR_FUN_00d34430,1,param_1[0x18]);
          param_1[0x19] = lVar3;
          *(longlong **)(lVar3 + 0x88) = param_1;
        }
      }
      if ((*(longlong *)(param_2 + 2) == 0) && (*(longlong *)(param_2 + 4) == 0)) {
        return;
      }
      uVar2 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 6) = uVar2;
      return;
    }
    if (iVar1 != 0x102a) {
      FUN_00d3dfa0(param_1,param_2);
      return;
    }
  }
  uVar2 = FUN_00788400(param_1,param_2);
  *(undefined8 *)(param_2 + 6) = uVar2;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00d46020(param_1,0xffffffff);
  return;
}

