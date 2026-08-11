/* Ghidra address: 00f01db0 */
/* Ghidra symbol: FUN_00f01db0 */


void FUN_00f01db0(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != (char)param_1[0xa6]) {
    *(char *)(param_1 + 0xa6) = param_2;
    if (param_2 == '\x02') {
      if (param_1[0xa4] == 0) {
        lVar2 = FUN_0068b1b0(&PTR_FUN_00f006e0,1,param_1);
        param_1[0xa4] = lVar2;
        FUN_0064dbe0(lVar2,0);
        (**(code **)(*(longlong *)param_1[0xa4] + 0x130))((longlong *)param_1[0xa4],param_1);
        lVar2 = param_1[0xa4];
        *(longlong **)(lVar2 + 0x180) = param_1;
        *(code **)(lVar2 + 0x178) = FUN_00f01940;
        FUN_0068bb80(lVar2,0xf01901);
        FUN_0068bc30(param_1[0xa4],0xb);
      }
      param_1[0xa5] = param_1[0xa4];
    }
    else {
      param_1[0xa5] = 0;
    }
    uVar3 = FUN_00f03860(*(undefined8 *)(param_1[0xa1] + 0x660),
                         *(undefined4 *)(param_1[0xa1] + 0x4a8));
    uVar1 = FUN_00f031f0(uVar3);
    FUN_006807e0(param_1,uVar1);
    (**(code **)(*param_1 + 0x188))(param_1);
  }
  return;
}

