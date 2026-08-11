/* Ghidra address: 00fbebb0 */
/* Ghidra symbol: FUN_00fbebb0 */


void FUN_00fbebb0(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x750),local_80);
  if (local_80[0] != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))(*(longlong **)(param_1 + 0x700),1);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700))
    ;
    iVar3 = *(int *)(param_1 + 0x794 + (longlong)iVar3 * 4);
    dVar1 = *(double *)(param_1 + 0xc60);
    dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x750));
    dVar5 = (1.0 / dVar1) * 262144.0;
    if (dVar5 < dVar4) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x758),L"Time: out of range");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&DAT_00fbeee0);
    }
    else {
      FUN_00468860(&local_70,(dVar1 * dVar4) / (double)iVar3);
      iVar3 = FUN_00462650(&local_70);
      if (0x3ffff < iVar3) {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x750),dVar5);
        (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))(*(longlong **)(param_1 + 0x700),7);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&DAT_00fbeee0);
      }
      while (0xff < iVar3) {
        plVar2 = *(longlong **)(param_1 + 0x700);
        iVar3 = (**(code **)(*plVar2 + 0x260))(plVar2);
        (**(code **)(*plVar2 + 0x268))(plVar2,iVar3 + 1);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                          (*(longlong **)(param_1 + 0x700));
        FUN_00468860(&local_70,
                     (dVar1 * dVar4) / (double)*(int *)(param_1 + 0x794 + (longlong)iVar3 * 4));
        iVar3 = FUN_00462650(&local_70);
      }
      FUN_00f61040(&local_88,0xff - iVar3);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_88);
      FUN_00b8fd60(&local_98,dVar4,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_90,L"Time: ",local_98);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_90);
    }
  }
  FUN_00414560(&local_98,3);
  FUN_00414480(local_80);
  FUN_00460ba0(&local_70);
  return;
}

