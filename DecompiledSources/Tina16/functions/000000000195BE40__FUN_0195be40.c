/* Ghidra address: 0195be40 */
/* Ghidra symbol: FUN_0195be40 */


longlong * FUN_0195be40(longlong *param_1,undefined1 param_2,double param_3,double param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  undefined1 *local_60;
  int local_4c;
  double local_48;
  double local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_60 = auStack_98;
  *(undefined1 *)(param_1 + 0x53) = 1;
  local_38 = (longlong *)FUN_00605cc0(&PTR_FUN_0180c1a8,1);
  local_4c = 0;
  cVar2 = FUN_004113d0(param_1,&PTR_FUN_0192b480);
  if (cVar2 != '\0') {
    local_4c = 1;
  }
  FUN_0195c0d0(param_1,&local_40,&local_48);
  iVar3 = FUN_0040c770((double)param_1[0x15] * local_40);
  (**(code **)(*local_38 + 0x88))(local_38,iVar3 + local_4c);
  iVar3 = FUN_0040c770((double)param_1[0x16] * local_48);
  (**(code **)(*local_38 + 0x70))(local_38,iVar3 + local_4c);
  plVar1 = local_38;
  *(undefined1 *)(local_38 + 10) = 1;
  iVar3 = (**(code **)(*local_38 + 0x48))(local_38);
  if (iVar3 < 1) {
    (**(code **)(*local_38 + 0x70))(local_38,1);
  }
  iVar3 = (**(code **)(*local_38 + 0x60))(local_38);
  if (iVar3 < 1) {
    (**(code **)(*local_38 + 0x88))(local_38,1);
  }
  local_30 = FUN_006056e0(&PTR_FUN_005f7f40,1,plVar1,0);
  *(undefined1 *)((longlong)param_1 + 0x299) = param_2;
  FUN_005fdf10(local_30);
  dVar4 = (double)FUN_019508b0(param_1);
  dVar5 = (double)FUN_01950860(param_1);
  local_78 = -dVar4 * param_3;
  local_70 = -dVar5 * param_4;
  (**(code **)(*param_1 + 0x2e8))(param_1,local_30,param_3,param_4);
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((longlong)param_1 + 0x299) = 0;
  FUN_005fe090(local_30);
  FUN_00410f20(local_30);
  return local_38;
}

